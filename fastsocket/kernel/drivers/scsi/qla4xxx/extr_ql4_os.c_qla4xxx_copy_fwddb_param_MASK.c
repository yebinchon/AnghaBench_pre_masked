
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scsi_qla_host {scalar_t__ name_string; } ;
struct iscsi_session {void* def_taskmgmt_tmo; struct ddb_entry* dd_data; } ;
struct iscsi_conn {void* persistent_port; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct dev_db_entry {scalar_t__ iscsi_name; int ip_addr; int options; int port; int def_timeout; int chap_tbl_idx; } ;
struct ddb_entry {void* chap_tbl_idx; } ;
typedef int ip_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iscsi_cls_conn*,int ,char*,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct iscsi_conn*,struct iscsi_session*,struct dev_db_entry*) ;
 int FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct scsi_qla_host *VAR_6,
         struct dev_db_entry *VAR_7,
         struct iscsi_cls_session *VAR_8,
         struct iscsi_cls_conn *VAR_9)
{
 int VAR_10 = 0;
 struct iscsi_session *VAR_11;
 struct ddb_entry *VAR_12;
 struct iscsi_conn *VAR_13;
 char VAR_14[VAR_0];
 uint16_t VAR_15 = 0;

 VAR_11 = VAR_8->dd_data;
 VAR_12 = VAR_11->dd_data;
 VAR_13 = VAR_9->dd_data;

 VAR_12->chap_tbl_idx = FUNC_1(VAR_7->chap_tbl_idx);

 FUNC_3(VAR_13, VAR_11, VAR_7);

 VAR_11->def_taskmgmt_tmo = FUNC_1(VAR_7->def_timeout);
 VAR_13->persistent_port = FUNC_1(VAR_7->port);

 FUNC_2(VAR_14, 0, sizeof(VAR_14));
 VAR_15 = FUNC_1(VAR_7->options);
 if (VAR_15 & VAR_1) {
  FUNC_0(VAR_9, VAR_4, "ipv6", 4);

  FUNC_2(VAR_14, 0, sizeof(VAR_14));
  FUNC_4(VAR_14, "%pI6", VAR_7->ip_addr);
 } else {
  FUNC_0(VAR_9, VAR_4, "ipv4", 4);
  FUNC_4(VAR_14, "%pI4", VAR_7->ip_addr);
 }

 FUNC_0(VAR_9, VAR_3,
   (char *)VAR_14, VAR_10);
 FUNC_0(VAR_9, VAR_5,
   (char *)VAR_7->iscsi_name, VAR_10);
 FUNC_0(VAR_9, VAR_2,
   (char *)VAR_6->name_string, VAR_10);
}
