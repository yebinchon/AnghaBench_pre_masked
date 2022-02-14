
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_5__ {struct sk_buff** arr; } ;
struct ehea_port_res {int sq_restart_flag; scalar_t__ swqe_refill_th; TYPE_2__* port; int swqe_avail; TYPE_1__ sq_skba; struct ehea_cq* send_cq; } ;
struct ehea_cqe {scalar_t__ wr_id; int status; } ;
struct ehea_cq {int dummy; } ;
struct TYPE_6__ {int swqe_avail_wq; struct ehea_port_res* port_res; int netdev; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct netdev_queue*,int ) ;
 int FUNC_2 (struct netdev_queue*) ;
 int FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct ehea_cqe*,int,char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct ehea_cq*) ;
 struct ehea_cqe* FUNC_9 (struct ehea_cq*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct ehea_cq*,int) ;
 scalar_t__ FUNC_12 (int) ;
 struct netdev_queue* FUNC_13 (int ,int) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (struct netdev_queue*) ;
 int FUNC_17 (struct netdev_queue*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static struct ehea_cqe *FUNC_22(struct ehea_port_res *VAR_7, int VAR_8)
{
 struct sk_buff *VAR_9;
 struct ehea_cq *VAR_10 = VAR_7->send_cq;
 struct ehea_cqe *VAR_11;
 int VAR_12 = VAR_8;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15;
 struct netdev_queue *VAR_16 = FUNC_13(VAR_7->port->netdev,
      VAR_7 - &VAR_7->port->port_res[0]);

 VAR_11 = FUNC_9(VAR_10);
 while (VAR_11 && (VAR_12 > 0)) {
  FUNC_8(VAR_10);

  VAR_13++;
  FUNC_18();

  if (VAR_11->wr_id == VAR_6) {
   VAR_7->sq_restart_flag = 1;
   VAR_14++;
   break;
  }

  if (VAR_11->status & VAR_0) {
   FUNC_7("Bad send completion status=0x%04X",
       VAR_11->status);

   if (FUNC_15(VAR_7->port))
    FUNC_6(VAR_11, sizeof(*VAR_11), "Send CQE");

   if (VAR_11->status & VAR_1) {
    FUNC_7("Resetting port");
    FUNC_10(VAR_7->port);
    break;
   }
  }

  if (FUNC_14(VAR_7->port))
   FUNC_6(VAR_11, sizeof(*VAR_11), "CQE");

  if (FUNC_12(FUNC_0(VAR_5, VAR_11->wr_id)
      == VAR_2)) {

   VAR_15 = FUNC_0(VAR_3, VAR_11->wr_id);
   VAR_9 = VAR_7->sq_skba.arr[VAR_15];
   FUNC_5(VAR_9);
   VAR_7->sq_skba.arr[VAR_15] = ((void*)0);
  }

  VAR_14 += FUNC_0(VAR_4, VAR_11->wr_id);
  VAR_12--;

  VAR_11 = FUNC_9(VAR_10);
 };

 FUNC_11(VAR_10, VAR_13);
 FUNC_3(VAR_14, &VAR_7->swqe_avail);

 if (FUNC_20(FUNC_16(VAR_16) &&
       (FUNC_4(&VAR_7->swqe_avail) >= VAR_7->swqe_refill_th))) {
  FUNC_1(VAR_16, FUNC_19());
  if (FUNC_16(VAR_16) &&
      (FUNC_4(&VAR_7->swqe_avail) >= VAR_7->swqe_refill_th))
   FUNC_17(VAR_16);
  FUNC_2(VAR_16);
 }

 FUNC_21(&VAR_7->port->swqe_avail_wq);

 return VAR_11;
}
