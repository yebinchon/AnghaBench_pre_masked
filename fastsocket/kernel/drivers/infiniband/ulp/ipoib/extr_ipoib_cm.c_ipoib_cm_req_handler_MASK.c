
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {scalar_t__ state; int qp; int list; void* jiffies; struct ib_cm_id* id; struct net_device* dev; } ;
struct TYPE_3__ {int passive_ids; int stale_task; } ;
struct ipoib_dev_priv {int lock; TYPE_1__ cm; } ;
struct ipoib_cm_rx {scalar_t__ state; int qp; int list; void* jiffies; struct ib_cm_id* id; struct ipoib_cm_rx* dev; } ;
struct ib_cm_id {struct net_device* context; } ;
struct TYPE_4__ {int req_rcvd; } ;
struct ib_cm_event {TYPE_2__ param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct net_device*,struct net_device*) ;
 int VAR_5 ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,struct ib_cm_id*,int ,unsigned int) ;
 int FUNC_8 (struct net_device*,struct ib_cm_id*,struct net_device*) ;
 int FUNC_9 (struct net_device*,struct ib_cm_id*,int ,int *,unsigned int) ;
 int FUNC_10 (struct ipoib_dev_priv*,char*) ;
 int FUNC_11 (struct ipoib_dev_priv*,char*,...) ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_12 (struct net_device*) ;
 struct net_device* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int *) ;
 struct ipoib_dev_priv* FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ,int *,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct ib_cm_id *VAR_8, struct ib_cm_event *VAR_9)
{
 struct net_device *VAR_10 = VAR_8->context;
 struct ipoib_dev_priv *VAR_11 = FUNC_15(VAR_10);
 struct ipoib_cm_rx *VAR_12;
 unsigned VAR_13;
 int VAR_14;

 FUNC_10(VAR_11, "REQ arrived\n");
 VAR_12 = FUNC_13(sizeof *VAR_12, VAR_1);
 if (!VAR_12)
  return -VAR_0;
 VAR_12->dev = VAR_10;
 VAR_12->id = VAR_8;
 VAR_8->context = VAR_12;
 VAR_12->state = VAR_4;
 VAR_12->jiffies = VAR_7;
 FUNC_0(&VAR_12->list);

 VAR_12->qp = FUNC_5(VAR_10, VAR_12);
 if (FUNC_1(VAR_12->qp)) {
  VAR_14 = FUNC_2(VAR_12->qp);
  goto err_qp;
 }

 VAR_13 = FUNC_17() & 0xffffff;
 VAR_14 = FUNC_7(VAR_10, VAR_8, VAR_12->qp, VAR_13);
 if (VAR_14)
  goto err_modify;

 if (!FUNC_6(VAR_10)) {
  VAR_14 = FUNC_8(VAR_10, VAR_8, VAR_12);
  if (VAR_14)
   goto err_modify;
 }

 FUNC_18(&VAR_11->lock);
 FUNC_16(VAR_6,
      &VAR_11->cm.stale_task, VAR_3);


 VAR_12->jiffies = VAR_7;
 if (VAR_12->state == VAR_4)
  FUNC_14(&VAR_12->list, &VAR_11->cm.passive_ids);
 FUNC_19(&VAR_11->lock);

 VAR_14 = FUNC_9(VAR_10, VAR_8, VAR_12->qp, &VAR_9->param.req_rcvd, VAR_13);
 if (VAR_14) {
  FUNC_11(VAR_11, "failed to send REP: %d\n", VAR_14);
  if (FUNC_4(VAR_12->qp, &VAR_5, VAR_2))
   FUNC_11(VAR_11, "unable to move qp to error state\n");
 }
 return 0;

err_modify:
 FUNC_3(VAR_12->qp);
err_qp:
 FUNC_12(VAR_12);
 return VAR_14;
}
