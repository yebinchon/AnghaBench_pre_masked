
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zd_usb {int is_zd1211b; } ;
struct usb_interface {int dev; } ;
struct usb_device_id {int driver_info; } ;
struct usb_device {int speed; } ;
struct ieee80211_hw {int wiphy; } ;
struct TYPE_4__ {struct zd_usb usb; } ;
struct TYPE_5__ {TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_device*) ;
 int FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_11 (struct usb_interface*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_14(struct usb_interface *VAR_4, const struct usb_device_id *VAR_5)
{
 int VAR_6;
 struct usb_device *VAR_7 = FUNC_6(VAR_4);
 struct zd_usb *VAR_8;
 struct ieee80211_hw *VAR_9 = ((void*)0);

 FUNC_7(VAR_7);

 if (VAR_5->driver_info & VAR_0)
  return FUNC_3(VAR_4);

 switch (VAR_7->speed) {
 case 128:
 case 130:
 case 129:
  break;
 default:
  FUNC_0(&VAR_4->dev, "Unknown USB speed\n");
  VAR_6 = -VAR_2;
  goto error;
 }

 VAR_6 = FUNC_8(VAR_7);
 if (VAR_6) {
  FUNC_1(&VAR_4->dev,
   "couldn't reset usb device. Error number %d\n", VAR_6);
  goto error;
 }

 VAR_9 = FUNC_11(VAR_4);
 if (VAR_9 == ((void*)0)) {
  VAR_6 = -VAR_3;
  goto error;
 }

 VAR_8 = &FUNC_10(VAR_9)->chip.usb;
 VAR_8->is_zd1211b = (VAR_5->driver_info == VAR_1) != 0;

 VAR_6 = FUNC_13(VAR_9);
 if (VAR_6) {
  FUNC_0(&VAR_4->dev,
           "couldn't initialize mac. Error number %d\n", VAR_6);
  goto error;
 }

 VAR_6 = FUNC_5(VAR_9);
 if (VAR_6) {
  FUNC_0(&VAR_4->dev,
    "couldn't register device. Error number %d\n", VAR_6);
  goto error;
 }

 FUNC_0(&VAR_4->dev, "successful\n");
 FUNC_2(&VAR_4->dev, "%s\n", FUNC_9(VAR_9->wiphy));
 return 0;
error:
 FUNC_8(FUNC_6(VAR_4));
 if (VAR_9) {
  FUNC_12(FUNC_10(VAR_9));
  FUNC_4(VAR_9);
 }
 return VAR_6;
}
