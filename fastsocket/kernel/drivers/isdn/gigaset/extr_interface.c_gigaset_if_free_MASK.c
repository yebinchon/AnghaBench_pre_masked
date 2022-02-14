
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gigaset_driver {int tty; int have_tty; } ;
struct cardstate {int minor_index; int * tty_dev; int if_wake_tasklet; struct gigaset_driver* driver; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct cardstate *VAR_0)
{
 struct gigaset_driver *VAR_1;

 VAR_1 = VAR_0->driver;
 if (!VAR_1->have_tty)
  return;

 FUNC_0(&VAR_0->if_wake_tasklet);
 FUNC_1(&VAR_0->if_wake_tasklet);
 VAR_0->tty_dev = ((void*)0);
 FUNC_2(VAR_1->tty, VAR_0->minor_index);
}
