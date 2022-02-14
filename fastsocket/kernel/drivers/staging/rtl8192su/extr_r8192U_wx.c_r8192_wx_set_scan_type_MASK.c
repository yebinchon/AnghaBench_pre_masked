
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {int active_scan; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, struct iw_request_info *VAR_1, union
 iwreq_data *VAR_2, char *VAR_3){

  struct r8192_priv *VAR_4 = FUNC_0(VAR_0);
 int *VAR_5=(int*)VAR_3;
 int VAR_6=VAR_5[0];

 VAR_4->ieee80211->active_scan = VAR_6;

 return 1;
}
