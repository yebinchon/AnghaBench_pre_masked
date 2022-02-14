
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_end; } ;
struct videobuf_dma_contig_memory {scalar_t__ size; int is_userptr; unsigned long dma_handle; } ;
struct videobuf_buffer {scalar_t__ baddr; int size; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int *) ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,scalar_t__) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct videobuf_dma_contig_memory *VAR_5,
     struct videobuf_buffer *VAR_6)
{
 struct mm_struct *VAR_7 = VAR_4->mm;
 struct vm_area_struct *VAR_8;
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12;
 int VAR_13;

 VAR_5->size = FUNC_0(VAR_6->size);
 VAR_5->is_userptr = 0;
 VAR_13 = -VAR_1;

 FUNC_1(&VAR_7->mmap_sem);

 VAR_8 = FUNC_2(VAR_7, VAR_6->baddr);
 if (!VAR_8)
  goto out_up;

 if ((VAR_6->baddr + VAR_5->size) > VAR_8->vm_end)
  goto out_up;

 VAR_11 = 0;
 VAR_9 = 0;
 VAR_12 = VAR_6->baddr;

 while (VAR_11 < (VAR_5->size >> VAR_2)) {
  VAR_13 = FUNC_3(VAR_8, VAR_12, &VAR_10);
  if (VAR_13)
   break;

  if (VAR_11 == 0)
   VAR_5->dma_handle = VAR_10 << VAR_2;
  else if (VAR_10 != (VAR_9 + 1))
   VAR_13 = -VAR_0;

  if (VAR_13)
   break;

  VAR_9 = VAR_10;
  VAR_12 += VAR_3;
  VAR_11++;
 }

 if (!VAR_13)
  VAR_5->is_userptr = 1;

 out_up:
 FUNC_4(&VAR_4->mm->mmap_sem);

 return VAR_13;
}
