
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {int lock; int conn_list; int refcount; int post_send_buf_count; scalar_t__ post_recv_buf_count; int wait; int state; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iser_conn *VAR_1)
{
 VAR_1->state = VAR_0;
 FUNC_2(&VAR_1->wait);
 VAR_1->post_recv_buf_count = 0;
 FUNC_1(&VAR_1->post_send_buf_count, 0);
 FUNC_1(&VAR_1->refcount, 1);
 FUNC_0(&VAR_1->conn_list);
 FUNC_3(&VAR_1->lock);
}
