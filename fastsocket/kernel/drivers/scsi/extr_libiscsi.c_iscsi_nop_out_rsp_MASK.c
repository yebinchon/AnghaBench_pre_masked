
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {struct iscsi_conn* conn; } ;
struct iscsi_nopin {int dummy; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {scalar_t__ recv_timeout; int transport_timer; int cls_conn; struct iscsi_task* ping_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_task*,int ) ;
 scalar_t__ FUNC_1 (int ,struct iscsi_hdr*,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct iscsi_task *VAR_3,
        struct iscsi_nopin *VAR_4, char *VAR_5, int VAR_6)
{
 struct iscsi_conn *VAR_7 = VAR_3->conn;
 int VAR_8 = 0;

 if (VAR_7->ping_task != VAR_3) {




  if (FUNC_1(VAR_7->cls_conn, (struct iscsi_hdr *)VAR_4,
       VAR_5, VAR_6))
   VAR_8 = VAR_0;
 } else
  FUNC_2(&VAR_7->transport_timer, VAR_2 + VAR_7->recv_timeout);
 FUNC_0(VAR_3, VAR_1);
 return VAR_8;
}
