
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct lance_private {int multicast_timer; } ;


 int FUNC_0 (struct lance_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,void*) ;
 struct lance_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct lance_private *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_0);
 FUNC_1(&VAR_1->multicast_timer);

 FUNC_0(VAR_1);

 FUNC_2(VAR_0->irq, (void *) VAR_0);
 return 0;
}
