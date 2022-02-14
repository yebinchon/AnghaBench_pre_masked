
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ excessive_retries; scalar_t__ retry_count; int * fw_stats; } ;
struct wl1251 {TYPE_1__ stats; } ;


 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct wl1251 *VAR_0)
{
 if (VAR_0->stats.fw_stats != ((void*)0))
  FUNC_0(VAR_0->stats.fw_stats, 0, sizeof(*VAR_0->stats.fw_stats));
 VAR_0->stats.retry_count = 0;
 VAR_0->stats.excessive_retries = 0;
}
