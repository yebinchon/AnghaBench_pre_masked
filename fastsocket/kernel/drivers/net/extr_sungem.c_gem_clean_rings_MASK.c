
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct gem_txd {scalar_t__ control_word; scalar_t__ buffer; } ;
struct gem_rxd {scalar_t__ buffer; scalar_t__ status_word; } ;
struct gem_init_block {struct gem_txd* txd; struct gem_rxd* rxd; } ;
struct gem {int pdev; struct sk_buff** tx_skbs; struct sk_buff** rx_skbs; struct gem_init_block* init_block; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gem*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int,int,int ) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct gem *VAR_5)
{
 struct gem_init_block *VAR_6 = VAR_5->init_block;
 struct sk_buff *VAR_7;
 int VAR_8;
 dma_addr_t VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  struct gem_rxd *VAR_10;

  VAR_10 = &VAR_6->rxd[VAR_8];
  if (VAR_5->rx_skbs[VAR_8] != ((void*)0)) {
   VAR_7 = VAR_5->rx_skbs[VAR_8];
   VAR_9 = FUNC_2(VAR_10->buffer);
   FUNC_3(VAR_5->pdev, VAR_9,
           FUNC_0(VAR_5),
           VAR_0);
   FUNC_1(VAR_7);
   VAR_5->rx_skbs[VAR_8] = ((void*)0);
  }
  VAR_10->status_word = 0;
  FUNC_5();
  VAR_10->buffer = 0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_5->tx_skbs[VAR_8] != ((void*)0)) {
   struct gem_txd *VAR_11;
   int VAR_12;

   VAR_7 = VAR_5->tx_skbs[VAR_8];
   VAR_5->tx_skbs[VAR_8] = ((void*)0);

   for (VAR_12 = 0; VAR_12 <= FUNC_4(VAR_7)->nr_frags; VAR_12++) {
    int VAR_13 = VAR_8 & (VAR_4 - 1);

    VAR_11 = &VAR_6->txd[VAR_13];
    VAR_9 = FUNC_2(VAR_11->buffer);
    FUNC_3(VAR_5->pdev, VAR_9,
            FUNC_2(VAR_11->control_word) &
            VAR_3, VAR_1);

    if (VAR_12 != FUNC_4(VAR_7)->nr_frags)
     VAR_8++;
   }
   FUNC_1(VAR_7);
  }
 }
}
