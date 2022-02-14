
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_24__ {void* length; void* remote_to; void* remote_stag; void* local_to; void* local_stag; } ;
struct TYPE_21__ {void* sge_len; int data; void* remote_to; void* remote_stag; } ;
struct TYPE_20__ {void* sge_len; int data; void* remote_stag; } ;
struct TYPE_16__ {int context; } ;
struct TYPE_17__ {TYPE_1__ hdr; } ;
struct TYPE_18__ {TYPE_2__ user_hdr; } ;
struct TYPE_13__ {TYPE_9__ rdma_read; TYPE_6__ rdma_write; TYPE_5__ send; TYPE_3__ sq_hdr; } ;
union c2wr {TYPE_10__ sqwr; } ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_22__ {int rkey; int remote_addr; } ;
struct TYPE_23__ {TYPE_7__ rdma; } ;
struct TYPE_19__ {int invalidate_rkey; } ;
struct ib_send_wr {int send_flags; int opcode; int num_sge; struct ib_send_wr* next; TYPE_12__* sg_list; TYPE_8__ wr; TYPE_4__ ex; int wr_id; } ;
struct ib_qp {int device; } ;
struct c2wr_send_req {int dummy; } ;
struct c2wr_rdma_write_req {int dummy; } ;
struct c2wr_rdma_read_req {int dummy; } ;
struct TYPE_14__ {int hint_count; int index; } ;
struct c2_qp {scalar_t__ state; int send_sgl_depth; int rdma_write_sgl_depth; int lock; TYPE_11__ sq_mq; } ;
struct c2_dev {int dummy; } ;
struct c2_data_addr {int dummy; } ;
struct TYPE_15__ {int lkey; int length; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct c2_dev*,int ,int ) ;
 int FUNC_1 (union c2wr*,int) ;
 int FUNC_2 (union c2wr*,int ) ;
 int FUNC_3 (union c2wr*,int ) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct c2_data_addr*,TYPE_12__*,int,int*,int *) ;
 int FUNC_7 (TYPE_11__*,union c2wr*,struct c2_qp*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct c2_dev* FUNC_10 (int ) ;
 struct c2_qp* FUNC_11 (struct ib_qp*) ;

int FUNC_12(struct ib_qp *VAR_13, struct ib_send_wr *VAR_14,
   struct ib_send_wr **VAR_15)
{
 struct c2_dev *VAR_16 = FUNC_10(VAR_13->device);
 struct c2_qp *VAR_17 = FUNC_11(VAR_13);
 union c2wr VAR_18;
 unsigned long VAR_19;
 int VAR_20 = 0;

 u32 VAR_21;
 u32 VAR_22;
 u8 VAR_23;
 u32 VAR_24;

 if (VAR_17->state > VAR_7) {
  VAR_20 = -VAR_6;
  goto out;
 }

 while (VAR_14) {

  VAR_21 = 0;
  VAR_18.sqwr.sq_hdr.user_hdr.hdr.context = VAR_14->wr_id;
  if (VAR_14->send_flags & VAR_9) {
   VAR_21 |= VAR_12;
  }

  switch (VAR_14->opcode) {
  case 129:
  case 128:
   if (VAR_14->opcode == 129) {
    if (VAR_14->send_flags & VAR_10)
     FUNC_2(&VAR_18, VAR_4);
    else
     FUNC_2(&VAR_18, VAR_2);
    VAR_18.sqwr.send.remote_stag = 0;
   } else {
    if (VAR_14->send_flags & VAR_10)
     FUNC_2(&VAR_18, VAR_5);
    else
     FUNC_2(&VAR_18, VAR_3);
    VAR_18.sqwr.send.remote_stag =
     FUNC_4(VAR_14->ex.invalidate_rkey);
   }

   VAR_24 = sizeof(struct c2wr_send_req) +
    sizeof(struct c2_data_addr) * VAR_14->num_sge;
   if (VAR_14->num_sge > VAR_17->send_sgl_depth) {
    VAR_20 = -VAR_6;
    break;
   }
   if (VAR_14->send_flags & VAR_8) {
    VAR_21 |= VAR_11;
   }
   VAR_20 = FUNC_6((struct c2_data_addr *) & (VAR_18.sqwr.send.data),
           VAR_14->sg_list,
           VAR_14->num_sge,
           &VAR_22, &VAR_23);
   VAR_18.sqwr.send.sge_len = FUNC_4(VAR_22);
   FUNC_3(&VAR_18, VAR_23);
   break;
  case 130:
   FUNC_2(&VAR_18, VAR_1);
   VAR_24 = sizeof(struct c2wr_rdma_write_req) +
       (sizeof(struct c2_data_addr) * VAR_14->num_sge);
   if (VAR_14->num_sge > VAR_17->rdma_write_sgl_depth) {
    VAR_20 = -VAR_6;
    break;
   }
   if (VAR_14->send_flags & VAR_8) {
    VAR_21 |= VAR_11;
   }
   VAR_18.sqwr.rdma_write.remote_stag =
       FUNC_4(VAR_14->wr.rdma.rkey);
   VAR_18.sqwr.rdma_write.remote_to =
       FUNC_5(VAR_14->wr.rdma.remote_addr);
   VAR_20 = FUNC_6((struct c2_data_addr *)
           & (VAR_18.sqwr.rdma_write.data),
           VAR_14->sg_list,
           VAR_14->num_sge,
           &VAR_22, &VAR_23);
   VAR_18.sqwr.rdma_write.sge_len = FUNC_4(VAR_22);
   FUNC_3(&VAR_18, VAR_23);
   break;
  case 131:
   FUNC_2(&VAR_18, VAR_0);
   VAR_24 = sizeof(struct c2wr_rdma_read_req);


   if (VAR_14->num_sge > 1) {
    VAR_20 = -VAR_6;
    break;
   }




   VAR_18.sqwr.rdma_read.local_stag =
       FUNC_4(VAR_14->sg_list->lkey);
   VAR_18.sqwr.rdma_read.local_to =
       FUNC_5(VAR_14->sg_list->addr);
   VAR_18.sqwr.rdma_read.remote_stag =
       FUNC_4(VAR_14->wr.rdma.rkey);
   VAR_18.sqwr.rdma_read.remote_to =
       FUNC_5(VAR_14->wr.rdma.remote_addr);
   VAR_18.sqwr.rdma_read.length =
       FUNC_4(VAR_14->sg_list->length);
   break;
  default:

   VAR_24 = 0;
   VAR_20 = -VAR_6;
   break;
  }






  if (VAR_20) {
   break;
  }




  FUNC_1(&VAR_18, VAR_21);




  FUNC_8(&VAR_17->lock, VAR_19);
  VAR_20 = FUNC_7(&VAR_17->sq_mq, &VAR_18, VAR_17, VAR_24);
  if (VAR_20) {
   FUNC_9(&VAR_17->lock, VAR_19);
   break;
  }




  FUNC_0(VAR_16, VAR_17->sq_mq.index, VAR_17->sq_mq.hint_count);
  FUNC_9(&VAR_17->lock, VAR_19);

  VAR_14 = VAR_14->next;
 }

out:
 if (VAR_20)
  *VAR_15 = VAR_14;
 return VAR_20;
}
