
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dev; } ;
struct ipoib_dev_priv {int lock; } ;
struct ipoib_cm_tx {scalar_t__ mtu; int dev; TYPE_1__* neigh; int flags; int qp; } ;
struct ipoib_cm_data {int mtu; } ;
struct ib_qp_attr {int qp_state; scalar_t__ rq_psn; } ;
struct ib_cm_id {struct ipoib_cm_tx* context; } ;
struct ib_cm_event {struct ipoib_cm_data* private_data; } ;
struct TYPE_2__ {struct sk_buff_head queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ib_cm_id*,struct ib_qp_attr*,int*) ;
 int FUNC_5 (int ,struct ib_qp_attr*,int) ;
 int FUNC_6 (struct ib_cm_id*,int *,int ) ;
 int FUNC_7 (struct ipoib_dev_priv*,char*,...) ;
 struct ipoib_dev_priv* FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct sk_buff_head*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct ib_cm_id *VAR_5, struct ib_cm_event *VAR_6)
{
 struct ipoib_cm_tx *VAR_7 = VAR_5->context;
 struct ipoib_dev_priv *VAR_8 = FUNC_8(VAR_7->dev);
 struct ipoib_cm_data *VAR_9 = VAR_6->private_data;
 struct sk_buff_head VAR_10;
 struct ib_qp_attr VAR_11;
 int VAR_12, VAR_13;
 struct sk_buff *VAR_14;

 VAR_7->mtu = FUNC_2(VAR_9->mtu);

 if (VAR_7->mtu <= VAR_3) {
  FUNC_7(VAR_8, "Rejecting connection: mtu %d <= %d\n",
      VAR_7->mtu, VAR_3);
  return -VAR_0;
 }

 VAR_11.qp_state = VAR_1;
 VAR_13 = FUNC_4(VAR_5, &VAR_11, &VAR_12);
 if (VAR_13) {
  FUNC_7(VAR_8, "failed to init QP attr for RTR: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_11.rq_psn = 0 ;
 VAR_13 = FUNC_5(VAR_7->qp, &VAR_11, VAR_12);
 if (VAR_13) {
  FUNC_7(VAR_8, "failed to modify QP to RTR: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_11.qp_state = VAR_2;
 VAR_13 = FUNC_4(VAR_5, &VAR_11, &VAR_12);
 if (VAR_13) {
  FUNC_7(VAR_8, "failed to init QP attr for RTS: %d\n", VAR_13);
  return VAR_13;
 }
 VAR_13 = FUNC_5(VAR_7->qp, &VAR_11, VAR_12);
 if (VAR_13) {
  FUNC_7(VAR_8, "failed to modify QP to RTS: %d\n", VAR_13);
  return VAR_13;
 }

 FUNC_10(&VAR_10);

 FUNC_11(&VAR_8->lock);
 FUNC_9(VAR_4, &VAR_7->flags);
 if (VAR_7->neigh)
  while ((VAR_14 = FUNC_0(&VAR_7->neigh->queue)))
   FUNC_1(&VAR_10, VAR_14);
 FUNC_12(&VAR_8->lock);

 while ((VAR_14 = FUNC_0(&VAR_10))) {
  VAR_14->dev = VAR_7->dev;
  if (FUNC_3(VAR_14))
   FUNC_7(VAR_8, "dev_queue_xmit failed "
       "to requeue packet\n");
 }

 VAR_13 = FUNC_6(VAR_5, ((void*)0), 0);
 if (VAR_13) {
  FUNC_7(VAR_8, "failed to send RTU: %d\n", VAR_13);
  return VAR_13;
 }
 return 0;
}
