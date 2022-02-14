
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int ps_lock; int (* rf_sleep ) (struct net_device*) ;} ;
struct net_device {int dummy; } ;


 struct r8180_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_0)
{
        unsigned long VAR_1;
        struct r8180_priv *VAR_2 = FUNC_0(VAR_0);

        FUNC_1(&VAR_2->ps_lock,VAR_1);
        if(VAR_2->rf_sleep)
                VAR_2->rf_sleep(VAR_0);
        FUNC_2(&VAR_2->ps_lock,VAR_1);
}
