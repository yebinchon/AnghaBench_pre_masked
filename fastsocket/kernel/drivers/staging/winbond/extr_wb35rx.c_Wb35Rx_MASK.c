
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_2__ {int udev; } ;
struct wb35_rx {size_t RxBufferId; size_t CurrentRxBufferId; int RxFireCounter; int EP3vm_state; int * pDRx; int * RxOwner; scalar_t__ rx_halt; struct urb* RxUrb; } ;
struct hw_data {TYPE_1__ WbUsb; scalar_t__ HwStop; scalar_t__ SurpriseRemove; struct wb35_rx Wb35Rx; } ;
struct wbsoft_priv {struct hw_data sHwData; } ;
struct urb {int dummy; } ;
struct ieee80211_hw {struct wbsoft_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct urb*,int ,int ,int *,int ,int ,struct ieee80211_hw*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_6)
{
 struct wbsoft_priv *VAR_7 = VAR_6->priv;
 struct hw_data * VAR_8 = &VAR_7->sHwData;
 struct wb35_rx *VAR_9 = &VAR_8->Wb35Rx;
 u8 * VAR_10;
 struct urb *VAR_11 = VAR_9->RxUrb;
 int VAR_12;
 u32 VAR_13;




 if (VAR_8->SurpriseRemove || VAR_8->HwStop)
  goto error;

 if (VAR_9->rx_halt)
  goto error;


 VAR_13 = VAR_9->RxBufferId;
 if (!VAR_9->RxOwner[VAR_13]) {




  goto error;
 }


 VAR_9->RxBufferId++;
 VAR_9->RxBufferId %= VAR_2;

 VAR_9->CurrentRxBufferId = VAR_13;

 VAR_9->pDRx = FUNC_1(VAR_1, VAR_0);
 if (!VAR_9->pDRx) {
  FUNC_2("w35und: Rx memory alloc failed\n");
  goto error;
 }
 VAR_10 = VAR_9->pDRx;

 FUNC_3(VAR_11, VAR_8->WbUsb.udev,
     FUNC_4(VAR_8->WbUsb.udev, 3),
     VAR_10, VAR_1,
     VAR_5, VAR_6);

 VAR_9->EP3vm_state = VAR_3;

 VAR_12 = FUNC_5(VAR_11, VAR_0);

 if (VAR_12 != 0) {
  FUNC_2("Rx URB sending error\n");
  goto error;
 }
 return;

error:

 VAR_9->EP3vm_state = VAR_4;
 FUNC_0(&VAR_9->RxFireCounter);
}
