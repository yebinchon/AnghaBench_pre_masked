
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ wimax_rfkill; scalar_t__ wwan3g_rfkill; scalar_t__ bluetooth_rfkill; scalar_t__ wlan_rfkill; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4)
{

 if (VAR_3->wlan_rfkill)
  FUNC_0();

 if (VAR_3->bluetooth_rfkill)
  FUNC_2(VAR_3->bluetooth_rfkill,
        FUNC_1(VAR_1) != 1);
 if (VAR_3->wwan3g_rfkill)
  FUNC_2(VAR_3->wwan3g_rfkill,
        FUNC_1(VAR_0) != 1);
 if (VAR_3->wimax_rfkill)
  FUNC_2(VAR_3->wimax_rfkill,
        FUNC_1(VAR_2) != 1);

 return 0;
}
