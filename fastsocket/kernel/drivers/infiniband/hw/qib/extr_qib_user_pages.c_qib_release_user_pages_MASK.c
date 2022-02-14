
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {size_t locked_vm; int mmap_sem; } ;


 int FUNC_0 (struct page**,size_t,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct page **VAR_1, size_t VAR_2)
{
 if (VAR_0->mm)
  FUNC_1(&VAR_0->mm->mmap_sem);

 FUNC_0(VAR_1, VAR_2, 1);

 if (VAR_0->mm) {
  VAR_0->mm->locked_vm -= VAR_2;
  FUNC_2(&VAR_0->mm->mmap_sem);
 }
}
