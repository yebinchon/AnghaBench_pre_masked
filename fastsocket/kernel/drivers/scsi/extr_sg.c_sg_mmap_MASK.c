
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int * vm_ops; TYPE_2__* vm_private_data; int vm_flags; scalar_t__ vm_pgoff; } ;
struct file {scalar_t__ private_data; } ;
struct TYPE_3__ {unsigned long bufflen; int page_order; int k_use_sg; } ;
struct TYPE_4__ {int mmap_called; TYPE_1__ reserve; } ;
typedef TYPE_1__ Sg_scatter_hold ;
typedef TYPE_2__ Sg_fd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 int FUNC_1 (char*,void*,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_6, struct vm_area_struct *VAR_7)
{
 Sg_fd *VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;
 Sg_scatter_hold *VAR_12;
 int VAR_13, VAR_14;

 if ((!VAR_6) || (!VAR_7) || (!(VAR_8 = (Sg_fd *) VAR_6->private_data)))
  return -VAR_2;
 VAR_9 = VAR_7->vm_end - VAR_7->vm_start;
 FUNC_0(3, FUNC_1("sg_mmap starting, vm_start=%p, len=%d\n",
       (void *) VAR_7->vm_start, (int) VAR_9));
 if (VAR_7->vm_pgoff)
  return -VAR_0;
 VAR_12 = &VAR_8->reserve;
 if (VAR_9 > VAR_12->bufflen)
  return -VAR_1;

 VAR_11 = VAR_7->vm_start;
 VAR_14 = 1 << (VAR_3 + VAR_12->page_order);
 for (VAR_13 = 0; VAR_13 < VAR_12->k_use_sg && VAR_11 < VAR_7->vm_end; VAR_13++) {
  VAR_10 = VAR_7->vm_end - VAR_11;
  VAR_10 = (VAR_10 < VAR_14) ? VAR_10 : VAR_14;
  VAR_11 += VAR_10;
 }

 VAR_8->mmap_called = 1;
 VAR_7->vm_flags |= VAR_4;
 VAR_7->vm_private_data = VAR_8;
 VAR_7->vm_ops = &VAR_5;
 return 0;
}
