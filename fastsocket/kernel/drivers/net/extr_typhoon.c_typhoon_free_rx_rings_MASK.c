
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct typhoon {int pdev; struct rxbuff_ent* rxbuffers; } ;
struct rxbuff_ent {int * skb; int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct typhoon *VAR_3)
{
 u32 VAR_4;

 for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct rxbuff_ent *VAR_5 = &VAR_3->rxbuffers[VAR_4];
  if(VAR_5->skb) {
   FUNC_1(VAR_3->pdev, VAR_5->dma_addr, VAR_1,
           VAR_0);
   FUNC_0(VAR_5->skb);
   VAR_5->skb = ((void*)0);
  }
 }
}
