
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct request {int resid_len; } ;
struct fc_rport_priv {int e_d_tov; } ;
struct fc_rport {int port_id; struct fc_rport_priv* dd_data; } ;
struct TYPE_13__ {struct fc_rport_priv* (* rport_lookup ) (struct fc_lport*,int ) ;} ;
struct fc_lport {int lp_mutex; int e_d_tov; TYPE_5__ tt; struct fc_rport_priv* dns_rdata; } ;
struct TYPE_11__ {int payload_len; } ;
struct fc_bsg_job {TYPE_8__* request; struct fc_rport* rport; TYPE_3__ reply_payload; TYPE_2__* reply; struct Scsi_Host* shost; TYPE_1__* req; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_14__ {int port_id; } ;
struct TYPE_12__ {int port_id; } ;
struct TYPE_15__ {TYPE_6__ h_els; TYPE_4__ h_ct; } ;
struct TYPE_16__ {int msgcode; TYPE_7__ rqst_data; } ;
struct TYPE_10__ {scalar_t__ reply_payload_rcv_len; } ;
struct TYPE_9__ {struct request* next_rq; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct fc_bsg_job*,struct fc_lport*,int ,int ) ;
 int FUNC_1 (struct fc_bsg_job*,struct fc_lport*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct fc_lport* FUNC_5 (struct Scsi_Host*) ;
 struct fc_rport_priv* FUNC_6 (struct fc_lport*,int ) ;

int FUNC_7(struct fc_bsg_job *VAR_2)
{
 struct request *VAR_3 = VAR_2->req->next_rq;
 struct Scsi_Host *VAR_4 = VAR_2->shost;
 struct fc_lport *VAR_5 = FUNC_5(VAR_4);
 struct fc_rport *VAR_6;
 struct fc_rport_priv *VAR_7;
 int VAR_8 = -VAR_0;
 u32 VAR_9;

 VAR_2->reply->reply_payload_rcv_len = 0;
 if (VAR_3)
  VAR_3->resid_len = VAR_2->reply_payload.payload_len;

 FUNC_2(&VAR_5->lp_mutex);

 switch (VAR_2->request->msgcode) {
 case 128:
  VAR_6 = VAR_2->rport;
  if (!VAR_6)
   break;

  VAR_7 = VAR_6->dd_data;
  VAR_8 = FUNC_1(VAR_2, VAR_5, VAR_6->port_id,
       VAR_7->e_d_tov);
  break;

 case 129:
  VAR_6 = VAR_2->rport;
  if (!VAR_6)
   break;

  VAR_7 = VAR_6->dd_data;
  VAR_8 = FUNC_0(VAR_2, VAR_5, VAR_6->port_id,
      VAR_7->e_d_tov);
  break;

 case 131:
  VAR_9 = FUNC_4(VAR_2->request->rqst_data.h_ct.port_id);
  if (VAR_9 == VAR_1)
   VAR_7 = VAR_5->dns_rdata;
  else
   VAR_7 = VAR_5->tt.rport_lookup(VAR_5, VAR_9);

  if (!VAR_7)
   break;

  VAR_8 = FUNC_0(VAR_2, VAR_5, VAR_9, VAR_7->e_d_tov);
  break;

 case 130:
  VAR_9 = FUNC_4(VAR_2->request->rqst_data.h_els.port_id);
  VAR_8 = FUNC_1(VAR_2, VAR_5, VAR_9, VAR_5->e_d_tov);
  break;
 }

 FUNC_3(&VAR_5->lp_mutex);
 return VAR_8;
}
