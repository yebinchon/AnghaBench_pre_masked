
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct hw_data {int* TxVgaFor24; TYPE_1__* TxVgaFor50; } ;
struct TYPE_5__ {int band; int ChanNo; } ;
struct TYPE_4__ {int TxVgaValue; int ChanNo; } ;
typedef TYPE_2__ ChanInfo ;





 int FUNC_0 (struct hw_data*,int) ;

void FUNC_1( struct hw_data * VAR_0, ChanInfo VAR_1)
{
 u8 VAR_2, VAR_3 = 100;

 switch ( VAR_1.band )
 {
  case 130:
  case 129:
   {
    if (VAR_0->TxVgaFor24[VAR_1.ChanNo - 1] != 0xff)
     VAR_3 = VAR_0->TxVgaFor24[VAR_1.ChanNo - 1];
   }
   break;
  case 128:
   {
    for (VAR_2 =0; VAR_2<35; VAR_2++)
    {
     if (VAR_1.ChanNo == VAR_0->TxVgaFor50[VAR_2].ChanNo)
     {
      if (VAR_0->TxVgaFor50[VAR_2].TxVgaValue != 0xff)
       VAR_3 = VAR_0->TxVgaFor50[VAR_2].TxVgaValue;
      break;
     }
    }
   }
   break;
 }
 FUNC_0( VAR_0, VAR_3 );
}
