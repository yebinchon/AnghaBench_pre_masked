
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_host {struct iscsi_session* session; } ;
struct iscsi_sw_tcp_conn {int sock; } ;
struct iscsi_session {int lock; struct iscsi_conn* leadconn; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;
struct Scsi_Host {int dummy; } ;
typedef enum iscsi_host_param { ____Placeholder_iscsi_host_param } iscsi_host_param ;


 int VAR_0 ;

 int FUNC_0 (struct sockaddr_storage*,int,char*) ;
 int FUNC_1 (struct Scsi_Host*,int,char*) ;
 struct iscsi_sw_tcp_host* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ,struct sockaddr*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct Scsi_Host *VAR_1,
           enum iscsi_host_param VAR_2, char *VAR_3)
{
 struct iscsi_sw_tcp_host *VAR_4 = FUNC_2(VAR_1);
 struct iscsi_session *VAR_5 = VAR_4->session;
 struct iscsi_conn *VAR_6;
 struct iscsi_tcp_conn *VAR_7;
 struct iscsi_sw_tcp_conn *VAR_8;
 struct sockaddr_in6 VAR_9;
 int VAR_10, VAR_11;

 switch (VAR_2) {
 case 128:
  FUNC_4(&VAR_5->lock);
  VAR_6 = VAR_5->leadconn;
  if (!VAR_6) {
   FUNC_5(&VAR_5->lock);
   return -VAR_0;
  }
  VAR_7 = VAR_6->dd_data;

  VAR_8 = VAR_7->dd_data;
  if (!VAR_8->sock) {
   FUNC_5(&VAR_5->lock);
   return -VAR_0;
  }

  VAR_10 = FUNC_3(VAR_8->sock,
     (struct sockaddr *)&VAR_9, &VAR_11);
  FUNC_5(&VAR_5->lock);
  if (VAR_10)
   return VAR_10;

  return FUNC_0((struct sockaddr_storage *)
       &VAR_9, VAR_2, VAR_3);
 default:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 }

 return 0;
}
