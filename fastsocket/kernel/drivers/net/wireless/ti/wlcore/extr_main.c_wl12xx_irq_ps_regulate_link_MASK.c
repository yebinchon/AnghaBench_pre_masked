
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {int active_link_count; int ap_fw_ps_map; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned long*) ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*,scalar_t__) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct wl1271 *VAR_1,
     struct wl12xx_vif *VAR_2,
     u8 VAR_3, u8 VAR_4)
{
 bool VAR_5;

 VAR_5 = FUNC_0(VAR_3, (unsigned long *)&VAR_1->ap_fw_ps_map);





 if (!VAR_5 || VAR_4 < VAR_0)
  FUNC_1(VAR_1, VAR_2, VAR_3);
 else if (VAR_1->active_link_count > 3 && VAR_5 &&
   VAR_4 >= VAR_0)
  FUNC_2(VAR_1, VAR_2, VAR_3, 1);
}
