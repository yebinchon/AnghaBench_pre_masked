
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1251 {int dummy; } ;
struct acx_rate_policy {int rate_class_cnt; TYPE_1__* rate_class; } ;
struct TYPE_2__ {scalar_t__ aflags; void* long_retry_limit; void* short_retry_limit; int enabled_rates; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct acx_rate_policy*) ;
 struct acx_rate_policy* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_rate_policy*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_6)
{
 struct acx_rate_policy *VAR_7;
 int VAR_8 = 0;

 FUNC_3(VAR_3, "acx rate policies");

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_5);

 if (!VAR_7) {
  VAR_8 = -VAR_4;
  goto out;
 }


 VAR_7->rate_class_cnt = 1;
 VAR_7->rate_class[0].enabled_rates = VAR_0;
 VAR_7->rate_class[0].short_retry_limit = VAR_2;
 VAR_7->rate_class[0].long_retry_limit = VAR_2;
 VAR_7->rate_class[0].aflags = 0;

 VAR_8 = FUNC_2(VAR_6, VAR_1, VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_4("Setting of rate policies failed: %d", VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_7);
 return VAR_8;
}
