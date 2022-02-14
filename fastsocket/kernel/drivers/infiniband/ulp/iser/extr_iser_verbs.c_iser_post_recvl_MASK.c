
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iser_conn {int post_recv_buf_count; int qp; scalar_t__ login_resp_buf; TYPE_2__* device; int login_resp_dma; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct ib_recv_wr {unsigned long wr_id; int num_sge; int * next; struct ib_sge* sg_list; } ;
struct TYPE_4__ {TYPE_1__* mr; } ;
struct TYPE_3__ {int lkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ib_recv_wr*,struct ib_recv_wr**) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(struct iser_conn *VAR_1)
{
 struct ib_recv_wr VAR_2, *VAR_3;
 struct ib_sge VAR_4;
 int VAR_5;

 VAR_4.addr = VAR_1->login_resp_dma;
 VAR_4.length = VAR_0;
 VAR_4.lkey = VAR_1->device->mr->lkey;

 VAR_2.wr_id = (unsigned long)VAR_1->login_resp_buf;
 VAR_2.sg_list = &VAR_4;
 VAR_2.num_sge = 1;
 VAR_2.next = ((void*)0);

 VAR_1->post_recv_buf_count++;
 VAR_5 = FUNC_0(VAR_1->qp, &VAR_2, &VAR_3);
 if (VAR_5) {
  FUNC_1("ib_post_recv failed ret=%d\n", VAR_5);
  VAR_1->post_recv_buf_count--;
 }
 return VAR_5;
}
