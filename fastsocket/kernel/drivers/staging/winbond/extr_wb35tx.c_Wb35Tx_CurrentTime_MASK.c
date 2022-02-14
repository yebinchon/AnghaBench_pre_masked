
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wb35_tx {scalar_t__ TxTimer; } ;
struct hw_data {struct wb35_tx Wb35Tx; } ;
struct wbsoft_priv {struct hw_data sHwData; } ;


 int FUNC_0 (struct wbsoft_priv*) ;

void FUNC_1(struct wbsoft_priv *VAR_0, u32 VAR_1)
{
 struct hw_data * VAR_2 = &VAR_0->sHwData;
 struct wb35_tx *VAR_3 = &VAR_2->Wb35Tx;
 unsigned char VAR_4 = 0;

 if (VAR_3->TxTimer > VAR_1)
  VAR_4 = 1;
 else if (VAR_1 > (VAR_3->TxTimer+500))
  VAR_4 = 1;

 if (VAR_4) {
  VAR_3->TxTimer = VAR_1;
  FUNC_0(VAR_0);
 }
}
