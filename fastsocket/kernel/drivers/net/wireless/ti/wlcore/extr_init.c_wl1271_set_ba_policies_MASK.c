
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int ba_allowed; scalar_t__ bss_type; int ba_support; } ;
struct wl1271 {scalar_t__ ba_rx_session_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wl1271*,struct wl12xx_vif*) ;

__attribute__((used)) static int FUNC_1(struct wl1271 *VAR_2, struct wl12xx_vif *VAR_3)
{

 VAR_3->ba_allowed = 1;
 VAR_2->ba_rx_session_count = 0;


 if (VAR_3->bss_type != VAR_0 &&
     VAR_3->bss_type != VAR_1) {
  VAR_3->ba_support = 0;
  return 0;
 }

 VAR_3->ba_support = 1;


 return FUNC_0(VAR_2, VAR_3);
}
