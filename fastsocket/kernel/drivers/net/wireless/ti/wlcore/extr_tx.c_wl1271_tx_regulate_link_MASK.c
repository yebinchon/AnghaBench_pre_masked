
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wl12xx_vif {unsigned long* links_map; } ;
struct wl1271 {int active_link_count; TYPE_1__* links; int ap_fw_ps_map; } ;
struct TYPE_2__ {size_t allocated_pkts; } ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (size_t,unsigned long*) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,size_t,int) ;

__attribute__((used)) static void FUNC_3(struct wl1271 *VAR_1,
        struct wl12xx_vif *VAR_2,
        u8 VAR_3)
{
 bool VAR_4;
 u8 VAR_5;

 if (FUNC_0(!FUNC_1(VAR_3, VAR_2->links_map)))
  return;

 VAR_4 = FUNC_1(VAR_3, (unsigned long *)&VAR_1->ap_fw_ps_map);
 VAR_5 = VAR_1->links[VAR_3].allocated_pkts;
 if (VAR_1->active_link_count > 3 && VAR_4 &&
     VAR_5 >= VAR_0)
  FUNC_2(VAR_1, VAR_2, VAR_3, 1);
}
