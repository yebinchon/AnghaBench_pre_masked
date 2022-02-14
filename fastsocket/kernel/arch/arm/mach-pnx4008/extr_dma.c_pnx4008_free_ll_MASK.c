
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pnx4008_dma_ll {struct pnx4008_dma_ll* next; int next_dma; } ;


 int FUNC_0 (struct pnx4008_dma_ll*,int ) ;

void FUNC_1(u32 VAR_0, struct pnx4008_dma_ll * VAR_1)
{
 struct pnx4008_dma_ll *VAR_2;
 u32 VAR_3;

 while (VAR_1) {
  VAR_3 = VAR_1->next_dma;
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1, VAR_0);

  VAR_0 = VAR_3;
  VAR_1 = VAR_2;
 }
}
