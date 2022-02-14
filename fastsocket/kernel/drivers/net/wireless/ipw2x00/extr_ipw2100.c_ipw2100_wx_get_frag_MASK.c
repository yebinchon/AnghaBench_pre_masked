
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int disabled; scalar_t__ fixed; } ;
union iwreq_data {TYPE_1__ frag; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int frag_threshold; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
          struct iw_request_info *VAR_2,
          union iwreq_data *VAR_3, char *VAR_4)
{




 struct ipw2100_priv *VAR_5 = FUNC_1(VAR_1);
 VAR_3->frag.value = VAR_5->frag_threshold & ~VAR_0;
 VAR_3->frag.fixed = 0;
 VAR_3->frag.disabled = (VAR_5->frag_threshold & VAR_0) ? 1 : 0;

 FUNC_0("GET Frag Threshold -> %d\n", VAR_3->frag.value);

 return 0;
}
