
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_vmalloc_memory {int * vaddr; int magic; } ;
struct videobuf_buffer {scalar_t__ memory; scalar_t__ baddr; struct videobuf_vmalloc_memory* priv; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct videobuf_buffer *VAR_2)
{
 struct videobuf_vmalloc_memory *VAR_3 = VAR_2->priv;







 if ((VAR_2->memory != VAR_1) || VAR_2->baddr)
  return;

 if (!VAR_3)
  return;

 FUNC_0(VAR_3->magic, VAR_0);

 FUNC_1(VAR_3->vaddr);
 VAR_3->vaddr = ((void*)0);

 return;
}
