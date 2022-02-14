
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cryptocop_dma_desc {struct cryptocop_dma_desc* next; TYPE_1__* dma_descr; } ;
typedef int dma_descr_data ;
struct TYPE_2__ {int * next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct cryptocop_dma_desc *VAR_0)
{
 FUNC_0(FUNC_1("setup_descr_chain: entering\n"));
 while (VAR_0) {
  if (VAR_0->next) {
   VAR_0->dma_descr->next = (dma_descr_data*)FUNC_2(VAR_0->next->dma_descr);
  } else {
   VAR_0->dma_descr->next = ((void*)0);
  }
  VAR_0 = VAR_0->next;
 }
 FUNC_0(FUNC_1("setup_descr_chain: exit\n"));
}
