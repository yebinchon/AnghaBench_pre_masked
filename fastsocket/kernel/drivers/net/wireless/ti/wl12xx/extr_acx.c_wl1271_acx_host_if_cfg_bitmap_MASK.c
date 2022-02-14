
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1271_acx_host_config_bitmap {int host_cfg_bitmap; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271_acx_host_config_bitmap*) ;
 struct wl1271_acx_host_config_bitmap* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_acx_host_config_bitmap*,int) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_3, u32 VAR_4)
{
 struct wl1271_acx_host_config_bitmap *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_2);
 if (!VAR_5) {
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_5->host_cfg_bitmap = FUNC_0(VAR_4);

 VAR_6 = FUNC_3(VAR_3, VAR_0,
       VAR_5, sizeof(*VAR_5));
 if (VAR_6 < 0) {
  FUNC_4("wl1271 bitmap config opt failed: %d", VAR_6);
  goto out;
 }

out:
 FUNC_1(VAR_5);

 return VAR_6;
}
