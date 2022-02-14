
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_rspqueue {int num_pages; int * rspbuf; scalar_t__ pageindex; scalar_t__ offset; scalar_t__* paddr; int ** vaddr; } ;
struct adapter {int pcidev; struct slic_rspqueue rspqueue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_1)
{
 int VAR_2;
 struct slic_rspqueue *VAR_3 = &VAR_1->rspqueue;

 for (VAR_2 = 0; VAR_2 < VAR_3->num_pages; VAR_2++) {
  if (VAR_3->vaddr[VAR_2]) {
   FUNC_0(VAR_1->pcidev, VAR_0,
         VAR_3->vaddr[VAR_2], VAR_3->paddr[VAR_2]);
  }
  VAR_3->vaddr[VAR_2] = ((void*)0);
  VAR_3->paddr[VAR_2] = 0;
 }
 VAR_3->offset = 0;
 VAR_3->pageindex = 0;
 VAR_3->rspbuf = ((void*)0);
}
