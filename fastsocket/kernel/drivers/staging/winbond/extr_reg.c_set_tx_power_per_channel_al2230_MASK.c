
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hw_data {int* TxVgaFor24; } ;
struct TYPE_3__ {int ChanNo; } ;
typedef TYPE_1__ ChanInfo ;


 int FUNC_0 (struct hw_data*,int) ;

void FUNC_1( struct hw_data * VAR_0, ChanInfo VAR_1 )
{
 u8 VAR_2 = 100;

 if (VAR_0->TxVgaFor24[VAR_1.ChanNo - 1] != 0xff)
  VAR_2 = VAR_0->TxVgaFor24[VAR_1.ChanNo - 1];

 FUNC_0( VAR_0, VAR_2 );
}
