
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct kvm {int dummy; } ;
typedef int pfn_t ;
typedef int gfn_t ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int *) ;
 struct vm_area_struct* FUNC_3 (TYPE_1__*,unsigned long) ;
 unsigned long FUNC_4 (struct kvm*,int ) ;
 int FUNC_5 (struct kvm*,unsigned long) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 unsigned long FUNC_12 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_13(struct kvm *VAR_4, gfn_t VAR_5)
{
 unsigned long VAR_6 = VAR_1;
 struct vm_area_struct *VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10 = 0;

 VAR_8 = FUNC_4(VAR_4, VAR_5);
 if (FUNC_7(VAR_8))
  return VAR_2;

 FUNC_2(&VAR_3->mm->mmap_sem);
 VAR_7 = FUNC_3(VAR_3->mm, VAR_8);
 if (!VAR_7)
  goto out;

 VAR_6 = FUNC_12(VAR_7);

out:
 FUNC_11(&VAR_3->mm->mmap_sem);


 if (VAR_6 == VAR_1) {
  pfn_t VAR_11 = FUNC_5(VAR_4, VAR_8);

  if (!FUNC_6(VAR_11) && !FUNC_8(VAR_11) &&
      FUNC_1(FUNC_10(VAR_11)))
   VAR_6 = FUNC_0(2);
  FUNC_9(VAR_11);
 }

 for (VAR_9 = VAR_2;
      VAR_9 < (VAR_2 + VAR_0); ++VAR_9) {
  if (VAR_6 >= FUNC_0(VAR_9))
   VAR_10 = VAR_9;
  else
   break;
 }

 return VAR_10;
}
