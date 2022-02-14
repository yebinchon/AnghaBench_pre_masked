
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vme_dma_list {int mtx; TYPE_1__* parent; } ;
struct vme_bridge {int (* dma_list_empty ) (struct vme_dma_list*) ;} ;
struct TYPE_2__ {struct vme_bridge* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct vme_dma_list*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct vme_dma_list*) ;

int FUNC_5(struct vme_dma_list *VAR_1)
{
 struct vme_bridge *VAR_2 = VAR_1->parent->parent;
 int VAR_3;

 if (VAR_2->dma_list_empty == ((void*)0)) {
  FUNC_3("Emptying of Link Lists not supported\n");
  return -VAR_0;
 }

 if (FUNC_1(&(VAR_1->mtx))) {
  FUNC_3("Link List in use\n");
  return -VAR_0;
 }





 VAR_3 = VAR_2->dma_list_empty(VAR_1);
 if (VAR_3) {
  FUNC_3("Unable to empty link-list entries\n");
  FUNC_2(&(VAR_1->mtx));
  return VAR_3;
 }
 FUNC_2(&(VAR_1->mtx));
 FUNC_0(VAR_1);

 return VAR_3;
}
