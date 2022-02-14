
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int page_id; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;

int
FUNC_0(struct task_struct *VAR_1, struct mm_struct *VAR_2)
{
 VAR_2->context.page_id = VAR_0;
 return 0;
}
