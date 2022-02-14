
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct netdev_queue {int dummy; } ;
struct bnx2x_fp_txdata {scalar_t__ tx_bd_cons; scalar_t__ tx_pkt_cons; int txq_index; int * tx_cons_sb; } ;
struct bnx2x {scalar_t__ state; int dev; scalar_t__ panic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct netdev_queue*,int ) ;
 int FUNC_3 (struct netdev_queue*) ;
 scalar_t__ FUNC_4 (struct bnx2x*,struct bnx2x_fp_txdata*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct bnx2x*,struct bnx2x_fp_txdata*) ;
 scalar_t__ FUNC_6 (int ) ;
 struct netdev_queue* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct netdev_queue*) ;
 int FUNC_9 (struct netdev_queue*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (scalar_t__) ;

int FUNC_13(struct bnx2x *VAR_3, struct bnx2x_fp_txdata *VAR_4)
{
 struct netdev_queue *VAR_5;
 u16 VAR_6, VAR_7, VAR_8 = VAR_4->tx_bd_cons;






 VAR_5 = FUNC_7(VAR_3->dev, VAR_4->txq_index);
 VAR_6 = FUNC_6(*VAR_4->tx_cons_sb);
 VAR_7 = VAR_4->tx_pkt_cons;

 while (VAR_7 != VAR_6) {
  u16 VAR_9;

  VAR_9 = FUNC_1(VAR_7);

  FUNC_0(VAR_2,
     "queue[%d]: hw_cons %u  sw_cons %u  pkt_cons %u\n",
     VAR_4->txq_index, VAR_6, VAR_7, VAR_9);

  VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_9);

  VAR_7++;
 }

 VAR_4->tx_pkt_cons = VAR_7;
 VAR_4->tx_bd_cons = VAR_8;
 FUNC_10();

 if (FUNC_12(FUNC_8(VAR_5))) {
  FUNC_2(VAR_5, FUNC_11());

  if ((FUNC_8(VAR_5)) &&
      (VAR_3->state == VAR_0) &&
      (FUNC_5(VAR_3, VAR_4) >= VAR_1))
   FUNC_9(VAR_5);

  FUNC_3(VAR_5);
 }
 return 0;
}
