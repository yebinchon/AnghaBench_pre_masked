
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iscsi_endpoint {struct beiscsi_endpoint* dd_data; } ;
struct beiscsi_hba {int dummy; } ;
struct beiscsi_endpoint {int openiscsi_ep; int ep_cid; struct beiscsi_conn* conn; struct beiscsi_hba* phba; } ;
struct beiscsi_conn {int conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct beiscsi_endpoint*,int ) ;
 int FUNC_1 (struct beiscsi_endpoint*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int ,char*,int ) ;
 int FUNC_3 (struct beiscsi_hba*,unsigned int,int *,int *) ;
 int FUNC_4 (struct beiscsi_hba*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct beiscsi_hba*,struct beiscsi_endpoint*,int ,int ,unsigned short) ;

void FUNC_8(struct iscsi_endpoint *VAR_7)
{
 struct beiscsi_conn *VAR_8;
 struct beiscsi_endpoint *VAR_9;
 struct beiscsi_hba *VAR_10;
 unsigned int VAR_11;
 uint8_t VAR_12, VAR_13;
 unsigned short VAR_14 = VAR_2;

 VAR_9 = VAR_7->dd_data;
 VAR_10 = VAR_9->phba;
 FUNC_2(VAR_10, VAR_6, VAR_0,
      "BS_%d : In beiscsi_ep_disconnect for ep_cid = %d\n",
      VAR_9->ep_cid);

 if (VAR_9->conn) {
  VAR_8 = VAR_9->conn;
  FUNC_6(VAR_8->conn);
  VAR_12 = ~VAR_1;
  VAR_13 = VAR_4;
 } else {
  VAR_12 = VAR_1;
  VAR_13 = VAR_3;
 }

 VAR_11 = FUNC_7(VAR_10, VAR_9,
       VAR_9->ep_cid,
       VAR_12,
       VAR_14);
 if (!VAR_11) {
  FUNC_2(VAR_10, VAR_5, VAR_0,
       "BS_%d : mgmt_invalidate_connection Failed for cid=%d\n",
       VAR_9->ep_cid);
 }

 FUNC_3(VAR_10, VAR_11, ((void*)0), ((void*)0));
 FUNC_0(VAR_9, VAR_13);
 FUNC_1(VAR_9);
 FUNC_4(VAR_10, VAR_9->ep_cid);
 FUNC_5(VAR_9->openiscsi_ep);
}
