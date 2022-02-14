
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ml_priv; } ;
struct claw_privbk {int tbusy; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline void
FUNC_1(struct net_device *VAR_0)
{
 ((struct claw_privbk *)VAR_0->ml_priv)->tbusy = 1;
 FUNC_0();
}
