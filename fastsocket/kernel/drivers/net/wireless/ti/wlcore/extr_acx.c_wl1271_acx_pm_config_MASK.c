
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271_acx_pm_config {int host_fast_wakeup_support; int host_clk_settling_time; } ;
struct conf_pm_config_settings {int host_fast_wakeup_support; int host_clk_settling_time; } ;
struct TYPE_2__ {struct conf_pm_config_settings pm_config; } ;
struct wl1271 {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271_acx_pm_config*) ;
 struct wl1271_acx_pm_config* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_acx_pm_config*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4)
{
 struct wl1271_acx_pm_config *VAR_5 = ((void*)0);
 struct conf_pm_config_settings *VAR_6 = &VAR_4->conf.pm_config;
 int VAR_7 = 0;

 FUNC_4(VAR_1, "acx pm config");

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  VAR_7 = -VAR_2;
  goto out;
 }

 VAR_5->host_clk_settling_time = FUNC_0(VAR_6->host_clk_settling_time);
 VAR_5->host_fast_wakeup_support = VAR_6->host_fast_wakeup_support;

 VAR_7 = FUNC_3(VAR_4, VAR_0, VAR_5, sizeof(*VAR_5));
 if (VAR_7 < 0) {
  FUNC_5("acx pm config failed: %d", VAR_7);
  goto out;
 }

out:
 FUNC_1(VAR_5);
 return VAR_7;
}
