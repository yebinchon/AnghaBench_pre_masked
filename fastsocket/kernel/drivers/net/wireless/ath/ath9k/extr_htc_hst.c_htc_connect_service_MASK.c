
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct htc_target {int conn_rsp_epid; int dev; int cmd_wait; int endpoint; } ;
struct htc_service_connreq {int service_id; int con_flags; int ep_callbacks; int max_send_qdepth; } ;
struct htc_frame_hdr {int dummy; } ;
struct htc_endpoint {int ul_pipeid; int dl_pipeid; int ep_callbacks; int max_txqdepth; int service_id; } ;
struct htc_conn_svc_msg {int ul_pipeid; int dl_pipeid; void* con_flags; void* msg_id; void* service_id; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 struct htc_endpoint* FUNC_3 (int ) ;
 int FUNC_4 (struct htc_target*,struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (int *,int ) ;

int FUNC_11(struct htc_target *VAR_7,
       struct htc_service_connreq *VAR_8,
       enum htc_endpoint_id *VAR_9)
{
 struct sk_buff *VAR_10;
 struct htc_endpoint *VAR_11;
 struct htc_conn_svc_msg *VAR_12;
 int VAR_13, VAR_14;


 VAR_11 = FUNC_3(VAR_7->endpoint);
 if (!VAR_11) {
  FUNC_2(VAR_7->dev, "Endpoint is not available for"
   "service %d\n", VAR_8->service_id);
  return -VAR_0;
 }

 VAR_11->service_id = VAR_8->service_id;
 VAR_11->max_txqdepth = VAR_8->max_send_qdepth;
 VAR_11->ul_pipeid = FUNC_7(VAR_8->service_id);
 VAR_11->dl_pipeid = FUNC_6(VAR_8->service_id);
 VAR_11->ep_callbacks = VAR_8->ep_callbacks;

 VAR_10 = FUNC_0(sizeof(struct htc_conn_svc_msg) +
       sizeof(struct htc_frame_hdr), VAR_4);
 if (!VAR_10) {
  FUNC_2(VAR_7->dev, "Failed to allocate buf to send"
   "service connect req\n");
  return -VAR_2;
 }

 FUNC_9(VAR_10, sizeof(struct htc_frame_hdr));

 VAR_12 = (struct htc_conn_svc_msg *)
   FUNC_8(VAR_10, sizeof(struct htc_conn_svc_msg));
 VAR_12->service_id = FUNC_1(VAR_8->service_id);
 VAR_12->msg_id = FUNC_1(VAR_5);
 VAR_12->con_flags = FUNC_1(VAR_8->con_flags);
 VAR_12->dl_pipeid = VAR_11->dl_pipeid;
 VAR_12->ul_pipeid = VAR_11->ul_pipeid;

 VAR_13 = FUNC_4(VAR_7, VAR_10, VAR_10->len, 0, VAR_1);
 if (VAR_13)
  goto err;

 VAR_14 = FUNC_10(&VAR_7->cmd_wait, VAR_6);
 if (!VAR_14) {
  FUNC_2(VAR_7->dev, "Service connection timeout for: %d\n",
   VAR_8->service_id);
  return -VAR_3;
 }

 *VAR_9 = VAR_7->conn_rsp_epid;
 return 0;
err:
 FUNC_5(VAR_10);
 return VAR_13;
}
