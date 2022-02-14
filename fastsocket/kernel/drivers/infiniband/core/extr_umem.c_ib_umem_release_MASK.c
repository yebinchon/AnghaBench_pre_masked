
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mm_struct {int mmap_sem; } ;
struct ib_umem {unsigned long diff; int work; struct mm_struct* mm; scalar_t__ offset; scalar_t__ length; struct ib_ucontext* context; } ;
struct ib_ucontext {scalar_t__ closing; int device; } ;
struct TYPE_5__ {TYPE_1__* mm; } ;
struct TYPE_4__ {unsigned long locked_vm; } ;


 int FUNC_0 (int *,int ) ;
 unsigned long FUNC_1 (scalar_t__) ;
 unsigned long VAR_0 ;
 int FUNC_2 (int ,struct ib_umem*,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mm_struct* FUNC_5 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct ib_umem*) ;
 int FUNC_7 (struct mm_struct*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct ib_umem *VAR_4)
{
 struct ib_ucontext *VAR_5 = VAR_4->context;
 struct mm_struct *VAR_6;
 unsigned long VAR_7;

 FUNC_2(VAR_4->context->device, VAR_4, 1);

 VAR_6 = FUNC_5(VAR_1);
 if (!VAR_6) {
  FUNC_6(VAR_4);
  return;
 }

 VAR_7 = FUNC_1(VAR_4->length + VAR_4->offset) >> VAR_0;
 if (VAR_5->closing) {
  if (!FUNC_4(&VAR_6->mmap_sem)) {
   FUNC_0(&VAR_4->work, VAR_2);
   VAR_4->mm = VAR_6;
   VAR_4->diff = VAR_7;

   FUNC_8(VAR_3, &VAR_4->work);
   return;
  }
 } else
  FUNC_3(&VAR_6->mmap_sem);

 VAR_1->mm->locked_vm -= VAR_7;
 FUNC_9(&VAR_6->mmap_sem);
 FUNC_7(VAR_6);
 FUNC_6(VAR_4);
}
