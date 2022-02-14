
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union c2wr {int dummy; } c2wr ;
struct TYPE_4__ {unsigned long context; } ;
struct c2wr_qp_destroy_req {int qp_handle; int rnic_handle; TYPE_1__ hdr; } ;
struct c2wr_qp_destroy_rep {int dummy; } ;
struct c2_vq_req {scalar_t__ reply_msg; int event; TYPE_2__* cm_id; struct c2_qp* qp; } ;
struct c2_qp {scalar_t__ state; int lock; TYPE_2__* cm_id; int adapter_handle; } ;
struct c2_dev {int adapter_handle; } ;
struct TYPE_5__ {int (* rem_ref ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct c2wr_qp_destroy_req*,int ) ;
 int FUNC_1 (char*,struct c2_qp*,TYPE_2__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct c2_dev*,struct c2wr_qp_destroy_rep*) ;
 struct c2_vq_req* FUNC_6 (struct c2_dev*) ;
 int FUNC_7 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_8 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_9 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_10 (struct c2_dev*,union c2wr*) ;
 int FUNC_11 (struct c2_dev*,struct c2_vq_req*) ;

__attribute__((used)) static int FUNC_12(struct c2_dev *VAR_4, struct c2_qp *VAR_5)
{
 struct c2_vq_req *VAR_6;
 struct c2wr_qp_destroy_req VAR_7;
 struct c2wr_qp_destroy_rep *VAR_8;
 unsigned long VAR_9;
 int VAR_10;




 VAR_6 = FUNC_6(VAR_4);
 if (!VAR_6) {
  return -VAR_1;
 }




 FUNC_0(&VAR_7, VAR_0);
 VAR_7.hdr.context = (unsigned long) VAR_6;
 VAR_7.rnic_handle = VAR_4->adapter_handle;
 VAR_7.qp_handle = VAR_5->adapter_handle;




 FUNC_8(VAR_4, VAR_6);

 FUNC_2(&VAR_5->lock, VAR_9);
 if (VAR_5->cm_id && VAR_5->state == VAR_2) {
  FUNC_1("destroy_qp: generating CLOSE event for QP-->ERR, "
   "qp=%p, cm_id=%p\n",VAR_5,VAR_5->cm_id);

  VAR_6->qp = VAR_5;
  VAR_6->cm_id = VAR_5->cm_id;
  VAR_6->event = VAR_3;
 }
 FUNC_3(&VAR_5->lock, VAR_9);




 VAR_10 = FUNC_10(VAR_4, (union c2wr *) & VAR_7);
 if (VAR_10) {
  FUNC_9(VAR_4, VAR_6);
  goto bail0;
 }




 VAR_10 = FUNC_11(VAR_4, VAR_6);
 if (VAR_10) {
  goto bail0;
 }




 VAR_8 = (struct c2wr_qp_destroy_rep *) (unsigned long) (VAR_6->reply_msg);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto bail0;
 }

 FUNC_2(&VAR_5->lock, VAR_9);
 if (VAR_5->cm_id) {
  VAR_5->cm_id->rem_ref(VAR_5->cm_id);
  VAR_5->cm_id = ((void*)0);
 }
 FUNC_3(&VAR_5->lock, VAR_9);

 FUNC_5(VAR_4, VAR_8);
      bail0:
 FUNC_7(VAR_4, VAR_6);
 return VAR_10;
}
