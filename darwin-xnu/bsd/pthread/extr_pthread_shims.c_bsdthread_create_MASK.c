
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_addr_t ;
struct proc {int dummy; } ;
struct bsdthread_create_args {int flags; int pthread; int stack; int func_arg; int func; } ;
struct TYPE_2__ {int (* bsdthread_create ) (struct proc*,int ,int ,int ,int ,int ,int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct proc*,int ,int ,int ,int ,int ,int *) ;

int
FUNC_1(struct proc *VAR_1, struct bsdthread_create_args *VAR_2, user_addr_t *VAR_3)
{
 return VAR_0->bsdthread_create(VAR_1, VAR_2->func, VAR_2->func_arg, VAR_2->stack, VAR_2->pthread, VAR_2->flags, VAR_3);
}
