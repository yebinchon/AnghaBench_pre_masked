
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_iser_conn {TYPE_1__* ib_conn; } ;
struct iscsi_hdr {int flags; int opcode; } ;
struct iscsi_conn {struct iscsi_iser_conn* dd_data; } ;
struct TYPE_2__ {int post_recv_buf_count; int post_send_buf_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,...) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(struct iscsi_conn *VAR_3, struct iscsi_hdr *VAR_4)
{
 struct iscsi_iser_conn *VAR_5 = VAR_3->dd_data;

 FUNC_2("req op %x flags %x\n", VAR_4->opcode, VAR_4->flags);

 if ((VAR_4->flags & VAR_1) != VAR_1)
  return 0;






 FUNC_0(VAR_5->ib_conn->post_recv_buf_count != 1);
 FUNC_0(FUNC_1(&VAR_5->ib_conn->post_send_buf_count) != 0);

 FUNC_2("Initially post: %d\n", VAR_2);

 if (FUNC_3(VAR_5->ib_conn, VAR_2))
  return -VAR_0;

 return 0;
}
