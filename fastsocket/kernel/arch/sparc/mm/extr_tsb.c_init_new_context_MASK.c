
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_4__ {unsigned long sparc64_ctx_val; unsigned long huge_pte_count; TYPE_1__* tsb_block; int lock; } ;
struct mm_struct {TYPE_2__ context; } ;
struct TYPE_3__ {int * tsb; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned long FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mm_struct*,size_t,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct task_struct *VAR_4, struct mm_struct *VAR_5)
{



 unsigned int VAR_6;

 FUNC_1(&VAR_5->context.lock);

 VAR_5->context.sparc64_ctx_val = 0UL;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_5->context.tsb_block[VAR_6].tsb = ((void*)0);




 FUNC_2(VAR_5, VAR_2, FUNC_0(VAR_5));






 if (FUNC_3(!VAR_5->context.tsb_block[VAR_2].tsb))
  return -VAR_0;

 return 0;
}
