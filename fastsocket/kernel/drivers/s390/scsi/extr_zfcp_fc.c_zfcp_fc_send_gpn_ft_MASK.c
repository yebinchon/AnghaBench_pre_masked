
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_send_ct {unsigned long handler_data; int resp; int * req; int handler; int * wka_port; } ;
struct zfcp_gpn_ft {int sg_resp; int sg_req; struct zfcp_send_ct ct; } ;
struct zfcp_fc_ns_handler_data {int done; int * handler; } ;
struct zfcp_adapter {TYPE_2__* gs; } ;
struct TYPE_3__ {int max_res_size; int cmd_rsp_code; int options; int gs_subtype; int gs_type; int revision; } ;
struct ct_iu_gpn_ft_req {int fc4_type; scalar_t__ area_id_scope; scalar_t__ domain_id_scope; scalar_t__ flags; TYPE_1__ header; } ;
struct TYPE_4__ {int ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 struct ct_iu_gpn_ft_req* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int FUNC_3 (struct zfcp_send_ct*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct zfcp_gpn_ft *VAR_8,
          struct zfcp_adapter *VAR_9, int VAR_10)
{
 struct zfcp_send_ct *VAR_11 = &VAR_8->ct;
 struct ct_iu_gpn_ft_req *VAR_12 = FUNC_1(&VAR_8->sg_req);
 struct zfcp_fc_ns_handler_data VAR_13;
 int VAR_14;


 VAR_12->header.revision = VAR_3;
 VAR_12->header.gs_type = VAR_0;
 VAR_12->header.gs_subtype = VAR_2;
 VAR_12->header.options = VAR_5;
 VAR_12->header.cmd_rsp_code = VAR_1;
 VAR_12->header.max_res_size = VAR_10 / 4;
 VAR_12->flags = 0;
 VAR_12->domain_id_scope = 0;
 VAR_12->area_id_scope = 0;
 VAR_12->fc4_type = VAR_4;


 VAR_11->wka_port = &VAR_9->gs->ds;
 VAR_11->handler = VAR_7;
 VAR_11->handler_data = (unsigned long)&VAR_13;
 VAR_11->req = &VAR_8->sg_req;
 VAR_11->resp = VAR_8->sg_resp;

 FUNC_0(&VAR_13.done);
 VAR_13.handler = ((void*)0);
 VAR_14 = FUNC_3(VAR_11, ((void*)0), VAR_6);
 if (!VAR_14)
  FUNC_2(&VAR_13.done);
 return VAR_14;
}
