
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int mmap_sem; } ;


 int FUNC_0 (int *) ;
 struct mm_struct* FUNC_1 (struct task_struct*) ;

__attribute__((used)) static struct mm_struct *FUNC_2(struct task_struct *VAR_0)
{
 struct mm_struct *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(&VAR_1->mmap_sem);
 return VAR_1;
}
