
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct iscsi_endpoint {struct bnx2i_endpoint* dd_data; } ;
struct iscsi_conn {struct bnx2i_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct bnx2i_hba {int cnic_dev_type; TYPE_1__* netdev; } ;
struct bnx2i_endpoint {scalar_t__ state; struct bnx2i_hba* hba; int ep_iscsi_cid; int ep_cid; struct bnx2i_conn* conn; } ;
struct bnx2i_conn {struct bnx2i_endpoint* ep; int fw_cid; int iscsi_conn_cid; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct bnx2i_hba*) ;
 int FUNC_1 (struct bnx2i_endpoint*,int ) ;
 int FUNC_2 (struct bnx2i_hba*,struct bnx2i_conn*,int ) ;
 int FUNC_3 (struct bnx2i_conn*,int ) ;
 scalar_t__ FUNC_4 (struct iscsi_cls_session*,struct iscsi_cls_conn*,int) ;
 int FUNC_5 (int ,struct iscsi_conn*,char*,struct bnx2i_endpoint*,...) ;
 struct bnx2i_hba* FUNC_6 (struct Scsi_Host*) ;
 struct iscsi_endpoint* FUNC_7 (int ) ;
 struct Scsi_Host* FUNC_8 (struct iscsi_cls_session*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct iscsi_cls_session *VAR_8,
      struct iscsi_cls_conn *VAR_9,
      uint64_t VAR_10, int VAR_11)
{
 struct iscsi_conn *VAR_12 = VAR_9->dd_data;
 struct bnx2i_conn *VAR_13 = VAR_12->dd_data;
 struct Scsi_Host *VAR_14 = FUNC_8(VAR_8);
 struct bnx2i_hba *VAR_15 = FUNC_6(VAR_14);
 struct bnx2i_endpoint *VAR_16;
 struct iscsi_endpoint *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_7(VAR_10);
 if (!VAR_17)
  return -VAR_3;




 if (FUNC_0(VAR_15))
  return -VAR_4;

 VAR_16 = VAR_17->dd_data;
 if ((VAR_16->state == VAR_5) ||
     (VAR_16->state == VAR_6))

  return -VAR_3;

 if (FUNC_4(VAR_8, VAR_9, VAR_11))
  return -VAR_3;

 if (VAR_16->hba != VAR_15) {


  FUNC_5(VAR_7, VAR_9->dd_data,
      "conn bind, ep=0x%p (%s) does not",
      VAR_16, VAR_16->hba->netdev->name);
  FUNC_5(VAR_7, VAR_9->dd_data,
      "belong to hba (%s)\n",
      VAR_15->netdev->name);
  return -VAR_2;
 }
 VAR_16->conn = VAR_13;
 VAR_13->ep = VAR_16;
 VAR_13->iscsi_conn_cid = VAR_16->ep_iscsi_cid;
 VAR_13->fw_cid = VAR_16->ep_cid;

 VAR_18 = FUNC_2(VAR_15, VAR_13,
      VAR_16->ep_iscsi_cid);




 if (FUNC_9(VAR_0, &VAR_16->hba->cnic_dev_type))
  FUNC_3(VAR_13, 0);

 FUNC_1(VAR_13->ep, VAR_1);
 return VAR_18;
}
