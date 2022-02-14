
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int mode; } ;
struct wl3501_card {int net_type; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 struct wl3501_card* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, struct iw_request_info *VAR_1,
      union iwreq_data *VAR_2, char *VAR_3)
{
 struct wl3501_card *VAR_4 = FUNC_0(VAR_0);

 VAR_2->mode = VAR_4->net_type;
 return 0;
}
