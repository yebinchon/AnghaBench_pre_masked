
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {struct beiscsi_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct beiscsi_offload_params {int dummy; } ;
struct beiscsi_endpoint {int dummy; } ;
struct beiscsi_conn {scalar_t__ login_in_progress; int phba; struct beiscsi_endpoint* ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (struct beiscsi_conn*,struct beiscsi_offload_params*) ;
 int FUNC_2 (struct beiscsi_conn*,struct beiscsi_offload_params*) ;
 int FUNC_3 (struct iscsi_cls_conn*) ;
 int FUNC_4 (struct beiscsi_offload_params*,int ,int) ;

int FUNC_5(struct iscsi_cls_conn *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_3->dd_data;
 struct beiscsi_conn *VAR_5 = VAR_4->dd_data;
 struct beiscsi_endpoint *VAR_6;
 struct beiscsi_offload_params VAR_7;

 FUNC_0(VAR_5->phba, VAR_2,
      VAR_0,
      "BS_%d : In beiscsi_conn_start\n");

 FUNC_4(&VAR_7, 0, sizeof(struct beiscsi_offload_params));
 VAR_6 = VAR_5->ep;
 if (!VAR_6)
  FUNC_0(VAR_5->phba, VAR_1,
       VAR_0,
       "BS_%d : In beiscsi_conn_start , no beiscsi_ep\n");

 VAR_5->login_in_progress = 0;
 FUNC_2(VAR_5, &VAR_7);
 FUNC_1(VAR_5, &VAR_7);
 FUNC_3(VAR_3);
 return 0;
}
