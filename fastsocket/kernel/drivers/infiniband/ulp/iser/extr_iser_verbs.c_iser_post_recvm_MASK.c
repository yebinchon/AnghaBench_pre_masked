
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_rx_desc {int rx_sg; } ;
struct iser_conn {unsigned int rx_desc_head; int post_recv_buf_count; struct ib_recv_wr* rx_wr; int qp; struct iser_rx_desc* rx_descs; } ;
struct ib_recv_wr {unsigned long wr_id; int num_sge; struct ib_recv_wr* next; int * sg_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ib_recv_wr*,struct ib_recv_wr**) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(struct iser_conn *VAR_1, int VAR_2)
{
 struct ib_recv_wr *VAR_3, *VAR_4;
 int VAR_5, VAR_6;
 unsigned int VAR_7 = VAR_1->rx_desc_head;
 struct iser_rx_desc *VAR_8;

 for (VAR_3 = VAR_1->rx_wr, VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_3++) {
  VAR_8 = &VAR_1->rx_descs[VAR_7];
  VAR_3->wr_id = (unsigned long)VAR_8;
  VAR_3->sg_list = &VAR_8->rx_sg;
  VAR_3->num_sge = 1;
  VAR_3->next = VAR_3 + 1;
  VAR_7 = (VAR_7 + 1) & (VAR_0 - 1);
 }

 VAR_3--;
 VAR_3->next = ((void*)0);

 VAR_1->post_recv_buf_count += VAR_2;
 VAR_6 = FUNC_0(VAR_1->qp, VAR_1->rx_wr, &VAR_4);
 if (VAR_6) {
  FUNC_1("ib_post_recv failed ret=%d\n", VAR_6);
  VAR_1->post_recv_buf_count -= VAR_2;
 } else
  VAR_1->rx_desc_head = VAR_7;
 return VAR_6;
}
