
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disabled; int value; scalar_t__ fixed; } ;
union iwreq_data {TYPE_1__ rts; } ;
struct r8180_priv {int rts; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 struct r8180_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
        struct iw_request_info *VAR_1,
        union iwreq_data *VAR_2, char *VAR_3)
{
 struct r8180_priv *VAR_4 = FUNC_0(VAR_0);



 VAR_2->rts.value = VAR_4->rts;
 VAR_2->rts.fixed = 0;
 VAR_2->rts.disabled = (VAR_2->rts.value == 0);

 return 0;
}
