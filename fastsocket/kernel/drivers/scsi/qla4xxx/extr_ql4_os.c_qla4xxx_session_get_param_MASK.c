
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scsi_qla_host {int dummy; } ;
struct iscsi_session {int password; int username; int password_in; int username_in; struct ddb_entry* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct ddb_entry {struct scsi_qla_host* ha; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct iscsi_cls_session*,int,char*) ;
 int FUNC_1 (struct scsi_qla_host*,int ,int ,int ,int *) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct iscsi_cls_session *VAR_2,
         enum iscsi_param VAR_3, char *VAR_4)
{
 struct iscsi_session *VAR_5 = VAR_2->dd_data;
 struct ddb_entry *VAR_6 = VAR_5->dd_data;
 struct scsi_qla_host *VAR_7 = VAR_6->ha;
 int VAR_8, VAR_9;
 uint16_t VAR_10;

 switch (VAR_3) {
 case 129:
  VAR_8 = FUNC_1(VAR_7, VAR_5->username_in,
           VAR_5->password_in, VAR_0,
           &VAR_10);
  if (VAR_8)
   VAR_9 = FUNC_2(VAR_4, "\n");
  else
   VAR_9 = FUNC_2(VAR_4, "%hu\n", VAR_10);
  break;
 case 128:
  VAR_8 = FUNC_1(VAR_7, VAR_5->username,
           VAR_5->password, VAR_1,
           &VAR_10);
  if (VAR_8)
   VAR_9 = FUNC_2(VAR_4, "\n");
  else
   VAR_9 = FUNC_2(VAR_4, "%hu\n", VAR_10);
  break;
 default:
  return FUNC_0(VAR_2, VAR_3, VAR_4);
 }

 return VAR_9;
}
