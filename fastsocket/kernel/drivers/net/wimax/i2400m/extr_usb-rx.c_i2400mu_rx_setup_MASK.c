
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wimax_dev {int name; } ;
struct i2400m {struct wimax_dev wimax_dev; } ;
struct i2400mu {int rx_kthread; TYPE_1__* usb_iface; struct i2400m i2400m; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct i2400mu*,char*,int ) ;

int FUNC_4(struct i2400mu *VAR_1)
{
 int VAR_2 = 0;
 struct i2400m *VAR_3 = &VAR_1->i2400m;
 struct device *VAR_4 = &VAR_1->usb_iface->dev;
 struct wimax_dev *VAR_5 = &VAR_3->wimax_dev;

 VAR_1->rx_kthread = FUNC_3(VAR_0, VAR_1, "%s-rx",
       VAR_5->name);
 if (FUNC_0(VAR_1->rx_kthread)) {
  VAR_2 = FUNC_1(VAR_1->rx_kthread);
  FUNC_2(VAR_4, "RX: cannot start thread: %d\n", VAR_2);
 }
 return VAR_2;
}
