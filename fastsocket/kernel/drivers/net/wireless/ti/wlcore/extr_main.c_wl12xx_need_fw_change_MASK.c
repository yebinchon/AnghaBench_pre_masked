
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1271 {int fw_type; int last_vif_count; scalar_t__ state; int mr_fw_name; int flags; } ;
struct vif_counter_data {int counter; int cur_vif_running; } ;
typedef enum wl12xx_fw_type { ____Placeholder_wl12xx_fw_type } wl12xx_fw_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct wl1271 *VAR_4,
      struct vif_counter_data VAR_5,
      bool VAR_6)
{
 enum wl12xx_fw_type VAR_7 = VAR_4->fw_type;
 u8 VAR_8 = VAR_5.counter;

 if (FUNC_0(VAR_0, &VAR_4->flags))
  return 0;


 if (VAR_6 && !VAR_5.cur_vif_running)
  VAR_8++;

 VAR_4->last_vif_count = VAR_8;


 if (VAR_4->state == VAR_3)
  return 0;


 if (!VAR_4->mr_fw_name)
  return 0;

 if (VAR_8 > 1 && VAR_7 == VAR_2)
  return 1;
 if (VAR_8 <= 1 && VAR_7 == VAR_1)
  return 1;

 return 0;
}
