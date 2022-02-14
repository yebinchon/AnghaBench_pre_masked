
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sir_driver {int owner; int (* stop_dev ) (struct sir_dev*) ;} ;
struct TYPE_2__ {int sem; } ;
struct sir_dev {TYPE_1__ fsm; scalar_t__ speed; int priv; struct sir_driver* drv; int * irlap; int enable_rx; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct sir_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sir_dev*) ;
 int FUNC_7 (struct sir_dev*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_0)
{
 struct sir_dev *VAR_1 = FUNC_4(VAR_0);
 const struct sir_driver *VAR_2;



 FUNC_5(VAR_0);

 FUNC_1(&VAR_1->fsm.sem);

 FUNC_0(&VAR_1->enable_rx, 0);

 if (FUNC_8(!VAR_1->irlap))
  goto out;
 FUNC_2(VAR_1->irlap);
 VAR_1->irlap = ((void*)0);

 VAR_2 = VAR_1->drv;
 if (FUNC_8(!VAR_2 || !VAR_1->priv))
  goto out;

 if (VAR_2->stop_dev)
  VAR_2->stop_dev(VAR_1);

 FUNC_6(VAR_1);
 FUNC_3(VAR_2->owner);

out:
 VAR_1->speed = 0;
 FUNC_9(&VAR_1->fsm.sem);
 return 0;
}
