
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_end; int vm_start; struct videobuf_mapping* vm_private_data; } ;
struct videobuf_queue {TYPE_2__** bufs; TYPE_1__* ops; } ;
struct videobuf_mapping {scalar_t__ count; struct videobuf_queue* q; } ;
struct videobuf_dma_sg_memory {int magic; } ;
struct TYPE_4__ {scalar_t__ baddr; struct videobuf_mapping* map; struct videobuf_dma_sg_memory* priv; } ;
struct TYPE_3__ {int (* buf_release ) (struct videobuf_queue*,TYPE_2__*) ;} ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,struct videobuf_mapping*,struct videobuf_queue*,...) ;
 int FUNC_2 (struct videobuf_mapping*) ;
 int FUNC_3 (struct videobuf_queue*,TYPE_2__*) ;
 int FUNC_4 (struct videobuf_queue*) ;
 int FUNC_5 (struct videobuf_queue*) ;

__attribute__((used)) static void FUNC_6(struct vm_area_struct *VAR_2)
{
 struct videobuf_mapping *VAR_3 = VAR_2->vm_private_data;
 struct videobuf_queue *VAR_4 = VAR_3->q;
 struct videobuf_dma_sg_memory *VAR_5;
 int VAR_6;

 FUNC_1(2, "vm_close %p [count=%d,vma=%08lx-%08lx]\n", VAR_3,
  VAR_3->count, VAR_2->vm_start, VAR_2->vm_end);

 VAR_3->count--;
 if (0 == VAR_3->count) {
  FUNC_1(1, "munmap %p q=%p\n", VAR_3, VAR_4);
  FUNC_4(VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   if (((void*)0) == VAR_4->bufs[VAR_6])
    continue;
   VAR_5 = VAR_4->bufs[VAR_6]->priv;
   if (!VAR_5)
    continue;

   FUNC_0(VAR_5->magic, VAR_0);

   if (VAR_4->bufs[VAR_6]->map != VAR_3)
    continue;
   VAR_4->bufs[VAR_6]->map = ((void*)0);
   VAR_4->bufs[VAR_6]->baddr = 0;
   VAR_4->ops->buf_release(VAR_4, VAR_4->bufs[VAR_6]);
  }
  FUNC_5(VAR_4);
  FUNC_2(VAR_3);
 }
 return;
}
