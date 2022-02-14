
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hw_data {int* TxVgaFor24; } ;
struct TYPE_3__ {int band; int ChanNo; } ;
typedef TYPE_1__ ChanInfo ;





 int FUNC_0 (struct hw_data*,int) ;

void FUNC_1( struct hw_data * VAR_0, ChanInfo VAR_1)
{
 u8 VAR_2 = 100;

 switch ( VAR_1.band )
 {
  case 130:
  case 129:
   {
    if (VAR_0->TxVgaFor24[VAR_1.ChanNo - 1] != 0xff)
     VAR_2 = VAR_0->TxVgaFor24[VAR_1.ChanNo - 1];
   }
   break;
  case 128:
   break;
 }
 FUNC_0( VAR_0, VAR_2 );
}
