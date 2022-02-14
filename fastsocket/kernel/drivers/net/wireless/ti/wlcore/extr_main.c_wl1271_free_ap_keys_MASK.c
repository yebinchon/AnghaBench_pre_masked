
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** recorded_keys; } ;
struct wl12xx_vif {TYPE_1__ ap; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct wl1271 *VAR_1, struct wl12xx_vif *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_2->ap.recorded_keys[VAR_3]);
  VAR_2->ap.recorded_keys[VAR_3] = ((void*)0);
 }
}
