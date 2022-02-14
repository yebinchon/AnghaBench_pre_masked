
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hlid; } ;
struct wl12xx_vif {scalar_t__ bss_type; TYPE_1__ sta; int flags; } ;
struct wl1271 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wl1271*,struct wl12xx_vif*,int ) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_4,
     struct wl12xx_vif *VAR_5)
{
 int VAR_6;

 if (FUNC_0(VAR_5->bss_type != VAR_0))
  return -VAR_1;

 if (!FUNC_2(VAR_2, &VAR_5->flags))
  return 0;

 if (FUNC_1(VAR_3, &VAR_5->flags))
  return 0;

 VAR_6 = FUNC_4(VAR_4, VAR_5, VAR_5->sta.hlid);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_3("Association completed.");
 return 0;
}
