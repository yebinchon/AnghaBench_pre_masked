
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct usb_interface {struct device dev; } ;
struct usb_device {scalar_t__ auto_pm; } ;
struct i2400m {scalar_t__ updown; scalar_t__ state; } ;
struct i2400mu {int do_autopm; struct i2400m i2400m; struct usb_device* usb_dev; } ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ pm_message_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,struct device*,char*,struct usb_interface*,int ,int) ;
 int FUNC_3 (int,struct device*,char*,struct usb_interface*,int ) ;
 int FUNC_4 (int,struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct i2400m*) ;
 int FUNC_7 (struct i2400mu*) ;
 struct i2400mu* FUNC_8 (struct usb_interface*) ;

__attribute__((used)) static
int FUNC_9(struct usb_interface *VAR_2, pm_message_t VAR_3)
{
 int VAR_4 = 0;
 struct device *VAR_5 = &VAR_2->dev;
 struct i2400mu *VAR_6 = FUNC_8(VAR_2);



 unsigned VAR_7 = 0;
 struct i2400m *VAR_8 = &VAR_6->i2400m;






 FUNC_3(3, VAR_5, "(iface %p pm_msg %u)\n", VAR_2, VAR_3.event);
 if (VAR_8->updown == 0)
  goto no_firmware;
 if (VAR_8->state == VAR_1 && VAR_7) {
  VAR_4 = -VAR_0;
  FUNC_4(1, VAR_5, "fw up, link up, not-idle, autosuspend: "
    "not entering powersave\n");
  goto error_not_now;
 }
 FUNC_4(1, VAR_5, "fw up: entering powersave\n");
 FUNC_0(&VAR_6->do_autopm);
 VAR_4 = FUNC_6(VAR_8);
 FUNC_1(&VAR_6->do_autopm);
 if (VAR_4 < 0 && !VAR_7) {

  FUNC_5(VAR_5, "failed to suspend, will reset on resume\n");
  VAR_4 = 0;
 }
 if (VAR_4 < 0)
  goto error_enter_powersave;
 FUNC_7(VAR_6);
 FUNC_4(1, VAR_5, "powersave requested\n");
error_enter_powersave:
error_not_now:
no_firmware:
 FUNC_2(3, VAR_5, "(iface %p pm_msg %u) = %d\n",
  VAR_2, VAR_3.event, VAR_4);
 return VAR_4;
}
