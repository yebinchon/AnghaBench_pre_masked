
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union c2wr {int dummy; } c2wr ;
typedef scalar_t__ u32 ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;struct c2_qp* provider_data; int (* add_ref ) (struct iw_cm_id*) ;int device; } ;
struct iw_cm_conn_param {int private_data_len; int private_data; int ird; int ord; int qpn; } ;
struct ib_qp {int dummy; } ;
struct TYPE_4__ {unsigned long context; } ;
struct c2wr_cr_accept_req {scalar_t__ private_data_length; int * private_data; int qp_handle; scalar_t__ ep_handle; int rnic_handle; TYPE_2__ hdr; } ;
struct c2wr_cr_accept_rep {int dummy; } ;
struct c2_vq_req {scalar_t__ reply_msg; int event; struct iw_cm_id* cm_id; struct c2_qp* qp; } ;
struct c2_qp {struct iw_cm_id* cm_id; int adapter_handle; } ;
struct TYPE_3__ {int msg_size; } ;
struct c2_dev {int adapter_handle; TYPE_1__ req_vq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct c2wr_cr_accept_rep*) ;
 struct ib_qp* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct c2_dev*,struct c2_qp*,int ,int ) ;
 int FUNC_3 (struct c2_qp*,int ) ;
 int FUNC_4 (struct c2wr_cr_accept_req*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct c2wr_cr_accept_req*) ;
 struct c2wr_cr_accept_req* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (struct iw_cm_id*) ;
 int FUNC_10 (struct iw_cm_id*) ;
 struct c2_dev* FUNC_11 (int ) ;
 struct c2_qp* FUNC_12 (struct ib_qp*) ;
 int FUNC_13 (struct c2_dev*,struct c2wr_cr_accept_rep*) ;
 struct c2_vq_req* FUNC_14 (struct c2_dev*) ;
 int FUNC_15 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_16 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_17 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_18 (struct c2_dev*,union c2wr*) ;
 int FUNC_19 (struct c2_dev*,struct c2_vq_req*) ;

int FUNC_20(struct iw_cm_id *VAR_7, struct iw_cm_conn_param *VAR_8)
{
 struct c2_dev *VAR_9 = FUNC_11(VAR_7->device);
 struct c2_qp *VAR_10;
 struct ib_qp *VAR_11;
 struct c2wr_cr_accept_req *VAR_12;
 struct c2_vq_req *VAR_13;
 struct c2wr_cr_accept_rep *VAR_14;
 int VAR_15;

 VAR_11 = FUNC_1(VAR_7->device, VAR_8->qpn);
 if (!VAR_11)
  return -VAR_3;
 VAR_10 = FUNC_12(VAR_11);


 VAR_15 = FUNC_2(VAR_9, VAR_10, VAR_8->ord, VAR_8->ird);
 if (VAR_15)
  goto bail0;


 VAR_13 = FUNC_14(VAR_9);
 if (!VAR_13) {
  VAR_15 = -VAR_4;
  goto bail0;
 }
 VAR_13->qp = VAR_10;
 VAR_13->cm_id = VAR_7;
 VAR_13->event = VAR_6;

 VAR_12 = FUNC_7(VAR_9->req_vq.msg_size, VAR_5);
 if (!VAR_12) {
  VAR_15 = -VAR_4;
  goto bail1;
 }


 FUNC_4(VAR_12, VAR_2);
 VAR_12->hdr.context = (unsigned long) VAR_13;
 VAR_12->rnic_handle = VAR_9->adapter_handle;
 VAR_12->ep_handle = (u32) (unsigned long) VAR_7->provider_data;
 VAR_12->qp_handle = VAR_10->adapter_handle;


 VAR_7->provider_data = VAR_10;
 VAR_7->add_ref(VAR_7);
 VAR_10->cm_id = VAR_7;

 VAR_7->provider_data = VAR_10;


 if (VAR_8->private_data_len > VAR_0) {
  VAR_15 = -VAR_3;
  goto bail1;
 }

 if (VAR_8->private_data) {
  VAR_12->private_data_length = FUNC_5(VAR_8->private_data_len);
  FUNC_8(&VAR_12->private_data[0],
         VAR_8->private_data, VAR_8->private_data_len);
 } else
  VAR_12->private_data_length = 0;


 FUNC_16(VAR_9, VAR_13);


 VAR_15 = FUNC_18(VAR_9, (union c2wr *) VAR_12);
 if (VAR_15) {
  FUNC_17(VAR_9, VAR_13);
  goto bail1;
 }


 VAR_15 = FUNC_19(VAR_9, VAR_13);
 if (VAR_15)
  goto bail1;


 VAR_14 = (struct c2wr_cr_accept_rep *) (unsigned long) VAR_13->reply_msg;
 if (!VAR_14) {
  VAR_15 = -VAR_4;
  goto bail1;
 }

 VAR_15 = FUNC_0(VAR_14);
 FUNC_13(VAR_9, VAR_14);

 if (!VAR_15)
  FUNC_3(VAR_10, VAR_1);
 bail1:
 FUNC_6(VAR_12);
 FUNC_15(VAR_9, VAR_13);
 bail0:
 if (VAR_15) {




  VAR_7->provider_data = ((void*)0);
  VAR_10->cm_id = ((void*)0);
  VAR_7->rem_ref(VAR_7);
 }
 return VAR_15;
}
