
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_tx_buf {int * skb; } ;
struct ipoib_rx_buf {int * skb; int mapping; } ;
struct ipoib_dev_priv {int tx_head; int tx_tail; int recv_cq; int dead_ahs; int ah_reap_task; int flags; int qp; int poll_timer; struct ipoib_rx_buf* rx_ring; int tx_outstanding; int ca; struct ipoib_tx_buf* tx_ring; int napi; } ;
struct ib_qp_attr {int qp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct ib_qp_attr*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct ipoib_dev_priv*,char*) ;
 int FUNC_9 (int ,struct ipoib_tx_buf*) ;
 int FUNC_10 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (struct ipoib_dev_priv*,int ) ;
 int FUNC_12 (struct ipoib_dev_priv*,char*,...) ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 struct ipoib_dev_priv* FUNC_16 (struct net_device*) ;
 scalar_t__ FUNC_17 (struct net_device*) ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int ,int *) ;
 scalar_t__ FUNC_20 (unsigned long,unsigned long) ;

int FUNC_21(struct net_device *VAR_11, int VAR_12)
{
 struct ipoib_dev_priv *VAR_13 = FUNC_16(VAR_11);
 struct ib_qp_attr VAR_14;
 unsigned long VAR_15;
 struct ipoib_tx_buf *VAR_16;
 int VAR_17;

 if (FUNC_19(VAR_5, &VAR_13->flags))
  FUNC_15(&VAR_13->napi);

 FUNC_7(VAR_11);





 VAR_14.qp_state = VAR_2;
 if (FUNC_5(VAR_13->qp, &VAR_14, VAR_4))
  FUNC_12(VAR_13, "Failed to modify QP to ERROR state\n");


 VAR_15 = VAR_10;

 while (VAR_13->tx_head != VAR_13->tx_tail || FUNC_17(VAR_11)) {
  if (FUNC_20(VAR_10, VAR_15 + 5 * VAR_0)) {
   FUNC_12(VAR_13, "timing out; %d sends %d receives not completed\n",
       VAR_13->tx_head - VAR_13->tx_tail, FUNC_17(VAR_11));





   while ((int) VAR_13->tx_tail - (int) VAR_13->tx_head < 0) {
    VAR_16 = &VAR_13->tx_ring[VAR_13->tx_tail &
       (VAR_8 - 1)];
    FUNC_9(VAR_13->ca, VAR_16);
    FUNC_3(VAR_16->skb);
    ++VAR_13->tx_tail;
    --VAR_13->tx_outstanding;
   }

   for (VAR_17 = 0; VAR_17 < VAR_7; ++VAR_17) {
    struct ipoib_rx_buf *VAR_18;

    VAR_18 = &VAR_13->rx_ring[VAR_17];
    if (!VAR_18->skb)
     continue;
    FUNC_11(VAR_13,
            VAR_13->rx_ring[VAR_17].mapping);
    FUNC_3(VAR_18->skb);
    VAR_18->skb = ((void*)0);
   }

   goto timeout;
  }

  FUNC_10(VAR_11);

  FUNC_14(1);
 }

 FUNC_8(VAR_13, "All sends and receives done.\n");

timeout:
 FUNC_2(&VAR_13->poll_timer);
 VAR_14.qp_state = VAR_3;
 if (FUNC_5(VAR_13->qp, &VAR_14, VAR_4))
  FUNC_12(VAR_13, "Failed to modify QP to RESET state\n");


 FUNC_18(VAR_6, &VAR_13->flags);
 FUNC_1(&VAR_13->ah_reap_task);
 if (VAR_12)
  FUNC_4(VAR_9);

 VAR_15 = VAR_10;

 while (!FUNC_13(&VAR_13->dead_ahs)) {
  FUNC_0(VAR_11);

  if (FUNC_20(VAR_10, VAR_15 + VAR_0)) {
   FUNC_12(VAR_13, "timing out; will leak address handles\n");
   break;
  }

  FUNC_14(1);
 }

 FUNC_6(VAR_13->recv_cq, VAR_1);

 return 0;
}
