
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_port {int d_id; struct zfcp_adapter* adapter; } ;
struct zfcp_ls_adisc {int dummy; } ;
struct TYPE_4__ {unsigned long handler_data; int ls_code; int handler; int d_id; struct zfcp_port* port; struct zfcp_adapter* adapter; int * resp; int * req; } ;
struct TYPE_6__ {int nport_id; int wwnn; int wwpn; int code; } ;
struct zfcp_els_adisc {TYPE_1__ els; TYPE_3__ ls_adisc; TYPE_3__ ls_adisc_acc; int resp; int req; } ;
struct zfcp_adapter {int scsi_host; } ;
struct TYPE_5__ {int adisc_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct zfcp_els_adisc*) ;
 struct zfcp_els_adisc* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,TYPE_3__*,int) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(struct zfcp_port *VAR_6)
{
 struct zfcp_els_adisc *VAR_7;
 struct zfcp_adapter *VAR_8 = VAR_6->adapter;
 int VAR_9;

 VAR_7 = FUNC_4(VAR_4.adisc_cache, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->els.req = &VAR_7->req;
 VAR_7->els.resp = &VAR_7->resp;
 FUNC_5(VAR_7->els.req, &VAR_7->ls_adisc,
      sizeof(struct zfcp_ls_adisc));
 FUNC_5(VAR_7->els.resp, &VAR_7->ls_adisc_acc,
      sizeof(struct zfcp_ls_adisc));

 VAR_7->els.adapter = VAR_8;
 VAR_7->els.port = VAR_6;
 VAR_7->els.d_id = VAR_6->d_id;
 VAR_7->els.handler = VAR_5;
 VAR_7->els.handler_data = (unsigned long) VAR_7;
 VAR_7->els.ls_code = VAR_7->ls_adisc.code = VAR_3;



 VAR_7->ls_adisc.wwpn = FUNC_2(VAR_8->scsi_host);
 VAR_7->ls_adisc.wwnn = FUNC_0(VAR_8->scsi_host);
 VAR_7->ls_adisc.nport_id = FUNC_1(VAR_8->scsi_host);

 VAR_9 = FUNC_6(&VAR_7->els, VAR_2);
 if (VAR_9)
  FUNC_3(VAR_4.adisc_cache, VAR_7);

 return VAR_9;
}
