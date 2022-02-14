
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct htc_target {int conn_rsp_epid; int cmd_wait; struct htc_endpoint* endpoint; } ;
struct htc_frame_hdr {int dummy; } ;
struct htc_endpoint {scalar_t__ service_id; scalar_t__ max_msglen; int dl_pipeid; int ul_pipeid; int ep_callbacks; int max_txqdepth; } ;
struct htc_conn_svc_rspmsg {scalar_t__ status; int endpoint_id; int max_msg_len; int service_id; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct htc_target *VAR_4,
     struct htc_frame_hdr *VAR_5)
{
 struct htc_conn_svc_rspmsg *VAR_6;
 struct htc_endpoint *VAR_7, *VAR_8 = ((void*)0);
 u16 VAR_9;
 u16 VAR_10;
 enum htc_endpoint_id VAR_11, VAR_12;

 VAR_6 = (struct htc_conn_svc_rspmsg *)
  ((void *) VAR_5 + sizeof(struct htc_frame_hdr));

 if (VAR_6->status == VAR_3) {
  VAR_11 = VAR_6->endpoint_id;
  VAR_9 = FUNC_0(VAR_6->service_id);
  VAR_10 = FUNC_0(VAR_6->max_msg_len);
  VAR_7 = &VAR_4->endpoint[VAR_11];

  for (VAR_12 = (VAR_1 - 1); VAR_12 > VAR_0; VAR_12--) {
   VAR_8 = &VAR_4->endpoint[VAR_12];
   if (VAR_8->service_id == VAR_9) {
    VAR_8->service_id = 0;
    break;
   }
  }

  if (VAR_12 == VAR_0)
   return;

  VAR_7->service_id = VAR_9;
  VAR_7->max_txqdepth = VAR_8->max_txqdepth;
  VAR_7->ep_callbacks = VAR_8->ep_callbacks;
  VAR_7->ul_pipeid = VAR_8->ul_pipeid;
  VAR_7->dl_pipeid = VAR_8->dl_pipeid;
  VAR_7->max_msglen = VAR_10;
  VAR_4->conn_rsp_epid = VAR_11;
  FUNC_1(&VAR_4->cmd_wait);
 } else {
  VAR_4->conn_rsp_epid = VAR_2;
 }
}
