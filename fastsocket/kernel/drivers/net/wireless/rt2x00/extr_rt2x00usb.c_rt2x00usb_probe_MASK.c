
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device {int dummy; } ;
struct rt2x00_ops {int hw; } ;
struct rt2x00_dev {int txstatus_timer; int txdone_work; int rxdone_work; struct ieee80211_hw* hw; struct rt2x00_ops const* ops; int * dev; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 struct ieee80211_hw* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct rt2x00_dev*,int ) ;
 int FUNC_7 (struct rt2x00_dev*) ;
 int FUNC_8 (struct rt2x00_dev*) ;
 int FUNC_9 (struct rt2x00_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct usb_device* FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_device*) ;
 int FUNC_12 (struct usb_device*) ;
 int FUNC_13 (struct usb_interface*,struct ieee80211_hw*) ;

int FUNC_14(struct usb_interface *VAR_6,
      const struct rt2x00_ops *VAR_7)
{
 struct usb_device *VAR_8 = FUNC_4(VAR_6);
 struct ieee80211_hw *VAR_9;
 struct rt2x00_dev *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_10(VAR_8);
 FUNC_12(VAR_8);

 VAR_9 = FUNC_2(sizeof(struct rt2x00_dev), VAR_7->hw);
 if (!VAR_9) {
  FUNC_5("Failed to allocate hardware\n");
  VAR_11 = -VAR_1;
  goto exit_put_device;
 }

 FUNC_13(VAR_6, VAR_9);

 VAR_10 = VAR_9->priv;
 VAR_10->dev = &VAR_6->dev;
 VAR_10->ops = VAR_7;
 VAR_10->hw = VAR_9;

 FUNC_6(VAR_10, VAR_3);

 FUNC_0(&VAR_10->rxdone_work, VAR_4);
 FUNC_0(&VAR_10->txdone_work, VAR_5);
 FUNC_1(&VAR_10->txstatus_timer, VAR_0,
       VAR_2);

 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11)
  goto exit_free_device;

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11)
  goto exit_free_reg;

 return 0;

exit_free_reg:
 FUNC_9(VAR_10);

exit_free_device:
 FUNC_3(VAR_9);

exit_put_device:
 FUNC_11(VAR_8);

 FUNC_13(VAR_6, ((void*)0));

 return VAR_11;
}
