
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int name; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int config; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipw_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
          struct iw_request_info *VAR_3,
          union iwreq_data *VAR_4, char *VAR_5)
{
 struct ipw_priv *VAR_6 = FUNC_0(VAR_2);
 FUNC_1(&VAR_6->mutex);
 if (VAR_6->config & VAR_0)
  FUNC_3(VAR_4->name, VAR_1, "long (1)");
 else
  FUNC_3(VAR_4->name, VAR_1, "auto (0)");
 FUNC_2(&VAR_6->mutex);
 return 0;
}
