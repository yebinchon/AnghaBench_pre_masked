
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct TYPE_3__ {int level; } ;
struct TYPE_4__ {TYPE_1__ qual; } ;
struct r8180_priv {int wx_sem; TYPE_2__ wstats; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (int *) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
          struct iw_request_info *VAR_1,
          union iwreq_data *VAR_2, char *VAR_3)
{
 struct r8180_priv *VAR_4 = FUNC_1(VAR_0);

 int VAR_5 = 0;



 FUNC_0(&VAR_4->wx_sem);

 *((int *)VAR_3) = VAR_4->wstats.qual.level;



 FUNC_2(&VAR_4->wx_sem);

 return VAR_5;
}
