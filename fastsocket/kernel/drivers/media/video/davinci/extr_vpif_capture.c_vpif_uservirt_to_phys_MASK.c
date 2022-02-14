
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct vm_area_struct {int vm_flags; unsigned long vm_pgoff; unsigned long vm_start; } ;
struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_3__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int *) ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (TYPE_1__*,struct mm_struct*,unsigned long,int,int,int ,struct page**,int *) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (int *) ;
 unsigned long FUNC_6 (void*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static inline u32 FUNC_8(u32 VAR_5)
{
 unsigned long VAR_6 = 0;
 struct mm_struct *VAR_7 = VAR_4->mm;
 struct vm_area_struct *VAR_8;

 VAR_8 = FUNC_2(VAR_7, VAR_5);


 if (VAR_5 >= VAR_1)
  VAR_6 = FUNC_6((void *)VAR_5);
 else if (VAR_8 && (VAR_8->vm_flags & VAR_3) && (VAR_8->vm_pgoff))




  VAR_6 = (VAR_8->vm_pgoff << VAR_2) + (VAR_5 - VAR_8->vm_start);
 else {

  int VAR_9, VAR_10 = 1;
   struct page *VAR_11;

  FUNC_1(&VAR_4->mm->mmap_sem);

  VAR_9 = FUNC_3(VAR_4, VAR_4->mm,
         VAR_5, VAR_10, 1, 0, &VAR_11, ((void*)0));
  FUNC_5(&VAR_4->mm->mmap_sem);

  if (VAR_9 == VAR_10)
   VAR_6 = FUNC_0(FUNC_4(&VAR_11[0]) +
         (VAR_5 & ~VAR_0));
  else {
   FUNC_7("get_user_pages failed\n");
   return 0;
  }
 }
 return VAR_6;
}
