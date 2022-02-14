
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* m_vtob_p ;
typedef TYPE_2__* m_pool_p ;
typedef int m_pool_ident_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {TYPE_1__** vtob; } ;
struct TYPE_4__ {void* vaddr; scalar_t__ baddr; struct TYPE_4__* next; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (void*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_1 ;

dma_addr_t FUNC_5(m_pool_ident_t VAR_2, void *VAR_3)
{
 unsigned long VAR_4;
 m_pool_p VAR_5;
 int VAR_6 = FUNC_0(VAR_3);
 m_vtob_p VAR_7 = ((void*)0);
 void *VAR_8 = (void *)((unsigned long)VAR_3 & ~VAR_0);
 dma_addr_t VAR_9;

 FUNC_3(&VAR_1, VAR_4);
 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5) {
  VAR_7 = VAR_5->vtob[VAR_6];
  while (VAR_7 && VAR_7->vaddr != VAR_8)
   VAR_7 = VAR_7->next;
 }
 if (!VAR_7)
  FUNC_2("sym: VTOBUS FAILED!\n");
 VAR_9 = VAR_7->baddr + (VAR_3 - VAR_8);
 FUNC_4(&VAR_1, VAR_4);
 return VAR_9;
}
