
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {int * queue_stop_reasons; int wl_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct wl12xx_vif*,int ) ;

bool FUNC_2(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1,
        u8 VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_2);

 FUNC_0(&VAR_0->wl_lock);
 return !!VAR_0->queue_stop_reasons[VAR_3];
}
