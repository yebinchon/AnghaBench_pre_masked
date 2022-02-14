
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iscsi_conn {struct bnx2i_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct bnx2i_hba {int dummy; } ;
struct bnx2i_conn {int cmd_cleanup_cmpl; int * ep; int work_cnt; struct bnx2i_hba* hba; struct iscsi_cls_conn* cls_conn; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct bnx2i_hba*,struct bnx2i_conn*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct iscsi_conn*,char*) ;
 struct iscsi_cls_conn* FUNC_4 (struct iscsi_cls_session*,int,int ) ;
 int FUNC_5 (struct iscsi_cls_conn*) ;
 struct bnx2i_hba* FUNC_6 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_7 (struct iscsi_cls_session*) ;

__attribute__((used)) static struct iscsi_cls_conn *
FUNC_8(struct iscsi_cls_session *VAR_1, uint32_t VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_7(VAR_1);
 struct bnx2i_hba *VAR_4 = FUNC_6(VAR_3);
 struct bnx2i_conn *VAR_5;
 struct iscsi_cls_conn *VAR_6;
 struct iscsi_conn *VAR_7;

 VAR_6 = FUNC_4(VAR_1, sizeof(*VAR_5),
        VAR_2);
 if (!VAR_6)
  return ((void*)0);
 VAR_7 = VAR_6->dd_data;

 VAR_5 = VAR_7->dd_data;
 VAR_5->cls_conn = VAR_6;
 VAR_5->hba = VAR_4;

 FUNC_0(&VAR_5->work_cnt, 0);


 VAR_5->ep = ((void*)0);
 FUNC_2(&VAR_5->cmd_cleanup_cmpl);

 if (FUNC_1(VAR_4, VAR_5)) {
  FUNC_3(VAR_0, VAR_7,
      "conn_new: login resc alloc failed!!\n");
  goto free_conn;
 }

 return VAR_6;

free_conn:
 FUNC_5(VAR_6);
 return ((void*)0);
}
