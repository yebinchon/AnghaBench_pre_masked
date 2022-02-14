
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
      struct iw_request_info *VAR_1,
      union iwreq_data *VAR_2, char *VAR_3)
{
 FUNC_0(VAR_3, "gelic_wl");
 VAR_2->data.length = FUNC_1(VAR_3);
 VAR_2->data.flags = 1;
 return 0;
}
