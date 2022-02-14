
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wl12xx_vif {int role_id; } ;
struct wl1271 {int dummy; } ;
struct acx_wake_up_condition {void* listen_interval; void* wake_up_event; int role_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_wake_up_condition*) ;
 struct acx_wake_up_condition* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct acx_wake_up_condition*,int) ;
 int FUNC_3 (int ,char*,void*,void*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5,
      u8 VAR_6, u8 VAR_7)
{
 struct acx_wake_up_condition *VAR_8;
 int VAR_9;

 FUNC_3(VAR_1, "acx wake up conditions (wake_up_event %d listen_interval %d)",
       VAR_6, VAR_7);

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_3);
 if (!VAR_8) {
  VAR_9 = -VAR_2;
  goto out;
 }

 VAR_8->role_id = VAR_5->role_id;
 VAR_8->wake_up_event = VAR_6;
 VAR_8->listen_interval = VAR_7;

 VAR_9 = FUNC_2(VAR_4, VAR_0,
       VAR_8, sizeof(*VAR_8));
 if (VAR_9 < 0) {
  FUNC_4("could not set wake up conditions: %d", VAR_9);
  goto out;
 }

out:
 FUNC_0(VAR_8);
 return VAR_9;
}
