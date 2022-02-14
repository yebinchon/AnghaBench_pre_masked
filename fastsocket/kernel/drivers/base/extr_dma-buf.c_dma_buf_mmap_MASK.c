
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; scalar_t__ vm_file; } ;
struct dma_buf {unsigned long size; TYPE_1__* ops; scalar_t__ file; } ;
struct TYPE_2__ {int (* mmap ) (struct dma_buf*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct dma_buf*,struct vm_area_struct*) ;

int FUNC_4(struct dma_buf *VAR_3, struct vm_area_struct *VAR_4,
   unsigned long VAR_5)
{
 if (FUNC_0(!VAR_3 || !VAR_4))
  return -VAR_0;


 if (VAR_5 + ((VAR_4->vm_end - VAR_4->vm_start) >> VAR_2) < VAR_5)
  return -VAR_1;


 if (VAR_5 + ((VAR_4->vm_end - VAR_4->vm_start) >> VAR_2) >
     VAR_3->size >> VAR_2)
  return -VAR_0;


 if (VAR_4->vm_file)
  FUNC_1(VAR_4->vm_file);

 VAR_4->vm_file = VAR_3->file;
 FUNC_2(VAR_4->vm_file);

 VAR_4->vm_pgoff = VAR_5;

 return VAR_3->ops->mmap(VAR_3, VAR_4);
}
