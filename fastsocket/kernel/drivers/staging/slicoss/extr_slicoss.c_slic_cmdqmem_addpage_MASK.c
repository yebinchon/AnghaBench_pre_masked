
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slic_cmdqmem {size_t pagecnt; int** pages; int * dma_pages; } ;
struct adapter {int pcidev; struct slic_cmdqmem cmdqmem; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int* FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static u32 *FUNC_2(struct adapter *VAR_2)
{
 struct slic_cmdqmem *VAR_3 = &VAR_2->cmdqmem;
 u32 *VAR_4;

 if (VAR_3->pagecnt >= VAR_1)
  return ((void*)0);
 VAR_4 = FUNC_1(VAR_2->pcidev,
     VAR_0,
     &VAR_3->dma_pages[VAR_3->pagecnt]);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(((u32) VAR_4 & 0xFFFFF000) == (u32) VAR_4);

 VAR_3->pages[VAR_3->pagecnt] = VAR_4;
 VAR_3->pagecnt++;
 return VAR_4;
}
