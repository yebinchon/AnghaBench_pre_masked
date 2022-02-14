
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 int FUNC_0 (unsigned long,size_t,struct page**,int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(unsigned long VAR_1, size_t VAR_2,
    struct page **VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_0->mm->mmap_sem);

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, ((void*)0));

 FUNC_2(&VAR_0->mm->mmap_sem);

 return VAR_4;
}
