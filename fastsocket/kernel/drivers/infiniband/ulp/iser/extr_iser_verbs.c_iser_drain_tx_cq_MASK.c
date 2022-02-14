
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_tx_desc {int dummy; } ;
struct iser_device {struct ib_cq** tx_cq; } ;
struct iser_conn {int post_send_buf_count; } ;
struct ib_wc {scalar_t__ status; scalar_t__ opcode; int vendor_err; scalar_t__ wr_id; TYPE_1__* qp; } ;
struct ib_cq {int dummy; } ;
struct TYPE_2__ {struct iser_conn* qp_context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_cq*,int,struct ib_wc*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_3 (struct iser_tx_desc*,struct iser_conn*) ;
 int FUNC_4 (struct iser_tx_desc*,struct iser_conn*) ;

__attribute__((used)) static int FUNC_5(struct iser_device *VAR_2, int VAR_3)
{
 struct ib_cq *VAR_4 = VAR_2->tx_cq[VAR_3];
 struct ib_wc VAR_5;
 struct iser_tx_desc *VAR_6;
 struct iser_conn *VAR_7;
 int VAR_8 = 0;

 while (FUNC_1(VAR_4, 1, &VAR_5) == 1) {
  VAR_6 = (struct iser_tx_desc *) (unsigned long) VAR_5.wr_id;
  VAR_7 = VAR_5.qp->qp_context;
  if (VAR_5.status == VAR_1) {
   if (VAR_5.opcode == VAR_0)
    FUNC_4(VAR_6, VAR_7);
   else
    FUNC_2("expected opcode %d got %d\n",
     VAR_0, VAR_5.opcode);
  } else {
   FUNC_2("tx id %llx status %d vend_err %x\n",
    VAR_5.wr_id, VAR_5.status, VAR_5.vendor_err);
   FUNC_0(&VAR_7->post_send_buf_count);
   FUNC_3(VAR_6, VAR_7);
  }
  VAR_8++;
 }
 return VAR_8;
}
