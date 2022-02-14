
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {scalar_t__ context; } ;
struct iser_conn {scalar_t__ post_recv_buf_count; int wait; int state; int post_send_buf_count; TYPE_1__* iser_conn; } ;
struct TYPE_2__ {int iscsi_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iser_conn*,int ) ;
 scalar_t__ FUNC_3 (struct iser_conn*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct rdma_cm_id *VAR_4)
{
 struct iser_conn *VAR_5;
 int VAR_6;

 VAR_5 = (struct iser_conn *)VAR_4->context;



 if (FUNC_3(VAR_5, VAR_3,
          VAR_2))
  FUNC_1(VAR_5->iser_conn->iscsi_conn,
       VAR_0);


 if (VAR_5->post_recv_buf_count == 0 &&
     (FUNC_0(&VAR_5->post_send_buf_count) == 0)) {
  VAR_5->state = VAR_1;
  FUNC_4(&VAR_5->wait);
 }

 VAR_6 = FUNC_2(VAR_5, 0);
 return VAR_6;
}
