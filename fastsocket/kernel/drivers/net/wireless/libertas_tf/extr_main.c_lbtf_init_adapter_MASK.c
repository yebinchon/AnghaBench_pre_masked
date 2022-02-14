
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbtf_private {int driver_lock; int cmdpendingq; int cmdfreeq; int command_timer; int * vif; int lock; int current_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct lbtf_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct lbtf_private *VAR_3)
{
 FUNC_2(VAR_1);
 FUNC_4(VAR_3->current_addr, 0xff, VAR_0);
 FUNC_5(&VAR_3->lock);

 VAR_3->vif = ((void*)0);
 FUNC_6(&VAR_3->command_timer, VAR_2,
  (unsigned long)VAR_3);

 FUNC_0(&VAR_3->cmdfreeq);
 FUNC_0(&VAR_3->cmdpendingq);

 FUNC_7(&VAR_3->driver_lock);


 if (FUNC_1(VAR_3))
  return -1;

 FUNC_3(VAR_1);
 return 0;
}
