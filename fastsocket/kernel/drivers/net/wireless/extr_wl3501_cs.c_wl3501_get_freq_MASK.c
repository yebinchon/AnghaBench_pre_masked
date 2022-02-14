
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m; int e; } ;
union iwreq_data {TYPE_1__ freq; } ;
struct wl3501_card {int chan; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (int ) ;
 struct wl3501_card* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct iw_request_info *VAR_1,
      union iwreq_data *VAR_2, char *VAR_3)
{
 struct wl3501_card *VAR_4 = FUNC_1(VAR_0);

 VAR_2->freq.m = FUNC_0(VAR_4->chan) * 100000;
 VAR_2->freq.e = 1;
 return 0;
}
