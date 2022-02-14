
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iser_tx_desc {int num_sge; struct ib_sge* tx_sg; int type; } ;
struct iser_device {TYPE_1__* mr; int ib_device; } ;
struct iser_conn {int login_req_dma; int login_req_buf; struct iser_device* device; } ;
struct iscsi_task {TYPE_2__* hdr; int data_count; int data; struct iscsi_iser_task* dd_data; } ;
struct iscsi_iser_task {struct iser_tx_desc desc; } ;
struct iscsi_iser_conn {struct iser_conn* ib_conn; } ;
struct iscsi_conn {struct iscsi_task* login_task; struct iscsi_iser_conn* dd_data; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct TYPE_4__ {int dlength; } ;
struct TYPE_3__ {int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct iser_conn*,struct iser_tx_desc*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct iser_conn*) ;
 int FUNC_5 (struct iscsi_conn*,TYPE_2__*) ;
 int FUNC_6 (struct iser_conn*,struct iser_tx_desc*) ;
 int FUNC_7 (int ,int ,int ) ;
 unsigned long FUNC_8 (int ) ;

int FUNC_9(struct iscsi_conn *VAR_2,
        struct iscsi_task *VAR_3)
{
 struct iscsi_iser_conn *VAR_4 = VAR_2->dd_data;
 struct iscsi_iser_task *VAR_5 = VAR_3->dd_data;
 struct iser_tx_desc *VAR_6 = &VAR_5->desc;
 unsigned long VAR_7;
 int VAR_8 = 0;
 struct iser_device *VAR_9;
 struct iser_conn *VAR_10 = VAR_4->ib_conn;


 VAR_6->type = VAR_1;
 FUNC_2(VAR_4->ib_conn, VAR_6);

 VAR_9 = VAR_4->ib_conn->device;

 VAR_7 = FUNC_8(VAR_3->hdr->dlength);

 if (VAR_7 > 0) {
  struct ib_sge *VAR_11 = &VAR_6->tx_sg[1];
  if (VAR_3 != VAR_2->login_task) {
   FUNC_3("data present on non login task!!!\n");
   goto send_control_error;
  }

  FUNC_0(VAR_9->ib_device,
   VAR_10->login_req_dma, VAR_3->data_count,
   VAR_0);

  FUNC_7(VAR_4->ib_conn->login_req_buf, VAR_3->data,
       VAR_3->data_count);

  FUNC_1(VAR_9->ib_device,
   VAR_10->login_req_dma, VAR_3->data_count,
   VAR_0);

  VAR_11->addr = VAR_4->ib_conn->login_req_dma;
  VAR_11->length = VAR_3->data_count;
  VAR_11->lkey = VAR_9->mr->lkey;
  VAR_6->num_sge = 2;
 }

 if (VAR_3 == VAR_2->login_task) {
  VAR_8 = FUNC_4(VAR_4->ib_conn);
  if (VAR_8)
   goto send_control_error;
  VAR_8 = FUNC_5(VAR_2, VAR_3->hdr);
  if (VAR_8)
   goto send_control_error;
 }

 VAR_8 = FUNC_6(VAR_4->ib_conn, VAR_6);
 if (!VAR_8)
  return 0;

send_control_error:
 FUNC_3("conn %p failed err %d\n",VAR_2, VAR_8);
 return VAR_8;
}
