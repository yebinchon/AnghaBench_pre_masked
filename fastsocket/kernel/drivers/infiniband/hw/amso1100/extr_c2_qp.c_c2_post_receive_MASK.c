
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int context; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
struct TYPE_8__ {TYPE_2__ user_hdr; } ;
struct TYPE_9__ {int data; TYPE_3__ rq_hdr; } ;
union c2wr {TYPE_4__ rqwr; } ;
typedef int u8 ;
typedef int u32 ;
struct ib_recv_wr {scalar_t__ num_sge; struct ib_recv_wr* next; int sg_list; int wr_id; } ;
struct ib_qp {int device; } ;
struct TYPE_10__ {int hint_count; int index; int msg_size; } ;
struct c2_qp {scalar_t__ state; scalar_t__ recv_sgl_depth; int lock; TYPE_5__ rq_mq; } ;
struct c2_dev {int dummy; } ;
struct c2_data_addr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct c2_dev*,int ,int ) ;
 int FUNC_2 (union c2wr*,int ) ;
 int FUNC_3 (union c2wr*,int ) ;
 int FUNC_4 (union c2wr*,int ) ;
 int FUNC_5 (struct c2_data_addr*,int ,int,int *,int *) ;
 int FUNC_6 (TYPE_5__*,union c2wr*,struct c2_qp*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct c2_dev* FUNC_9 (int ) ;
 struct c2_qp* FUNC_10 (struct ib_qp*) ;

int FUNC_11(struct ib_qp *VAR_3, struct ib_recv_wr *VAR_4,
      struct ib_recv_wr **VAR_5)
{
 struct c2_dev *VAR_6 = FUNC_9(VAR_3->device);
 struct c2_qp *VAR_7 = FUNC_10(VAR_3);
 union c2wr VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;

 if (VAR_7->state > VAR_2) {
  VAR_10 = -VAR_1;
  goto out;
 }




 while (VAR_4) {
  u32 VAR_11;
  u8 VAR_12;

  if (VAR_4->num_sge > VAR_7->recv_sgl_depth) {
   VAR_10 = -VAR_1;
   break;
  }




  VAR_8.rqwr.rq_hdr.user_hdr.hdr.context = VAR_4->wr_id;
  FUNC_3(&VAR_8, VAR_0);
  FUNC_2(&VAR_8, 0);


  FUNC_0(VAR_4->num_sge >= 256);
  VAR_10 = FUNC_5((struct c2_data_addr *) & (VAR_8.rqwr.data),
          VAR_4->sg_list,
          VAR_4->num_sge, &VAR_11, &VAR_12);
  FUNC_4(&VAR_8, VAR_12);






  if (VAR_10) {
   break;
  }

  FUNC_7(&VAR_7->lock, VAR_9);
  VAR_10 = FUNC_6(&VAR_7->rq_mq, &VAR_8, VAR_7, VAR_7->rq_mq.msg_size);
  if (VAR_10) {
   FUNC_8(&VAR_7->lock, VAR_9);
   break;
  }




  FUNC_1(VAR_6, VAR_7->rq_mq.index, VAR_7->rq_mq.hint_count);
  FUNC_8(&VAR_7->lock, VAR_9);

  VAR_4 = VAR_4->next;
 }

out:
 if (VAR_10)
  *VAR_5 = VAR_4;
 return VAR_10;
}
