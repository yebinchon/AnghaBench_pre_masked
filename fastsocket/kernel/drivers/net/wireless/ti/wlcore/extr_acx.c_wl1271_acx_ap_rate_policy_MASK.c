
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wl1271 {int dummy; } ;
struct conf_tx_rate_class {int aflags; int long_retry_limit; int short_retry_limit; int enabled_rates; } ;
struct TYPE_2__ {int aflags; int long_retry_limit; int short_retry_limit; void* enabled_rates; } ;
struct acx_rate_policy {void* rate_policy_idx; TYPE_1__ rate_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct acx_rate_policy*) ;
 struct acx_rate_policy* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_rate_policy*,int) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4, struct conf_tx_rate_class *VAR_5,
        u8 VAR_6)
{
 struct acx_rate_policy *VAR_7;
 int VAR_8 = 0;

 FUNC_4(VAR_1, "acx ap rate policy %d rates 0x%x",
       VAR_6, VAR_5->enabled_rates);

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_7->rate_policy.enabled_rates = FUNC_0(VAR_5->enabled_rates);
 VAR_7->rate_policy.short_retry_limit = VAR_5->short_retry_limit;
 VAR_7->rate_policy.long_retry_limit = VAR_5->long_retry_limit;
 VAR_7->rate_policy.aflags = VAR_5->aflags;

 VAR_7->rate_policy_idx = FUNC_0(VAR_6);

 VAR_8 = FUNC_3(VAR_4, VAR_0, VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_5("Setting of ap rate policy failed: %d", VAR_8);
  goto out;
 }

out:
 FUNC_1(VAR_7);
 return VAR_8;
}
