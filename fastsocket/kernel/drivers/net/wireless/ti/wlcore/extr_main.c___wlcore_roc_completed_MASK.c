
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int flags; } ;
struct wl1271 {int * roc_vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*) ;
 struct wl12xx_vif* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_2)
{
 struct wl12xx_vif *VAR_3;
 int VAR_4;


 if (FUNC_1(!VAR_2->roc_vif))
  return 0;

 VAR_3 = FUNC_3(VAR_2->roc_vif);

 if (!FUNC_0(VAR_1, &VAR_3->flags))
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->roc_vif = ((void*)0);

 return 0;
}
