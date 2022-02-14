
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int mutex; int nick; } ;


 int FUNC_0 (char*) ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0,
      struct iw_request_info *VAR_1,
      union iwreq_data *VAR_2, char *VAR_3)
{
 struct ipw_priv *VAR_4 = FUNC_1(VAR_0);
 FUNC_0("Getting nick\n");
 FUNC_3(&VAR_4->mutex);
 VAR_2->data.length = FUNC_5(VAR_4->nick);
 FUNC_2(VAR_3, VAR_4->nick, VAR_2->data.length);
 VAR_2->data.flags = 1;
 FUNC_4(&VAR_4->mutex);
 return 0;
}
