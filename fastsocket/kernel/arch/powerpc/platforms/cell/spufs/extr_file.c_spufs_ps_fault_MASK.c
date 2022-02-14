
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_fault {unsigned long pgoff; scalar_t__ virtual_address; } ;
struct vm_area_struct {TYPE_1__* vm_file; } ;
struct spu_context {scalar_t__ state; TYPE_3__* spu; int run_wq; } ;
struct TYPE_9__ {TYPE_2__* mm; } ;
struct TYPE_8__ {unsigned long problem_phys; } ;
struct TYPE_7__ {int mmap_sem; } ;
struct TYPE_6__ {struct spu_context* private_data; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu_context*) ;
 scalar_t__ FUNC_4 (struct spu_context*) ;
 int FUNC_5 (int ,struct spu_context*) ;
 int FUNC_6 (int ,struct spu_context*,TYPE_3__*) ;
 int FUNC_7 (struct spu_context*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct vm_area_struct*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct vm_area_struct *VAR_10,
        struct vm_fault *VAR_11,
        unsigned long VAR_12,
        unsigned long VAR_13)
{
 struct spu_context *VAR_14 = VAR_10->vm_file->private_data;
 unsigned long VAR_15, VAR_16 = VAR_11->pgoff << VAR_0;
 int VAR_17 = 0;

 FUNC_5(VAR_6, VAR_14);

 if (VAR_16 >= VAR_13)
  return VAR_4;

 if (FUNC_1(VAR_5))
  return VAR_4;






 FUNC_2(VAR_14);
 if (FUNC_4(VAR_14))
  goto refault;

 if (VAR_14->state == VAR_2) {
  FUNC_9(&VAR_5->mm->mmap_sem);
  FUNC_5(VAR_8, VAR_14);
  VAR_17 = FUNC_8(VAR_14->run_wq, VAR_14->state == VAR_1);
  FUNC_6(VAR_9, VAR_14, VAR_14->spu);
  FUNC_0(&VAR_5->mm->mmap_sem);
 } else {
  VAR_15 = VAR_14->spu->problem_phys + VAR_12;
  FUNC_10(VAR_10, (unsigned long)VAR_11->virtual_address,
     (VAR_15 + VAR_16) >> VAR_0);
  FUNC_6(VAR_7, VAR_14, VAR_14->spu);
 }

 if (!VAR_17)
  FUNC_7(VAR_14);

refault:
 FUNC_3(VAR_14);
 return VAR_3;
}
