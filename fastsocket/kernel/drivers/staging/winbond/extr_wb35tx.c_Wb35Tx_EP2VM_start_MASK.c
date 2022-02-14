
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_tx {int TxResultCount; int EP2vm_state; } ;
struct hw_data {struct wb35_tx Wb35Tx; } ;
struct wbsoft_priv {struct hw_data sHwData; } ;


 int VAR_0 ;
 int FUNC_0 (struct wbsoft_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct wbsoft_priv *VAR_1)
{
 struct hw_data * VAR_2 = &VAR_1->sHwData;
 struct wb35_tx *VAR_3 = &VAR_2->Wb35Tx;


 if (FUNC_2(&VAR_3->TxResultCount) == 1) {
  VAR_3->EP2vm_state = VAR_0;
  FUNC_0(VAR_1);
 }
 else
  FUNC_1(&VAR_3->TxResultCount);
}
