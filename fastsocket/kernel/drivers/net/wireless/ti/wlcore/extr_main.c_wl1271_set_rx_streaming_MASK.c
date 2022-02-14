
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int flags; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,int) ;

__attribute__((used)) static int FUNC_3(struct wl1271 *VAR_1, struct wl12xx_vif *VAR_2,
       bool VAR_3)
{
 int VAR_4 = 0;


 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  goto out;

 if (VAR_3)
  FUNC_1(VAR_0, &VAR_2->flags);
 else
  FUNC_0(VAR_0, &VAR_2->flags);
out:
 return VAR_4;
}
