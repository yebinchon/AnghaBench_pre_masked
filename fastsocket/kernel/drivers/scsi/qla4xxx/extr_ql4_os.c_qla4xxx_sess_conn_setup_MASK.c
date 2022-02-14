
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct scsi_qla_host {int dpc_flags; int host; } ;
struct qla_conn {int dummy; } ;
struct ql4_task_data {int dummy; } ;
struct iscsi_session {struct ddb_entry* dd_data; } ;
struct iscsi_endpoint {struct iscsi_cls_conn* conn; } ;
struct iscsi_cls_session {int recovery_tmo; struct iscsi_session* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_endpoint* ep; } ;
struct dev_db_entry {int dummy; } ;
struct ddb_entry {int flags; struct iscsi_cls_conn* conn; int fw_ddb_entry; struct iscsi_cls_session* sess; } ;
struct TYPE_3__ {int owner; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct iscsi_cls_session*) ;
 struct iscsi_cls_conn* FUNC_2 (struct iscsi_cls_session*,int,int) ;
 struct iscsi_cls_session* FUNC_3 (TYPE_1__*,int ,int,int,int,int ,int ) ;
 int FUNC_4 (int *,struct dev_db_entry*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct scsi_qla_host*,char*) ;
 int VAR_7 ;
 int FUNC_7 (struct scsi_qla_host*,struct dev_db_entry*,struct iscsi_cls_session*,struct iscsi_cls_conn*) ;
 struct iscsi_endpoint* FUNC_8 (struct scsi_qla_host*,struct dev_db_entry*) ;
 TYPE_1__ VAR_8 ;
 int FUNC_9 (struct scsi_qla_host*,struct ddb_entry*,int) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct scsi_qla_host *VAR_9,
       struct dev_db_entry *VAR_10,
       int VAR_11, uint16_t VAR_12)
{
 struct iscsi_cls_session *VAR_13;
 struct iscsi_session *VAR_14;
 struct iscsi_cls_conn *VAR_15;
 struct iscsi_endpoint *VAR_16;
 uint16_t VAR_17 = 32;
 uint16_t VAR_18 = 0;
 uint32_t VAR_19 = 0;
 int VAR_20 = VAR_5;

 struct ddb_entry *VAR_21 = ((void*)0);




 VAR_13 = FUNC_3(&VAR_8, VAR_9->host,
           VAR_17, sizeof(struct ddb_entry),
           sizeof(struct ql4_task_data),
           VAR_19, VAR_2);
 if (!VAR_13) {
  VAR_20 = VAR_4;
  goto exit_setup;
 }





 FUNC_5(VAR_8.owner);
 VAR_14 = VAR_13->dd_data;
 VAR_21 = VAR_14->dd_data;
 VAR_21->sess = VAR_13;

 VAR_13->recovery_tmo = VAR_7;
 FUNC_4(&VAR_21->fw_ddb_entry, VAR_10,
        sizeof(struct dev_db_entry));

 FUNC_9(VAR_9, VAR_21, VAR_12);

 VAR_15 = FUNC_2(VAR_13, sizeof(struct qla_conn), VAR_18);

 if (!VAR_15) {
  VAR_20 = VAR_4;
  goto exit_setup;
 }

 VAR_21->conn = VAR_15;


 VAR_16 = FUNC_8(VAR_9, VAR_10);
 if (VAR_16) {
  VAR_16->conn = VAR_15;
  VAR_15->ep = VAR_16;
 } else {
  FUNC_0(FUNC_6(VAR_3, VAR_9, "Unable to get ep\n"));
  VAR_20 = VAR_4;
  goto exit_setup;
 }


 FUNC_7(VAR_9, VAR_10, VAR_13, VAR_15);

 if (VAR_11 == VAR_6) {
  FUNC_1(VAR_13);





  FUNC_10(VAR_1, &VAR_9->dpc_flags);
  FUNC_10(VAR_0, &VAR_21->flags);
 }

exit_setup:
 return VAR_20;
}
