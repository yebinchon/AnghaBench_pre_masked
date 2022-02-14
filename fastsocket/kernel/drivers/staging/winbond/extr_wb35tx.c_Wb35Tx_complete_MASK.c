
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb35_mds {scalar_t__* TxOwner; } ;
struct wb35_tx {scalar_t__ EP4VM_status; size_t TxSendIndex; void* EP4vm_state; int TxFireCounter; scalar_t__ tx_halt; } ;
struct hw_data {scalar_t__ HwStop; scalar_t__ SurpriseRemove; struct wb35_tx Wb35Tx; } ;
struct wbsoft_priv {struct wb35_mds Mds; struct hw_data sHwData; } ;
struct urb {scalar_t__ status; struct wbsoft_priv* context; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct wbsoft_priv*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct wbsoft_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct urb * VAR_3)
{
 struct wbsoft_priv *VAR_4 = VAR_3->context;
 struct hw_data * VAR_5 = &VAR_4->sHwData;
 struct wb35_tx *VAR_6 = &VAR_5->Wb35Tx;
 struct wb35_mds *VAR_7 = &VAR_4->Mds;

 FUNC_3("wb35: tx complete\n");

 VAR_6->EP4vm_state = VAR_1;
 VAR_6->EP4VM_status = VAR_3->status;
 VAR_7->TxOwner[ VAR_6->TxSendIndex ] = 0;
 VAR_6->TxSendIndex++;
 VAR_6->TxSendIndex %= VAR_0;

 if (VAR_5->SurpriseRemove || VAR_5->HwStop)
  goto error;

 if (VAR_6->tx_halt)
  goto error;


 if (VAR_6->EP4VM_status != 0) {
  FUNC_3("URB submission failed\n");
  VAR_6->EP4vm_state = VAR_2;
  goto error;
 }

 FUNC_0(VAR_4);
 FUNC_1(VAR_4);
 return;

error:
 FUNC_2(&VAR_6->TxFireCounter);
 VAR_6->EP4vm_state = VAR_2;
}
