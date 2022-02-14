
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int mmap_sem; } ;


 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mm_struct *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_1(&VAR_0->mmap_sem);
 FUNC_0(VAR_0);
}
