
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_fault {unsigned long pgoff; scalar_t__ virtual_address; } ;
struct vm_area_struct {int vm_start; int vm_page_prot; int vm_mm; TYPE_1__* vm_file; } ;
struct spu_state {int use_big_pages; TYPE_2__* lscsa; } ;
struct spu_context {scalar_t__ state; TYPE_3__* spu; struct spu_state csa; } ;
struct TYPE_6__ {unsigned long local_store_phys; } ;
struct TYPE_5__ {scalar_t__ ls; } ;
struct TYPE_4__ {struct spu_context* private_data; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (struct spu_context*) ;
 int FUNC_6 (struct spu_context*) ;
 int FUNC_7 (struct vm_area_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_8 (scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct vm_area_struct *VAR_6, struct vm_fault *VAR_7)
{
 struct spu_context *VAR_8 = VAR_6->vm_file->private_data;
 unsigned long VAR_9 = (unsigned long)VAR_7->virtual_address;
 unsigned long VAR_10, VAR_11;
 VAR_11 = VAR_7->pgoff << VAR_2;
 if (VAR_11 >= VAR_0)
  return VAR_5;

 FUNC_4("spufs_mem_mmap_fault address=0x%lx, offset=0x%lx\n",
   VAR_9, VAR_11);

 if (FUNC_5(VAR_8))
  return VAR_4;

 if (VAR_8->state == VAR_3) {
  VAR_6->vm_page_prot = FUNC_2(VAR_6->vm_page_prot);
  VAR_10 = FUNC_8(VAR_8->csa.lscsa->ls + VAR_11);
 } else {
  VAR_6->vm_page_prot = FUNC_3(VAR_6->vm_page_prot);
  VAR_10 = (VAR_8->spu->local_store_phys + VAR_11) >> VAR_2;
 }
 FUNC_7(VAR_6, VAR_9, VAR_10);

 FUNC_6(VAR_8);

 return VAR_4;
}
