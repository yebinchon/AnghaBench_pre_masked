
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int rx_streaming_disable_work; struct wl1271* wl; } ;
struct wl1271 {int hw; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct wl12xx_vif *VAR_1 = (struct wl12xx_vif *)VAR_0;
 struct wl1271 *VAR_2 = VAR_1->wl;
 FUNC_0(VAR_2->hw, &VAR_1->rx_streaming_disable_work);
}
