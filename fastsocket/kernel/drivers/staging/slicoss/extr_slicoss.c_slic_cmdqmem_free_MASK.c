
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_cmdqmem {int * dma_pages; scalar_t__* pages; } ;
struct adapter {int pcidev; struct slic_cmdqmem cmdqmem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct slic_cmdqmem*,int ,int) ;
 int FUNC_1 (int ,int ,void*,int ) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_2)
{
 struct slic_cmdqmem *VAR_3 = &VAR_2->cmdqmem;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3->pages[VAR_4]) {
   FUNC_1(VAR_2->pcidev,
         VAR_0,
         (void *) VAR_3->pages[VAR_4],
         VAR_3->dma_pages[VAR_4]);
  }
 }
 FUNC_0(VAR_3, 0, sizeof(struct slic_cmdqmem));
}
