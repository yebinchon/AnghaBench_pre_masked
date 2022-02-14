
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_2__ {int rxbuf; struct ath_rx_edma* rx_edma; } ;
struct ath_softc {TYPE_1__ rx; int dev; struct ath_hw* sc_ah; } ;
struct ath_rx_status {int dummy; } ;
struct ath_rx_edma {int rx_fifo; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int rx_bufsize; } ;
struct ath_buf {int list; int bf_buf_addr; } ;
typedef enum ath9k_rx_qtype { ____Placeholder_ath9k_rx_qtype } ath9k_rx_qtype ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_buf* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,struct ath_rx_status*,int ) ;
 int FUNC_5 (struct ath_softc*,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int *,int *) ;
 struct sk_buff* FUNC_9 (int *) ;

__attribute__((used)) static bool FUNC_10(struct ath_softc *VAR_3,
     enum ath9k_rx_qtype VAR_4,
     struct ath_rx_status *VAR_5,
     struct ath_buf **VAR_6)
{
 struct ath_rx_edma *VAR_7 = &VAR_3->rx.rx_edma[VAR_4];
 struct ath_hw *VAR_8 = VAR_3->sc_ah;
 struct ath_common *VAR_9 = FUNC_3(VAR_8);
 struct sk_buff *VAR_10;
 struct ath_buf *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_9(&VAR_7->rx_fifo);
 if (!VAR_10)
  return 0;

 VAR_11 = FUNC_1(VAR_10);
 FUNC_0(!VAR_11);

 FUNC_6(VAR_3->dev, VAR_11->bf_buf_addr,
    VAR_9->rx_bufsize, VAR_0);

 VAR_12 = FUNC_4(VAR_8, VAR_5, VAR_10->data);
 if (VAR_12 == -VAR_1) {

  FUNC_7(VAR_3->dev, VAR_11->bf_buf_addr,
    VAR_9->rx_bufsize, VAR_0);
  return 0;
 }

 FUNC_2(VAR_10, &VAR_7->rx_fifo);
 if (VAR_12 == -VAR_2) {

  FUNC_8(&VAR_11->list, &VAR_3->rx.rxbuf);
  FUNC_5(VAR_3, VAR_4);

  VAR_10 = FUNC_9(&VAR_7->rx_fifo);
  if (VAR_10) {
   VAR_11 = FUNC_1(VAR_10);
   FUNC_0(!VAR_11);

   FUNC_2(VAR_10, &VAR_7->rx_fifo);
   FUNC_8(&VAR_11->list, &VAR_3->rx.rxbuf);
   FUNC_5(VAR_3, VAR_4);
  }

  VAR_11 = ((void*)0);
 }

 *VAR_6 = VAR_11;
 return 1;
}
