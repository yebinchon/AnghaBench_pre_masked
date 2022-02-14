
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wr ;
typedef union c2wr {int dummy; } c2wr ;
struct TYPE_3__ {unsigned long context; } ;
struct c2wr_cq_destroy_req {int cq_handle; int rnic_handle; TYPE_1__ hdr; } ;
struct c2wr_cq_destroy_rep {int dummy; } ;
struct c2_vq_req {scalar_t__ reply_msg; } ;
struct c2_dev {int adapter_handle; int lock; int ** qptr_array; } ;
struct TYPE_4__ {size_t index; } ;
struct c2_cq {TYPE_2__ mq; scalar_t__ is_kernel; int adapter_handle; int refcount; int wait; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct c2_dev*,TYPE_2__*) ;
 int FUNC_3 (struct c2wr_cq_destroy_req*,int ) ;
 int FUNC_4 (struct c2wr_cq_destroy_req*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct c2_dev*,struct c2wr_cq_destroy_rep*) ;
 struct c2_vq_req* FUNC_9 (struct c2_dev*) ;
 int FUNC_10 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_11 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_12 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_13 (struct c2_dev*,union c2wr*) ;
 int FUNC_14 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_15 (int ,int) ;

void FUNC_16(struct c2_dev *VAR_1, struct c2_cq *VAR_2)
{
 int VAR_3;
 struct c2_vq_req *VAR_4;
 struct c2wr_cq_destroy_req VAR_5;
 struct c2wr_cq_destroy_rep *VAR_6;

 FUNC_5();


 FUNC_6(&VAR_1->lock);
 VAR_1->qptr_array[VAR_2->mq.index] = ((void*)0);
 FUNC_0(&VAR_2->refcount);
 FUNC_7(&VAR_1->lock);

 FUNC_15(VAR_2->wait, !FUNC_1(&VAR_2->refcount));

 VAR_4 = FUNC_9(VAR_1);
 if (!VAR_4) {
  goto bail0;
 }

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 FUNC_3(&VAR_5, VAR_0);
 VAR_5.hdr.context = (unsigned long) VAR_4;
 VAR_5.rnic_handle = VAR_1->adapter_handle;
 VAR_5.cq_handle = VAR_2->adapter_handle;

 FUNC_11(VAR_1, VAR_4);

 VAR_3 = FUNC_13(VAR_1, (union c2wr *) & VAR_5);
 if (VAR_3) {
  FUNC_12(VAR_1, VAR_4);
  goto bail1;
 }

 VAR_3 = FUNC_14(VAR_1, VAR_4);
 if (VAR_3)
  goto bail1;

 VAR_6 = (struct c2wr_cq_destroy_rep *) (unsigned long) (VAR_4->reply_msg);
 if (VAR_6)
  FUNC_8(VAR_1, VAR_6);
      bail1:
 FUNC_10(VAR_1, VAR_4);
      bail0:
 if (VAR_2->is_kernel) {
  FUNC_2(VAR_1, &VAR_2->mq);
 }

 return;
}
