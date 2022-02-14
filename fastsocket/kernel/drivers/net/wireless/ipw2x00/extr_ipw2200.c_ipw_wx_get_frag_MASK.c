
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int disabled; int value; scalar_t__ fixed; } ;
union iwreq_data {TYPE_2__ frag; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int mutex; TYPE_1__* ieee; } ;
struct TYPE_3__ {int fts; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
      struct iw_request_info *VAR_2,
      union iwreq_data *VAR_3, char *VAR_4)
{
 struct ipw_priv *VAR_5 = FUNC_1(VAR_1);
 FUNC_2(&VAR_5->mutex);
 VAR_3->frag.value = VAR_5->ieee->fts;
 VAR_3->frag.fixed = 0;
 VAR_3->frag.disabled = (VAR_3->frag.value == VAR_0);
 FUNC_3(&VAR_5->mutex);
 FUNC_0("GET Frag Threshold -> %d\n", VAR_3->frag.value);

 return 0;
}
