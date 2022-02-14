
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iscsi_endpoint {struct beiscsi_endpoint* dd_data; } ;
struct iscsi_conn {struct beiscsi_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct beiscsi_hba {int dummy; } ;
struct beiscsi_endpoint {int ep_cid; struct beiscsi_conn* conn; struct beiscsi_hba* phba; } ;
struct beiscsi_conn {struct beiscsi_endpoint* ep; int beiscsi_conn_cid; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*,struct beiscsi_conn*,int ) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,struct beiscsi_conn*,struct iscsi_conn*,...) ;
 scalar_t__ FUNC_2 (struct iscsi_cls_session*,struct iscsi_cls_conn*,int) ;
 struct beiscsi_hba* FUNC_3 (struct Scsi_Host*) ;
 struct iscsi_endpoint* FUNC_4 (int ) ;
 struct Scsi_Host* FUNC_5 (struct iscsi_cls_session*) ;

int FUNC_6(struct iscsi_cls_session *VAR_5,
        struct iscsi_cls_conn *VAR_6,
        u64 VAR_7, int VAR_8)
{
 struct iscsi_conn *VAR_9 = VAR_6->dd_data;
 struct beiscsi_conn *VAR_10 = VAR_9->dd_data;
 struct Scsi_Host *VAR_11 = FUNC_5(VAR_5);
 struct beiscsi_hba *VAR_12 = FUNC_3(VAR_11);
 struct beiscsi_endpoint *VAR_13;
 struct iscsi_endpoint *VAR_14;

 VAR_14 = FUNC_4(VAR_7);
 if (!VAR_14)
  return -VAR_2;

 VAR_13 = VAR_14->dd_data;

 if (FUNC_2(VAR_5, VAR_6, VAR_8))
  return -VAR_2;

 if (VAR_13->phba != VAR_12) {
  FUNC_1(VAR_12, VAR_3, VAR_0,
       "BS_%d : beiscsi_ep->hba=%p not equal to phba=%p\n",
       VAR_13->phba, VAR_12);

  return -VAR_1;
 }

 VAR_10->beiscsi_conn_cid = VAR_13->ep_cid;
 VAR_10->ep = VAR_13;
 VAR_13->conn = VAR_10;

 FUNC_1(VAR_12, VAR_4, VAR_0,
      "BS_%d : beiscsi_conn=%p conn=%p ep_cid=%d\n",
      VAR_10, VAR_9, VAR_13->ep_cid);

 return FUNC_0(VAR_12, VAR_10, VAR_13->ep_cid);
}
