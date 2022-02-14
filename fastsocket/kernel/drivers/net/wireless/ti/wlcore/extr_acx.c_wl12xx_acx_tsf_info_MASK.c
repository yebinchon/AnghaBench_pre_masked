
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wl12xx_vif {int role_id; } ;
struct wl12xx_acx_fw_tsf_information {int current_tsf_high; int current_tsf_low; int role_id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wl12xx_acx_fw_tsf_information*) ;
 struct wl12xx_acx_fw_tsf_information* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl12xx_acx_fw_tsf_information*,int) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1271 *VAR_3, struct wl12xx_vif *VAR_4,
   u64 *VAR_5)
{
 struct wl12xx_acx_fw_tsf_information *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_6->role_id = VAR_4->role_id;

 VAR_7 = FUNC_3(VAR_3, VAR_0,
         VAR_6, sizeof(*VAR_6));
 if (VAR_7 < 0) {
  FUNC_4("acx tsf info interrogate failed");
  goto out;
 }

 *VAR_5 = FUNC_2(VAR_6->current_tsf_low) |
  ((u64) FUNC_2(VAR_6->current_tsf_high) << 32);

out:
 FUNC_0(VAR_6);
 return VAR_7;
}
