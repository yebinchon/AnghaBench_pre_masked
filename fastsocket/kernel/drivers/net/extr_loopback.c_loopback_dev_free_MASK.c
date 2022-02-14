
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_lstats {int dummy; } ;
struct net_device {struct pcpu_lstats* ml_priv; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct pcpu_lstats*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct pcpu_lstats *VAR_1 = VAR_0->ml_priv;

 FUNC_1(VAR_1);
 FUNC_0(VAR_0);
}
