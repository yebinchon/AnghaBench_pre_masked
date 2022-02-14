
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvc0_graph_chan {int base; int mmio; int mmio_vma; TYPE_1__* data; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_2__ {int mem; int vma; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct nouveau_object *VAR_0)
{
 struct nvc0_graph_chan *VAR_1 = (void *)VAR_0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->data); VAR_2++) {
  FUNC_2(&VAR_1->data[VAR_2].vma);
  FUNC_1(((void*)0), &VAR_1->data[VAR_2].mem);
 }

 FUNC_2(&VAR_1->mmio_vma);
 FUNC_1(((void*)0), &VAR_1->mmio);

 FUNC_3(&VAR_1->base);
}
