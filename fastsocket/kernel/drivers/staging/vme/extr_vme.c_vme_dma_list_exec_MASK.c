
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vme_dma_list {int mtx; TYPE_1__* parent; } ;
struct vme_bridge {int (* dma_list_exec ) (struct vme_dma_list*) ;} ;
struct TYPE_2__ {struct vme_bridge* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct vme_dma_list*) ;

int FUNC_4(struct vme_dma_list *VAR_1)
{
 struct vme_bridge *VAR_2 = VAR_1->parent->parent;
 int VAR_3;

 if (VAR_2->dma_list_exec == ((void*)0)) {
  FUNC_2("Link List DMA execution not supported\n");
  return -VAR_0;
 }

 FUNC_0(&(VAR_1->mtx));

 VAR_3 = VAR_2->dma_list_exec(VAR_1);

 FUNC_1(&(VAR_1->mtx));

 return VAR_3;
}
