
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union iwreq_data {int mode; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int mutex; TYPE_1__* ieee; } ;
struct TYPE_2__ {int iw_mode; } ;


 int FUNC_0 (char*,int ) ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
      struct iw_request_info *VAR_1,
      union iwreq_data *VAR_2, char *VAR_3)
{
 struct ipw_priv *VAR_4 = FUNC_1(VAR_0);
 FUNC_2(&VAR_4->mutex);
 VAR_2->mode = VAR_4->ieee->iw_mode;
 FUNC_0("Get MODE -> %d\n", VAR_2->mode);
 FUNC_3(&VAR_4->mutex);
 return 0;
}
