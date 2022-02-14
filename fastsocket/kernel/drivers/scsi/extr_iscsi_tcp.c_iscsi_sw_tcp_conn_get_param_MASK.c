
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {int sock; } ;
struct iscsi_conn {TYPE_1__* session; struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;


 int FUNC_0 (struct sockaddr_storage*,int,char*) ;
 int FUNC_1 (struct iscsi_cls_conn*,int,char*) ;
 int FUNC_2 (int ,struct sockaddr*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iscsi_cls_conn *VAR_1,
           enum iscsi_param VAR_2, char *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_1->dd_data;
 struct iscsi_tcp_conn *VAR_5 = VAR_4->dd_data;
 struct iscsi_sw_tcp_conn *VAR_6 = VAR_5->dd_data;
 struct sockaddr_in6 VAR_7;
 int VAR_8, VAR_9;

 switch(VAR_2) {
 case 128:
 case 129:
  FUNC_3(&VAR_4->session->lock);
  if (!VAR_6 || !VAR_6->sock) {
   FUNC_4(&VAR_4->session->lock);
   return -VAR_0;
  }
  VAR_8 = FUNC_2(VAR_6->sock,
     (struct sockaddr *)&VAR_7, &VAR_9);
  FUNC_4(&VAR_4->session->lock);
  if (VAR_8)
   return VAR_8;

  return FUNC_0((struct sockaddr_storage *)
       &VAR_7, VAR_2, VAR_3);
 default:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 }

 return 0;
}
