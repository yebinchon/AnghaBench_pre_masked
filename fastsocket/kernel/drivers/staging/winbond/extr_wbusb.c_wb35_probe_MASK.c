
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wb_usb {int IsUsb20; struct usb_device* udev; } ;
struct hw_data {struct wb_usb WbUsb; } ;
struct wbsoft_priv {struct hw_data sHwData; int SpinLock; } ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct usb_host_interface {TYPE_1__* endpoint; } ;
struct usb_endpoint_descriptor {int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct ieee80211_hw {int extra_tx_headroom; int channel_change_time; int max_signal; int queues; TYPE_2__* wiphy; int flags; struct wbsoft_priv* priv; } ;
struct TYPE_4__ {int ** bands; int interface_modes; } ;
struct TYPE_3__ {struct usb_endpoint_descriptor desc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ieee80211_hw*,int *) ;
 int FUNC_2 (struct ieee80211_hw*,unsigned char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct hw_data*,unsigned char*) ;
 struct ieee80211_hw* FUNC_5 (int,int *) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct usb_device*,int ,int,int,int,int,scalar_t__*,int,int) ;
 int FUNC_12 (struct usb_device*) ;
 int FUNC_13 (struct usb_device*) ;
 int FUNC_14 (struct usb_device*,int ) ;
 int FUNC_15 (struct usb_interface*,struct ieee80211_hw*) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_17(struct usb_interface *VAR_12,
        const struct usb_device_id *VAR_13)
{
 struct usb_device *VAR_14 = FUNC_8(VAR_12);
 struct usb_endpoint_descriptor *VAR_15;
 struct usb_host_interface *VAR_16;
 struct ieee80211_hw *VAR_17;
 struct wbsoft_priv *VAR_18;
 struct wb_usb *VAR_19;
 int VAR_20, VAR_21;
 u32 VAR_22;

 FUNC_12(VAR_14);


 VAR_20 = FUNC_11(VAR_14, FUNC_14(VAR_14, 0),
        0x01,
        VAR_9 | VAR_8 | VAR_7,
        0x0, 0x400, &VAR_22, 4, VAR_2 * 100);
 if (VAR_20 < 0) {
  VAR_21 = VAR_20;
  goto error;
 }


 VAR_22 = FUNC_3(VAR_22);
 if (VAR_22) {
  VAR_21 = -VAR_0;
  goto error;
 }

 VAR_17 = FUNC_5(sizeof(*VAR_18), &VAR_11);
 if (!VAR_17) {
  VAR_21 = -VAR_1;
  goto error;
 }

 VAR_18 = VAR_17->priv;

 FUNC_10(&VAR_18->SpinLock);

 VAR_19 = &VAR_18->sHwData.WbUsb;
 VAR_19->udev = VAR_14;

 VAR_16 = VAR_12->cur_altsetting;
 VAR_15 = &VAR_16->endpoint[0].desc;

 if (VAR_15[2].wMaxPacketSize == 512) {
  FUNC_9("[w35und] Working on USB 2.0\n");
  VAR_19->IsUsb20 = 1;
 }

 VAR_21 = FUNC_16(VAR_17);
 if (VAR_21)
  goto error_free_hw;

 FUNC_1(VAR_17, &VAR_14->dev);
 {
  struct hw_data *VAR_23 = &VAR_18->sHwData;
  unsigned char VAR_24[VAR_5];
  FUNC_4(VAR_23, VAR_24);
  FUNC_2(VAR_17, VAR_24);
 }

 VAR_17->extra_tx_headroom = 12;
 VAR_17->flags = VAR_4;
 VAR_17->wiphy->interface_modes = FUNC_0(VAR_6);

 VAR_17->channel_change_time = 1000;
 VAR_17->max_signal = 100;
 VAR_17->queues = 1;

 VAR_17->wiphy->bands[VAR_3] = &VAR_10;

 VAR_21 = FUNC_7(VAR_17);
 if (VAR_21)
  goto error_free_hw;

 FUNC_15(VAR_12, VAR_17);

 return 0;

error_free_hw:
 FUNC_6(VAR_17);
error:
 FUNC_13(VAR_14);
 return VAR_21;
}
