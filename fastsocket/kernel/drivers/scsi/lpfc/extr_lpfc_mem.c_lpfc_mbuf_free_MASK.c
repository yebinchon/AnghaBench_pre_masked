
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int hbalock; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct lpfc_hba*,void*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void
FUNC_3(struct lpfc_hba * VAR_0, void *VAR_1, dma_addr_t VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->hbalock, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->hbalock, VAR_3);
 return;
}
