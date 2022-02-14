
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {scalar_t__ inconn_count; int role_id; } ;
struct wl1271_station {int in_connection; } ;
struct wl1271 {int roc_map; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct wl1271*,int ) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*) ;

__attribute__((used)) static void FUNC_4(struct wl1271 *VAR_0,
         struct wl12xx_vif *VAR_1,
         struct wl1271_station *VAR_2,
         bool VAR_3)
{
 if (VAR_3) {
  if (FUNC_0(VAR_2->in_connection))
   return;
  VAR_2->in_connection = 1;
  if (!VAR_1->inconn_count++)
   FUNC_3(VAR_0, VAR_1);
 } else {
  if (!VAR_2->in_connection)
   return;

  VAR_2->in_connection = 0;
  VAR_1->inconn_count--;
  if (FUNC_0(VAR_1->inconn_count < 0))
   return;

  if (!VAR_1->inconn_count)
   if (FUNC_1(VAR_1->role_id, VAR_0->roc_map))
    FUNC_2(VAR_0, VAR_1->role_id);
 }
}
