
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_5__ {scalar_t__ size; int lock; } ;
struct mm_struct {TYPE_2__ context; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct task_struct *VAR_1, struct mm_struct *VAR_2)
{
 struct mm_struct *VAR_3;
 int VAR_4 = 0;

 FUNC_1(&VAR_2->context.lock);
 VAR_2->context.size = 0;
 VAR_3 = VAR_0->mm;
 if (VAR_3 && VAR_3->context.size > 0) {
  FUNC_2(&VAR_3->context.lock);
  VAR_4 = FUNC_0(&VAR_2->context, &VAR_3->context);
  FUNC_3(&VAR_3->context.lock);
 }
 return VAR_4;
}
