
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vme_dma_list {int mtx; TYPE_1__* parent; } ;
struct vme_dma_attr {int dummy; } ;
struct vme_bridge {int (* dma_list_add ) (struct vme_dma_list*,struct vme_dma_attr*,struct vme_dma_attr*,size_t) ;} ;
struct TYPE_2__ {struct vme_bridge* parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct vme_dma_list*,struct vme_dma_attr*,struct vme_dma_attr*,size_t) ;

int FUNC_4(struct vme_dma_list *VAR_1, struct vme_dma_attr *VAR_2,
 struct vme_dma_attr *VAR_3, size_t VAR_4)
{
 struct vme_bridge *VAR_5 = VAR_1->parent->parent;
 int VAR_6;

 if (VAR_5->dma_list_add == ((void*)0)) {
  FUNC_2("Link List DMA generation not supported\n");
  return -VAR_0;
 }

 if (FUNC_0(&(VAR_1->mtx))) {
  FUNC_2("Link List already submitted\n");
  return -VAR_0;
 }

 VAR_6 = VAR_5->dma_list_add(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_1(&(VAR_1->mtx));

 return VAR_6;
}
