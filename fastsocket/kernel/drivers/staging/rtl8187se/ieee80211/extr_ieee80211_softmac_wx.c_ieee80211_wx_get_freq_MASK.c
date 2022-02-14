
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_freq {scalar_t__ m; scalar_t__ e; } ;
union iwreq_data {struct iw_freq freq; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ channel; } ;
struct ieee80211_device {TYPE_1__ current_network; } ;



int FUNC_0(struct ieee80211_device *VAR_0,
        struct iw_request_info *VAR_1,
        union iwreq_data *VAR_2, char *VAR_3)
{
 struct iw_freq *VAR_4 = & VAR_2->freq;

 if (VAR_0->current_network.channel == 0)
  return -1;

 VAR_4->m = VAR_0->current_network.channel;
 VAR_4->e = 0;

 return 0;
}
