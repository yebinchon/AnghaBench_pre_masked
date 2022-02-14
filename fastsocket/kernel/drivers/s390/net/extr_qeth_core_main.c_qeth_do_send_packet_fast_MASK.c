
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct qeth_qdio_out_q {int next_buf_to_fill; int state; struct qeth_qdio_out_buffer** bufs; } ;
struct qeth_qdio_out_buffer {int state; } ;
struct qeth_hdr {int dummy; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct qeth_qdio_out_q*,struct qeth_qdio_out_buffer*,struct sk_buff*,struct qeth_hdr*,int,int) ;
 int FUNC_4 (struct qeth_qdio_out_q*,int,int) ;

int FUNC_5(struct qeth_card *VAR_5,
  struct qeth_qdio_out_q *VAR_6, struct sk_buff *VAR_7,
  struct qeth_hdr *VAR_8, int VAR_9,
  int VAR_10, int VAR_11)
{
 struct qeth_qdio_out_buffer *VAR_12;
 int VAR_13;


 while (FUNC_0(&VAR_6->state, VAR_3,
         VAR_2) != VAR_3);

 VAR_13 = VAR_6->next_buf_to_fill;
 VAR_12 = VAR_6->bufs[VAR_6->next_buf_to_fill];




 if (FUNC_1(&VAR_12->state) != VAR_4)
  goto out;
 VAR_6->next_buf_to_fill = (VAR_6->next_buf_to_fill + 1) %
       VAR_1;
 FUNC_2(&VAR_6->state, VAR_3);
 FUNC_3(VAR_6, VAR_12, VAR_7, VAR_8, VAR_10, VAR_11);
 FUNC_4(VAR_6, VAR_13, 1);
 return 0;
out:
 FUNC_2(&VAR_6->state, VAR_3);
 return -VAR_0;
}
