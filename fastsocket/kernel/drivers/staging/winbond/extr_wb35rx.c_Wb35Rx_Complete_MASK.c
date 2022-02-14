
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct wb35_rx {scalar_t__ EP3VM_status; size_t CurrentRxBufferId; int* RxOwner; int ByteReceived; int* RxBufferSize; void* EP3vm_state; int RxFireCounter; int * pDRx; int Ep3ErrorCount2; scalar_t__ rx_halt; } ;
struct hw_data {scalar_t__ HwStop; scalar_t__ SurpriseRemove; struct wb35_rx Wb35Rx; } ;
struct wbsoft_priv {struct hw_data sHwData; } ;
struct urb {scalar_t__ status; scalar_t__ actual_length; struct ieee80211_hw* context; } ;
struct ieee80211_hw {struct wbsoft_priv* priv; } ;
struct TYPE_2__ {size_t R00_receive_byte_count; int value; } ;
typedef TYPE_1__ R00_DESCRIPTOR ;


 int FUNC_0 (struct hw_data*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_2)
{
 struct ieee80211_hw *VAR_3 = VAR_2->context;
 struct wbsoft_priv *VAR_4 = VAR_3->priv;
 struct hw_data * VAR_5 = &VAR_4->sHwData;
 struct wb35_rx *VAR_6 = &VAR_5->Wb35Rx;
 u8 * VAR_7;
 u32 VAR_8;
 u16 VAR_9;
 u32 VAR_10;
 R00_DESCRIPTOR VAR_11;


 VAR_6->EP3vm_state = VAR_0;
 VAR_6->EP3VM_status = VAR_2->status;

 VAR_10 = VAR_6->CurrentRxBufferId;

 VAR_7 = VAR_6->pDRx;
 VAR_9 = (u16)VAR_2->actual_length;


 VAR_6->EP3vm_state = VAR_0;

 if (VAR_5->SurpriseRemove || VAR_5->HwStop)
  goto error;

 if (VAR_6->rx_halt)
  goto error;


 VAR_6->RxOwner[ VAR_10 ] = 0;
 VAR_11 = FUNC_5(*(u32 *)VAR_7);


 if (VAR_6->EP3VM_status != 0) {



  VAR_6->EP3vm_state = VAR_1;
  goto error;
 }


 if (!FUNC_0(VAR_5)) {
  VAR_8 = VAR_11;
  if ((VAR_8 & 0x03) > 0)
   VAR_8 -= 4;
  VAR_8 = (VAR_8 + 3) & ~0x03;
  VAR_8 += 12;
  if ((VAR_9 > 1600) ||
   (VAR_8 > 1600) ||
   (VAR_9 != VAR_8) ||
   (VAR_9 == 0)) {
   VAR_6->EP3vm_state = VAR_1;
   VAR_6->Ep3ErrorCount2++;
  }
 }


 VAR_6->ByteReceived += VAR_9;
 VAR_6->RxBufferSize[ VAR_10 ] = VAR_9;

 if (!VAR_6->RxOwner[ VAR_10 ])
  FUNC_2(VAR_3);

 FUNC_4(VAR_6->pDRx);

 FUNC_1(VAR_3);
 return;

error:
 VAR_6->RxOwner[ VAR_10 ] = 1;
 FUNC_3(&VAR_6->RxFireCounter);
 VAR_6->EP3vm_state = VAR_1;
}
