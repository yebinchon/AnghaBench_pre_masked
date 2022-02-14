
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;
struct iscsi_session {struct ddb_entry* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct ddb_entry {scalar_t__ ddb_type; int flags; struct scsi_qla_host* ha; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iscsi_cls_session*) ;
 int FUNC_2 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_3 (struct iscsi_cls_session*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct iscsi_cls_session *VAR_4)
{
 struct iscsi_session *VAR_5;
 struct ddb_entry *VAR_6;
 struct scsi_qla_host *VAR_7;

 VAR_5 = VAR_4->dd_data;
 VAR_6 = VAR_5->dd_data;
 VAR_7 = VAR_6->ha;

 if (!(VAR_6->ddb_type == VAR_2))
  return;

 if (FUNC_5(VAR_0, &VAR_6->flags))
  return;

 if (FUNC_4(VAR_1, &VAR_6->flags) &&
     !FUNC_1(VAR_4)) {
  FUNC_0(FUNC_2(VAR_3, VAR_7,
      "relogin issued\n"));
  FUNC_3(VAR_4);
 }
}
