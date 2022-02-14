
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int lock; int timer; int reset_task; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct niu*) ;
 int FUNC_4 (struct niu*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct niu *VAR_0, struct net_device *VAR_1)
{
 FUNC_0(&VAR_0->reset_task);

 FUNC_3(VAR_0);
 FUNC_2(VAR_1);

 FUNC_1(&VAR_0->timer);

 FUNC_5(&VAR_0->lock);

 FUNC_4(VAR_0);

 FUNC_6(&VAR_0->lock);
}
