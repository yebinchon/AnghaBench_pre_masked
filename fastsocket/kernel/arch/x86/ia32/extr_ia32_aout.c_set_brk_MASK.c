
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 unsigned long FUNC_0 (unsigned long) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1, unsigned long VAR_2)
{
 VAR_1 = FUNC_0(VAR_1);
 VAR_2 = FUNC_0(VAR_2);
 if (VAR_2 <= VAR_1)
  return;
 FUNC_2(&VAR_0->mm->mmap_sem);
 FUNC_1(VAR_1, VAR_2 - VAR_1);
 FUNC_3(&VAR_0->mm->mmap_sem);
}
