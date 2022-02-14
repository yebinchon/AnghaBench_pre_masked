
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ml_priv; } ;
struct claw_privbk {int tbusy; } ;


 int FUNC_0 (int,void*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline void
FUNC_2(int VAR_0,struct net_device *VAR_1)
{
 FUNC_0(VAR_0, (void *)&(((struct claw_privbk *)VAR_1->ml_priv)->tbusy));
 FUNC_1(VAR_1);
}
