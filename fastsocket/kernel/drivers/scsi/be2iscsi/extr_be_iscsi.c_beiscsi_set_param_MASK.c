
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int first_burst; int max_burst; } ;
struct iscsi_conn {int max_recv_dlength; int max_xmit_dlength; scalar_t__ dd_data; struct iscsi_session* session; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct beiscsi_hba {int dummy; } ;
struct beiscsi_conn {struct beiscsi_hba* phba; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,int) ;
 int FUNC_1 (struct iscsi_cls_conn*,int,char*,int) ;

int FUNC_2(struct iscsi_cls_conn *VAR_2,
        enum iscsi_param VAR_3, char *VAR_4, int VAR_5)
{
 struct iscsi_conn *VAR_6 = VAR_2->dd_data;
 struct iscsi_session *VAR_7 = VAR_6->session;
 struct beiscsi_hba *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_8 = ((struct beiscsi_conn *)VAR_6->dd_data)->phba;
 FUNC_0(VAR_8, VAR_1, VAR_0,
      "BS_%d : In beiscsi_conn_set_param,"
      " param= %d\n", VAR_3);

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_9)
  return VAR_9;




 switch (VAR_3) {
 case 131:
  if (VAR_7->first_burst > 8192)
   VAR_7->first_burst = 8192;
  break;
 case 129:
  if (VAR_6->max_recv_dlength > 65536)
   VAR_6->max_recv_dlength = 65536;
  break;
 case 130:
  if (VAR_7->max_burst > 262144)
   VAR_7->max_burst = 262144;
  break;
 case 128:
  if ((VAR_6->max_xmit_dlength > 65536) ||
      (VAR_6->max_xmit_dlength == 0))
   VAR_6->max_xmit_dlength = 65536;
 default:
  return 0;
 }

 return 0;
}
