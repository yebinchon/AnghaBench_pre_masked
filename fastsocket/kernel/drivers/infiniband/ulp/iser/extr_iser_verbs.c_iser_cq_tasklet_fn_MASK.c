
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_rx_desc {int dummy; } ;
struct iser_device {struct ib_cq** rx_cq; } ;
struct iser_cq_desc {int cq_index; struct iser_device* device; } ;
struct iser_conn {int post_recv_buf_count; } ;
struct ib_wc {scalar_t__ status; scalar_t__ opcode; int vendor_err; scalar_t__ wr_id; scalar_t__ byte_len; TYPE_1__* qp; } ;
struct ib_cq {int dummy; } ;
struct TYPE_2__ {struct iser_conn* qp_context; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ib_cq*,int,struct ib_wc*) ;
 int FUNC_2 (struct ib_cq*,int ) ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ FUNC_4 (struct iser_device*,int) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_6 (int *,struct iser_conn*) ;
 int FUNC_7 (struct iser_rx_desc*,unsigned long,struct iser_conn*) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_4)
{
 struct iser_cq_desc *VAR_5 = (struct iser_cq_desc *)VAR_4;
 struct iser_device *VAR_6 = VAR_5->device;
 int VAR_7 = VAR_5->cq_index;
 struct ib_cq *VAR_8 = VAR_6->rx_cq[VAR_7];
  struct ib_wc VAR_9;
  struct iser_rx_desc *VAR_10;
  unsigned long VAR_11;
 struct iser_conn *VAR_12;
 int VAR_13, VAR_14;
 VAR_13 = VAR_14 = 0;

 while (FUNC_1(VAR_8, 1, &VAR_9) == 1) {
  VAR_10 = (struct iser_rx_desc *) (unsigned long) VAR_9.wr_id;
  FUNC_0(VAR_10 == ((void*)0));
  VAR_12 = VAR_9.qp->qp_context;
  if (VAR_9.status == VAR_2) {
   if (VAR_9.opcode == VAR_1) {
    VAR_11 = (unsigned long)VAR_9.byte_len;
    FUNC_7(VAR_10, VAR_11, VAR_12);
   } else
    FUNC_5("expected opcode %d got %d\n",
     VAR_1, VAR_9.opcode);
  } else {
   if (VAR_9.status != VAR_3)
    FUNC_5("rx id %llx status %d vend_err %x\n",
     VAR_9.wr_id, VAR_9.status, VAR_9.vendor_err);
   VAR_12->post_recv_buf_count--;
   FUNC_6(((void*)0), VAR_12);
  }
  VAR_14++;
  if (!(VAR_14 & 63))
   VAR_13 += FUNC_4(VAR_6, VAR_7);
 }


 FUNC_2(VAR_8, VAR_0);

 VAR_13 += FUNC_4(VAR_6, VAR_7);
 FUNC_3("got %d rx %d tx completions\n", VAR_14, VAR_13);
}
