
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int itlb_cached_pge; int dtlb_cached_pge; int id_link; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

int FUNC_2(struct task_struct *VAR_0, struct mm_struct *VAR_1)
{
 FUNC_1(&VAR_1->context, 0, sizeof(VAR_1->context));
 FUNC_0(&VAR_1->context.id_link);
 VAR_1->context.itlb_cached_pge = 0xffffffffUL;
 VAR_1->context.dtlb_cached_pge = 0xffffffffUL;

 return 0;
}
