
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iser_tx_desc {scalar_t__ type; } ;
struct iser_conn {scalar_t__ post_recv_buf_count; int wait; int state; TYPE_1__* iser_conn; int post_send_buf_count; } ;
struct TYPE_4__ {int desc_cache; } ;
struct TYPE_3__ {int iscsi_conn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct iser_conn*,int ,int ) ;
 int FUNC_3 (int ,struct iser_tx_desc*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iser_tx_desc *VAR_6,
    struct iser_conn *VAR_7)
{
 if (VAR_6 && VAR_6->type == VAR_1)
  FUNC_3(VAR_5.desc_cache, VAR_6);

 if (VAR_7->post_recv_buf_count == 0 &&
     FUNC_0(&VAR_7->post_send_buf_count) == 0) {



  if (FUNC_2(VAR_7, VAR_4,
      VAR_3))
   FUNC_1(VAR_7->iser_conn->iscsi_conn,
        VAR_0);



  VAR_7->state = VAR_2;
  FUNC_4(&VAR_7->wait);
 }
}
