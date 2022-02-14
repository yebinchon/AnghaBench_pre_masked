
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int wimax_rfkill; int wwan3g_rfkill; int bluetooth_rfkill; int wlan_rfkill; int hotplug_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,struct device*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* VAR_10 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_11)
{
 int VAR_12 = 0;

 FUNC_5(&VAR_10->hotplug_lock);

 VAR_12 = FUNC_0(&VAR_10->wlan_rfkill,
      "eeepc-wlan", VAR_11,
      VAR_8, VAR_3);

 if (VAR_12 && VAR_12 != -VAR_5)
  goto exit;

 VAR_12 = FUNC_0(&VAR_10->bluetooth_rfkill,
      "eeepc-bluetooth", VAR_11,
      VAR_6, VAR_1);

 if (VAR_12 && VAR_12 != -VAR_5)
  goto exit;

 VAR_12 = FUNC_0(&VAR_10->wwan3g_rfkill,
      "eeepc-wwan3g", VAR_11,
      VAR_9, VAR_0);

 if (VAR_12 && VAR_12 != -VAR_5)
  goto exit;

 VAR_12 = FUNC_0(&VAR_10->wimax_rfkill,
      "eeepc-wimax", VAR_11,
      VAR_7, VAR_2);

 if (VAR_12 && VAR_12 != -VAR_5)
  goto exit;

 VAR_12 = FUNC_4();




 if (VAR_12 == -VAR_4)
  VAR_12 = 0;

 FUNC_1("\\_SB.PCI0.P0P5");
 FUNC_1("\\_SB.PCI0.P0P6");
 FUNC_1("\\_SB.PCI0.P0P7");




 FUNC_3();

exit:
 if (VAR_12 && VAR_12 != -VAR_5)
  FUNC_2();
 return VAR_12;
}
