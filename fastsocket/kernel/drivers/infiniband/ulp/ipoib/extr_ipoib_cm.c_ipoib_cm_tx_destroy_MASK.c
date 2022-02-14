
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipoib_dev_priv {int tx_outstanding; int flags; int ca; } ;
struct ipoib_cm_tx_buf {TYPE_2__* skb; int mapping; } ;
struct ipoib_cm_tx {int tx_tail; struct ipoib_cm_tx_buf* tx_ring; TYPE_1__* qp; int dev; scalar_t__ tx_head; scalar_t__ id; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_3__ {int qp_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,int ,scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_5 (struct ipoib_dev_priv*,char*,scalar_t__) ;
 unsigned long VAR_4 ;
 int FUNC_6 (struct ipoib_cm_tx*) ;
 int FUNC_7 (int) ;
 struct ipoib_dev_priv* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct ipoib_cm_tx_buf*) ;

__attribute__((used)) static void FUNC_17(struct ipoib_cm_tx *VAR_5)
{
 struct ipoib_dev_priv *VAR_6 = FUNC_8(VAR_5->dev);
 struct ipoib_cm_tx_buf *VAR_7;
 unsigned long VAR_8;

 FUNC_4(VAR_6, "Destroy active connection 0x%x head 0x%x tail 0x%x\n",
    VAR_5->qp ? VAR_5->qp->qp_num : 0, VAR_5->tx_head, VAR_5->tx_tail);

 if (VAR_5->id)
  FUNC_1(VAR_5->id);

 if (VAR_5->tx_ring) {

  VAR_8 = VAR_4;
  while ((int) VAR_5->tx_tail - (int) VAR_5->tx_head < 0) {
   if (FUNC_14(VAR_4, VAR_8 + 5 * VAR_1)) {
    FUNC_5(VAR_6, "timing out; %d sends not completed\n",
        VAR_5->tx_head - VAR_5->tx_tail);
    goto timeout;
   }

   FUNC_7(1);
  }
 }

timeout:

 while ((int) VAR_5->tx_tail - (int) VAR_5->tx_head < 0) {
  VAR_7 = &VAR_5->tx_ring[VAR_5->tx_tail & (VAR_3 - 1)];
  FUNC_3(VAR_6->ca, VAR_7->mapping, VAR_7->skb->len,
        VAR_0);
  FUNC_0(VAR_7->skb);
  ++VAR_5->tx_tail;
  FUNC_10(VAR_5->dev);
  if (FUNC_15(--VAR_6->tx_outstanding == VAR_3 >> 1) &&
      FUNC_9(VAR_5->dev) &&
      FUNC_13(VAR_2, &VAR_6->flags))
   FUNC_12(VAR_5->dev);
  FUNC_11(VAR_5->dev);
 }

 if (VAR_5->qp)
  FUNC_2(VAR_5->qp);

 FUNC_16(VAR_5->tx_ring);
 FUNC_6(VAR_5);
}
