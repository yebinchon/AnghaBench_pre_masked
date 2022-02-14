
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pasemi_mac_txring {int next_to_clean; int next_to_fill; int chan; struct pasemi_mac_buffer* ring_info; } ;
struct pasemi_mac_buffer {scalar_t__ skb; scalar_t__ dma; } ;
struct pasemi_mac {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pasemi_mac_buffer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pasemi_mac*,int,scalar_t__,scalar_t__*) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 struct pasemi_mac_txring* FUNC_4 (struct pasemi_mac*) ;

__attribute__((used)) static void FUNC_5(struct pasemi_mac *VAR_2)
{
 struct pasemi_mac_txring *VAR_3 = FUNC_4(VAR_2);
 unsigned int VAR_4, VAR_5;
 struct pasemi_mac_buffer *VAR_6;
 dma_addr_t VAR_7[VAR_0+1];
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = VAR_3->next_to_clean;
 VAR_11 = VAR_3->next_to_fill;


 if (VAR_10 > VAR_11)
  VAR_11 += VAR_1;

 for (VAR_4 = VAR_10; VAR_4 < VAR_11; VAR_4 += VAR_8) {
  VAR_6 = &VAR_3->ring_info[(VAR_4+1) & (VAR_1-1)];
  if (VAR_6->dma && VAR_6->skb) {
   VAR_9 = FUNC_3(VAR_6->skb)->nr_frags;
   for (VAR_5 = 0; VAR_5 <= VAR_9; VAR_5++)
    VAR_7[VAR_5] = VAR_3->ring_info[(VAR_4+1+VAR_5) &
      (VAR_1-1)].dma;
   VAR_8 = FUNC_2(VAR_2, VAR_9,
       VAR_6->skb, VAR_7);
  } else
   VAR_8 = 2;
 }

 FUNC_0(VAR_3->ring_info);
 FUNC_1(&VAR_3->chan);

}
