
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union c2wr {int dummy; } c2wr ;
struct TYPE_2__ {unsigned long context; } ;
struct c2wr_qp_modify_req {void* next_qp_state; void* rq_depth; void* sq_depth; void* ird; void* ord; int qp_handle; int rnic_handle; TYPE_1__ hdr; } ;
struct c2wr_qp_modify_rep {int dummy; } ;
struct c2_vq_req {scalar_t__ reply_msg; } ;
struct c2_qp {int adapter_handle; } ;
struct c2_dev {int adapter_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct c2wr_qp_modify_rep*) ;
 int FUNC_1 (struct c2wr_qp_modify_req*,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct c2_dev*,struct c2wr_qp_modify_rep*) ;
 struct c2_vq_req* FUNC_4 (struct c2_dev*) ;
 int FUNC_5 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_6 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_7 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_8 (struct c2_dev*,union c2wr*) ;
 int FUNC_9 (struct c2_dev*,struct c2_vq_req*) ;

int FUNC_10(struct c2_dev *VAR_3, struct c2_qp *VAR_4,
     int VAR_5, int VAR_6)
{
 struct c2wr_qp_modify_req VAR_7;
 struct c2wr_qp_modify_rep *VAR_8;
 struct c2_vq_req *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_3);
 if (!VAR_9)
  return -VAR_2;

 FUNC_1(&VAR_7, VAR_1);
 VAR_7.hdr.context = (unsigned long) VAR_9;
 VAR_7.rnic_handle = VAR_3->adapter_handle;
 VAR_7.qp_handle = VAR_4->adapter_handle;
 VAR_7.ord = FUNC_2(VAR_5);
 VAR_7.ird = FUNC_2(VAR_6);
 VAR_7.sq_depth = FUNC_2(VAR_0);
 VAR_7.rq_depth = FUNC_2(VAR_0);
 VAR_7.next_qp_state = FUNC_2(VAR_0);


 FUNC_6(VAR_3, VAR_9);

 VAR_10 = FUNC_8(VAR_3, (union c2wr *) & VAR_7);
 if (VAR_10) {
  FUNC_7(VAR_3, VAR_9);
  goto bail0;
 }

 VAR_10 = FUNC_9(VAR_3, VAR_9);
 if (VAR_10)
  goto bail0;

 VAR_8 = (struct c2wr_qp_modify_rep *) (unsigned long)
  VAR_9->reply_msg;
 if (!VAR_8) {
  VAR_10 = -VAR_2;
  goto bail0;
 }

 VAR_10 = FUNC_0(VAR_8);
 FUNC_3(VAR_3, VAR_8);
      bail0:
 FUNC_5(VAR_3, VAR_9);
 return VAR_10;
}
