
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zfcp_port {int wwpn; struct zfcp_adapter* adapter; } ;
struct TYPE_9__ {unsigned long handler_data; int * resp; int * req; int handler; int * wka_port; } ;
struct TYPE_7__ {int max_res_size; int cmd_rsp_code; int options; int gs_subtype; int gs_type; int revision; } ;
struct TYPE_10__ {int wwpn; TYPE_2__ header; } ;
struct zfcp_gid_pn_data {TYPE_4__ ct; TYPE_5__ ct_iu_req; TYPE_5__ ct_iu_resp; int resp; int req; struct zfcp_port* port; } ;
struct zfcp_fc_ns_handler_data {unsigned long handler_data; int done; int handler; } ;
struct TYPE_8__ {int gid_pn_req; } ;
struct zfcp_adapter {TYPE_3__ pool; TYPE_1__* gs; } ;
struct ct_iu_gid_pn_resp {int dummy; } ;
struct ct_iu_gid_pn_req {int dummy; } ;
struct TYPE_6__ {int ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_5__*,int) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct zfcp_port *VAR_9,
         struct zfcp_gid_pn_data *VAR_10)
{
 struct zfcp_adapter *VAR_11 = VAR_9->adapter;
 struct zfcp_fc_ns_handler_data VAR_12;
 int VAR_13;


 VAR_10->port = VAR_9;
 VAR_10->ct.wka_port = &VAR_11->gs->ds;
 VAR_10->ct.handler = VAR_8;
 VAR_10->ct.handler_data = (unsigned long) &VAR_12;
 VAR_10->ct.req = &VAR_10->req;
 VAR_10->ct.resp = &VAR_10->resp;
 FUNC_1(&VAR_10->req, &VAR_10->ct_iu_req,
      sizeof(struct ct_iu_gid_pn_req));
 FUNC_1(&VAR_10->resp, &VAR_10->ct_iu_resp,
      sizeof(struct ct_iu_gid_pn_resp));


 VAR_10->ct_iu_req.header.revision = VAR_3;
 VAR_10->ct_iu_req.header.gs_type = VAR_0;
 VAR_10->ct_iu_req.header.gs_subtype = VAR_2;
 VAR_10->ct_iu_req.header.options = VAR_5;
 VAR_10->ct_iu_req.header.cmd_rsp_code = VAR_1;
 VAR_10->ct_iu_req.header.max_res_size = VAR_4 / 4;
 VAR_10->ct_iu_req.wwpn = VAR_9->wwpn;

 FUNC_0(&VAR_12.done);
 VAR_12.handler = VAR_7;
 VAR_12.handler_data = (unsigned long) VAR_10;
 VAR_13 = FUNC_3(&VAR_10->ct, VAR_11->pool.gid_pn_req,
          VAR_6);
 if (!VAR_13)
  FUNC_2(&VAR_12.done);
 return VAR_13;
}
