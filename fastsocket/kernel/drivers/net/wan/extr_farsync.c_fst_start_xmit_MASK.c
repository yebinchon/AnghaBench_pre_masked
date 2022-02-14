
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int tx_errors; int tx_carrier_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct fst_port_info {scalar_t__ index; size_t txqe; int txqs; int start; struct sk_buff** txq; struct fst_card_info* card; } ;
struct fst_card_info {scalar_t__ card_no; int card_lock; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (struct sk_buff*) ;
 struct fst_port_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static netdev_tx_t
FUNC_9(struct sk_buff *VAR_8, struct net_device *VAR_9)
{
 struct fst_card_info *VAR_10;
 struct fst_port_info *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_9);
 VAR_10 = VAR_11->card;
 FUNC_0(VAR_1, "fst_start_xmit: length = %d\n", VAR_8->len);


 if (!FUNC_4(VAR_9)) {
  FUNC_1(VAR_8);
  VAR_9->stats.tx_errors++;
  VAR_9->stats.tx_carrier_errors++;
  FUNC_0(VAR_0,
      "Tried to transmit but no carrier on card %d port %d\n",
      VAR_10->card_no, VAR_11->index);
  return VAR_4;
 }


 if (VAR_8->len > VAR_3) {
  FUNC_0(VAR_0, "Packet too large %d vs %d\n", VAR_8->len,
      VAR_3);
  FUNC_1(VAR_8);
  VAR_9->stats.tx_errors++;
  return VAR_4;
 }






 FUNC_6(&VAR_10->card_lock, VAR_12);
 if ((VAR_13 = VAR_11->txqe - VAR_11->txqs) < 0) {




  VAR_13 = VAR_13 + VAR_2;
 }
 FUNC_7(&VAR_10->card_lock, VAR_12);
 if (VAR_13 > VAR_6) {




  FUNC_5(VAR_9);
  VAR_11->start = 1;
 }

 if (VAR_13 == VAR_2 - 1) {



  FUNC_1(VAR_8);
  VAR_9->stats.tx_errors++;
  FUNC_0(VAR_0, "Tx queue overflow card %d port %d\n",
      VAR_10->card_no, VAR_11->index);
  return VAR_4;
 }




 FUNC_6(&VAR_10->card_lock, VAR_12);
 VAR_11->txq[VAR_11->txqe] = VAR_8;
 VAR_11->txqe++;
 if (VAR_11->txqe == VAR_2)
  VAR_11->txqe = 0;
 FUNC_7(&VAR_10->card_lock, VAR_12);


 FUNC_3(&VAR_7, VAR_10->card_no);
 FUNC_8(&VAR_5);

 return VAR_4;
}
