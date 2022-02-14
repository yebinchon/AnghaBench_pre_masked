
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ml_priv; } ;
struct claw_privbk {int tbusy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline void
FUNC_3(struct net_device *VAR_0)
{
 FUNC_0(0, &(((struct claw_privbk *) VAR_0->ml_priv)->tbusy));
 FUNC_2(VAR_0);
 FUNC_1();
}
