
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {unsigned long start_brk; unsigned long brk; int mmap_sem; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 TYPE_2__* VAR_0 ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_1, unsigned long VAR_2)
{
 VAR_1 = FUNC_1(VAR_1);
 VAR_2 = FUNC_1(VAR_2);
 if (VAR_2 > VAR_1) {
  unsigned long VAR_3;
  FUNC_3(&VAR_0->mm->mmap_sem);
  VAR_3 = FUNC_2(VAR_1, VAR_2 - VAR_1);
  FUNC_4(&VAR_0->mm->mmap_sem);
  if (FUNC_0(VAR_3))
   return VAR_3;
 }
 VAR_0->mm->start_brk = VAR_0->mm->brk = VAR_2;
 return 0;
}
