
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {scalar_t__ bss_type; int dev_role_id; } ;
struct wl1271 {int roc_map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct wl1271*,int *) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_4 (struct wl1271*,int ) ;
 int FUNC_5 (struct wl1271*) ;

int FUNC_6(struct wl1271 *VAR_3, struct wl12xx_vif *VAR_4)
{
 int VAR_5;

 if (FUNC_0(!(VAR_4->bss_type == VAR_1 ||
        VAR_4->bss_type == VAR_0)))
  return -VAR_2;


 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5 < 0)
  goto out;

 if (FUNC_1(VAR_4->dev_role_id, VAR_3->roc_map)) {
  VAR_5 = FUNC_4(VAR_3, VAR_4->dev_role_id);
  if (VAR_5 < 0)
   goto out;
 }

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_2(VAR_3, &VAR_4->dev_role_id);
 if (VAR_5 < 0)
  goto out;

out:
 return VAR_5;
}
