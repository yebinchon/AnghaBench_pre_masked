
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m; } ;
union iwreq_data {TYPE_1__ freq; } ;
struct wl3501_card {int chan; int reg_domain; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 struct wl3501_card* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct iw_request_info *VAR_2,
      union iwreq_data *VAR_3, char *VAR_4)
{
 struct wl3501_card *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = VAR_3->freq.m;
 int VAR_7 = -VAR_0;

 if (FUNC_0(VAR_5->reg_domain, VAR_6)) {
  VAR_5->chan = VAR_6;
  VAR_7 = FUNC_2(VAR_1);
 }
 return VAR_7;
}
