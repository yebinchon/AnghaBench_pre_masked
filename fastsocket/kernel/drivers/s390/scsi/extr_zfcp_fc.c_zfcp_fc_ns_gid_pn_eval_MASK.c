
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_send_ct {scalar_t__ status; int resp; int req; } ;
struct zfcp_port {scalar_t__ wwpn; int d_id; } ;
struct zfcp_gid_pn_data {struct zfcp_port* port; struct zfcp_send_ct ct; } ;
struct TYPE_2__ {scalar_t__ cmd_rsp_code; } ;
struct ct_iu_gid_pn_resp {int d_id; TYPE_1__ header; } ;
struct ct_iu_gid_pn_req {scalar_t__ wwpn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_2)
{
 struct zfcp_gid_pn_data *VAR_3 = (struct zfcp_gid_pn_data *) VAR_2;
 struct zfcp_send_ct *VAR_4 = &VAR_3->ct;
 struct ct_iu_gid_pn_req *VAR_5 = FUNC_0(VAR_4->req);
 struct ct_iu_gid_pn_resp *VAR_6 = FUNC_0(VAR_4->resp);
 struct zfcp_port *VAR_7 = VAR_3->port;

 if (VAR_4->status)
  return;
 if (VAR_6->header.cmd_rsp_code != VAR_0)
  return;


 if (VAR_5->wwpn != VAR_7->wwpn)
  return;

 VAR_7->d_id = VAR_6->d_id & VAR_1;
}
