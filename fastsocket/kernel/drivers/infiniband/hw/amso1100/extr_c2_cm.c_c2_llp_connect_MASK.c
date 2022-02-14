
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union c2wr {int dummy; } c2wr ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_8__ {int sin_port; TYPE_3__ sin_addr; } ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;struct c2_qp* provider_data; TYPE_4__ remote_addr; int (* add_ref ) (struct iw_cm_id*) ;int device; } ;
struct iw_cm_conn_param {int private_data_len; int private_data; int ird; int ord; int qpn; } ;
struct ib_qp {int dummy; } ;
struct TYPE_6__ {scalar_t__ context; } ;
struct c2wr_qp_connect_req {scalar_t__ private_data_length; int * private_data; int remote_port; int remote_addr; int qp_handle; int rnic_handle; TYPE_2__ hdr; } ;
struct c2_vq_req {int dummy; } ;
struct c2_qp {struct iw_cm_id* cm_id; int adapter_handle; } ;
struct TYPE_5__ {int msg_size; } ;
struct c2_dev {int adapter_handle; TYPE_1__ req_vq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ib_qp* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct c2_dev*,struct c2_qp*,int ,int ) ;
 int FUNC_2 (struct c2wr_qp_connect_req*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct c2wr_qp_connect_req*) ;
 struct c2wr_qp_connect_req* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct iw_cm_id*) ;
 int FUNC_8 (struct iw_cm_id*) ;
 struct c2_dev* FUNC_9 (int ) ;
 struct c2_qp* FUNC_10 (struct ib_qp*) ;
 struct c2_vq_req* FUNC_11 (struct c2_dev*) ;
 int FUNC_12 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_13 (struct c2_dev*,union c2wr*) ;

int FUNC_14(struct iw_cm_id *VAR_5, struct iw_cm_conn_param *VAR_6)
{
 struct c2_dev *VAR_7 = FUNC_9(VAR_5->device);
 struct ib_qp *VAR_8;
 struct c2_qp *VAR_9;
 struct c2wr_qp_connect_req *VAR_10;
 struct c2_vq_req *VAR_11;
 int VAR_12;

 VAR_8 = FUNC_0(VAR_5->device, VAR_6->qpn);
 if (!VAR_8)
  return -VAR_2;
 VAR_9 = FUNC_10(VAR_8);


 VAR_5->provider_data = VAR_9;
 VAR_5->add_ref(VAR_5);
 VAR_9->cm_id = VAR_5;




 if (VAR_6->private_data_len > VAR_0) {
  VAR_12 = -VAR_2;
  goto bail0;
 }



 VAR_12 = FUNC_1(VAR_7, VAR_9, VAR_6->ord, VAR_6->ird);
 if (VAR_12)
  goto bail0;




 VAR_10 = FUNC_5(VAR_7->req_vq.msg_size, VAR_4);
 if (!VAR_10) {
  VAR_12 = -VAR_3;
  goto bail0;
 }

 VAR_11 = FUNC_11(VAR_7);
 if (!VAR_11) {
  VAR_12 = -VAR_3;
  goto bail1;
 }

 FUNC_2(VAR_10, VAR_1);
 VAR_10->hdr.context = 0;
 VAR_10->rnic_handle = VAR_7->adapter_handle;
 VAR_10->qp_handle = VAR_9->adapter_handle;

 VAR_10->remote_addr = VAR_5->remote_addr.sin_addr.s_addr;
 VAR_10->remote_port = VAR_5->remote_addr.sin_port;





 if (VAR_6->private_data) {
  VAR_10->private_data_length =
   FUNC_3(VAR_6->private_data_len);
  FUNC_6(&VAR_10->private_data[0], VAR_6->private_data,
         VAR_6->private_data_len);
 } else
  VAR_10->private_data_length = 0;





 VAR_12 = FUNC_13(VAR_7, (union c2wr *) VAR_10);
 FUNC_12(VAR_7, VAR_11);

 bail1:
 FUNC_4(VAR_10);
 bail0:
 if (VAR_12) {




  VAR_5->provider_data = ((void*)0);
  VAR_9->cm_id = ((void*)0);
  VAR_5->rem_ref(VAR_5);
 }
 return VAR_12;
}
