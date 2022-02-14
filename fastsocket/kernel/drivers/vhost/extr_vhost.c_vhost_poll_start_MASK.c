
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_poll {int wait; int table; } ;
struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {unsigned long (* poll ) (struct file*,int *) ;} ;


 unsigned long FUNC_0 (struct file*,int *) ;
 int FUNC_1 (int *,int ,int ,void*) ;

void FUNC_2(struct vhost_poll *VAR_0, struct file *VAR_1)
{
 unsigned long VAR_2;
 VAR_2 = VAR_1->f_op->poll(VAR_1, &VAR_0->table);
 if (VAR_2)
  FUNC_1(&VAR_0->wait, 0, 0, (void *)VAR_2);
}
