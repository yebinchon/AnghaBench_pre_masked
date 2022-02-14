
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


 int VAR_0 ;
 struct wl3501_card* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct iw_request_info *VAR_2,
      union iwreq_data *VAR_3, char *VAR_4)
{
 struct wl3501_card *VAR_5 = FUNC_0(VAR_1);

 if (VAR_3->data.length > sizeof(VAR_5->nick))
  return -VAR_0;
 FUNC_1(VAR_5->nick, VAR_4, VAR_3->data.length);
 return 0;
}
