
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct device {int dummy; } ;
struct usb_device {struct device dev; } ;
struct p54u_priv {TYPE_1__* udev; int fw_wait_load; } ;
struct ieee80211_hw {struct p54u_priv* priv; } ;
struct TYPE_5__ {int fw; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct p54u_priv*) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,int,int ,struct device*,int ,struct p54u_priv*,int ) ;
 int FUNC_8 (struct usb_device*) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_hw *VAR_5,
         struct usb_interface *VAR_6)
{
 struct usb_device *VAR_7 = FUNC_5(VAR_6);
 struct p54u_priv *VAR_8 = VAR_5->priv;
 struct device *VAR_9 = &VAR_7->dev;
 int VAR_10, VAR_11;

 FUNC_1(FUNC_0(VAR_3) != VAR_2);

 FUNC_4(&VAR_8->fw_wait_load);
 VAR_11 = FUNC_6(VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_3(&VAR_8->udev->dev, "Loading firmware file %s\n",
        VAR_3[VAR_11].fw);

 FUNC_8(VAR_7);
 VAR_10 = FUNC_7(VAR_1, 1, VAR_3[VAR_11].fw,
          VAR_9, VAR_0, VAR_8,
          VAR_4);
 if (VAR_10) {
  FUNC_2(&VAR_8->udev->dev, "(p54usb) cannot load firmware %s "
       "(%d)!\n", VAR_3[VAR_11].fw, VAR_10);
 }

 return VAR_10;
}
