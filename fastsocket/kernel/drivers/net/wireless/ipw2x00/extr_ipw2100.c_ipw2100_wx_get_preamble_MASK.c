
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int name; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipw2100_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
       struct iw_request_info *VAR_3,
       union iwreq_data *VAR_4, char *VAR_5)
{




 struct ipw2100_priv *VAR_6 = FUNC_0(VAR_2);

 if (VAR_6->config & VAR_0)
  FUNC_1(VAR_4->name, VAR_1, "long (1)");
 else
  FUNC_1(VAR_4->name, VAR_1, "auto (0)");

 return 0;
}
