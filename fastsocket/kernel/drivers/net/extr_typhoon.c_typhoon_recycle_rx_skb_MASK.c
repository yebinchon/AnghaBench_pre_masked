
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct typhoon_indexes {void* rxBuffReady; int rxBuffCleared; } ;
struct basic_ring {int lastWrite; scalar_t__ ringBase; } ;
struct typhoon {struct basic_ring rxBuffRing; struct rxbuff_ent* rxbuffers; struct typhoon_indexes* indexes; } ;
struct rxbuff_ent {int dma_addr; int * skb; } ;
struct rx_free {size_t virtAddr; void* physAddr; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct typhoon *VAR_1, u32 VAR_2)
{
 struct typhoon_indexes *VAR_3 = VAR_1->indexes;
 struct rxbuff_ent *VAR_4 = &VAR_1->rxbuffers[VAR_2];
 struct basic_ring *VAR_5 = &VAR_1->rxBuffRing;
 struct rx_free *VAR_6;

 if((VAR_5->lastWrite + sizeof(*VAR_6)) % (VAR_0 * sizeof(*VAR_6)) ==
    FUNC_2(VAR_3->rxBuffCleared)) {


  FUNC_1(VAR_4->skb);
  VAR_4->skb = ((void*)0);
  return;
 }

 VAR_6 = (struct rx_free *) (VAR_5->ringBase + VAR_5->lastWrite);
 FUNC_3(&VAR_5->lastWrite, 1);
 VAR_6->virtAddr = VAR_2;
 VAR_6->physAddr = FUNC_0(VAR_4->dma_addr);


 FUNC_4();
 VAR_3->rxBuffReady = FUNC_0(VAR_5->lastWrite);
}
