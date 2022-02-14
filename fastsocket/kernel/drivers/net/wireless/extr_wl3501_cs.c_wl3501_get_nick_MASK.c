
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct wl3501_card {int nick; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 struct wl3501_card* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, struct iw_request_info *VAR_1,
      union iwreq_data *VAR_2, char *VAR_3)
{
 struct wl3501_card *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_3, VAR_4->nick, 32);
 VAR_2->data.length = FUNC_2(VAR_3);
 return 0;
}
