
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct r8180_priv {int ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 struct r8180_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct iw_request_info*,union iwreq_data*,char*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct iw_request_info *VAR_1,
        union iwreq_data *VAR_2, char *VAR_3)
{
 struct r8180_priv *VAR_4 = FUNC_0(VAR_0);
 return FUNC_1(VAR_4->ieee80211,VAR_1,VAR_2,VAR_3);
}
