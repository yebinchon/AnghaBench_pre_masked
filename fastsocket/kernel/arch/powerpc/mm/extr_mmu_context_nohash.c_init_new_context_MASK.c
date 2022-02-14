
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ active; int id; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct mm_struct*) ;

int FUNC_1(struct task_struct *VAR_1, struct mm_struct *VAR_2)
{
 FUNC_0("initing context for mm @%p\n", VAR_2);

 VAR_2->context.id = VAR_0;
 VAR_2->context.active = 0;

 return 0;
}
