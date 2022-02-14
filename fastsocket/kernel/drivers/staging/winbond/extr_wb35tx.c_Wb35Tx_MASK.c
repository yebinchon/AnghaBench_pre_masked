
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct wb35_mds {scalar_t__* TxBufferSize; scalar_t__* TxCountInBuffer; int * TxOwner; } ;
struct TYPE_2__ {int udev; } ;
struct wb35_tx {size_t TxSendIndex; int TxFillCount; int TxFireCounter; int EP4vm_state; int ByteTransfer; int ** TxBuffer; scalar_t__ tx_halt; scalar_t__ Tx4Urb; } ;
struct hw_data {TYPE_1__ WbUsb; scalar_t__ HwStop; scalar_t__ SurpriseRemove; struct wb35_tx Wb35Tx; } ;
struct wbsoft_priv {struct wb35_mds Mds; struct hw_data sHwData; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wbsoft_priv*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct urb*,int ,int ,int *,scalar_t__,int ,struct wbsoft_priv*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_6(struct wbsoft_priv *VAR_4)
{
 struct hw_data * VAR_5 = &VAR_4->sHwData;
 struct wb35_tx *VAR_6 = &VAR_5->Wb35Tx;
 u8 *VAR_7;
 struct wb35_mds *VAR_8 = &VAR_4->Mds;
 struct urb * VAR_9 = (struct urb *)VAR_6->Tx4Urb;
 int VAR_10;
 u32 VAR_11;


 if (VAR_5->SurpriseRemove || VAR_5->HwStop)
  goto cleanup;

 if (VAR_6->tx_halt)
  goto cleanup;


 VAR_11 = VAR_6->TxSendIndex;
 if (!VAR_8->TxOwner[VAR_11])
  goto cleanup;

 VAR_7 = VAR_6->TxBuffer[VAR_11];



 FUNC_3(VAR_9, VAR_5->WbUsb.udev,
     FUNC_4(VAR_5->WbUsb.udev, 4),
     VAR_7, VAR_8->TxBufferSize[ VAR_11 ],
     VAR_3, VAR_4);

 VAR_6->EP4vm_state = VAR_1;
 VAR_10 = FUNC_5(VAR_9, VAR_0);
 if (VAR_10<0) {
  FUNC_2("EP4 Tx Irp sending error\n");
  goto cleanup;
 }


 VAR_6->TxFillCount += VAR_8->TxCountInBuffer[VAR_11];
 if (VAR_6->TxFillCount > 12)
  FUNC_0(VAR_4);

 VAR_6->ByteTransfer += VAR_8->TxBufferSize[VAR_11];
 return;

 cleanup:
 VAR_6->EP4vm_state = VAR_2;
 FUNC_1(&VAR_6->TxFireCounter);
}
