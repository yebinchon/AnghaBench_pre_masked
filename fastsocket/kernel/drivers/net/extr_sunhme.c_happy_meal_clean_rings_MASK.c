
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct happy_meal_txd {int tx_flags; int tx_addr; } ;
struct happy_meal_rxd {int rx_addr; } ;
struct happy_meal {int dma_dev; TYPE_1__* happy_block; struct sk_buff** tx_skbs; struct sk_buff** rx_skbs; } ;
struct TYPE_4__ {int nr_frags; } ;
struct TYPE_3__ {struct happy_meal_txd* happy_meal_txd; struct happy_meal_rxd* happy_meal_rxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (struct happy_meal*,int *) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct happy_meal *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_6->rx_skbs[VAR_7] != ((void*)0)) {
   struct sk_buff *VAR_8 = VAR_6->rx_skbs[VAR_7];
   struct happy_meal_rxd *VAR_9;
   u32 VAR_10;

   VAR_9 = &VAR_6->happy_block->happy_meal_rxd[VAR_7];
   VAR_10 = FUNC_2(VAR_6, &VAR_9->rx_addr);
   FUNC_1(VAR_6->dma_dev, VAR_10,
      VAR_2, VAR_0);
   FUNC_0(VAR_8);
   VAR_6->rx_skbs[VAR_7] = ((void*)0);
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (VAR_6->tx_skbs[VAR_7] != ((void*)0)) {
   struct sk_buff *VAR_11 = VAR_6->tx_skbs[VAR_7];
   struct happy_meal_txd *VAR_12;
   u32 VAR_13;
   int VAR_14;

   VAR_6->tx_skbs[VAR_7] = ((void*)0);

   for (VAR_14 = 0; VAR_14 <= FUNC_3(VAR_11)->nr_frags; VAR_14++) {
    VAR_12 = &VAR_6->happy_block->happy_meal_txd[VAR_7];
    VAR_13 = FUNC_2(VAR_6, &VAR_12->tx_addr);
    FUNC_1(VAR_6->dma_dev, VAR_13,
       (FUNC_2(VAR_6, &VAR_12->tx_flags)
        & VAR_4),
       VAR_1);

    if (VAR_14 != FUNC_3(VAR_11)->nr_frags)
     VAR_7++;
   }

   FUNC_0(VAR_11);
  }
 }
}
