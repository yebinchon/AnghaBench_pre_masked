
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int ps_lock; int (* rf_wakeup ) (struct net_device*) ;} ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct r8180_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int ,int) ;

void FUNC_6(struct net_device *VAR_2)
{
 unsigned long VAR_3;
 struct r8180_priv *VAR_4 = FUNC_0(VAR_2);

 FUNC_2(&VAR_4->ps_lock,VAR_3);
 FUNC_5(VAR_2,VAR_0,FUNC_1(VAR_2,VAR_0)&~VAR_1);
 if (VAR_4->rf_wakeup)
  VAR_4->rf_wakeup(VAR_2);
 FUNC_3(&VAR_4->ps_lock,VAR_3);
}
