
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_tx_desc {int num_sge; int tx_sg; int dma_addr; } ;
struct iser_conn {int post_send_buf_count; int qp; TYPE_1__* device; } ;
struct ib_send_wr {unsigned long wr_id; int send_flags; int opcode; int num_sge; int sg_list; int * next; } ;
struct TYPE_2__ {int ib_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,struct ib_send_wr*,struct ib_send_wr**) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct iser_conn *VAR_4, struct iser_tx_desc *VAR_5)
{
 int VAR_6;
 struct ib_send_wr VAR_7, *VAR_8;

 FUNC_2(VAR_4->device->ib_device,
  VAR_5->dma_addr, VAR_3, VAR_0);

 VAR_7.next = ((void*)0);
 VAR_7.wr_id = (unsigned long)VAR_5;
 VAR_7.sg_list = VAR_5->tx_sg;
 VAR_7.num_sge = VAR_5->num_sge;
 VAR_7.opcode = VAR_2;
 VAR_7.send_flags = VAR_1;

 FUNC_1(&VAR_4->post_send_buf_count);

 VAR_6 = FUNC_3(VAR_4->qp, &VAR_7, &VAR_8);
 if (VAR_6) {
  FUNC_4("ib_post_send failed, ret:%d\n", VAR_6);
  FUNC_0(&VAR_4->post_send_buf_count);
 }
 return VAR_6;
}
