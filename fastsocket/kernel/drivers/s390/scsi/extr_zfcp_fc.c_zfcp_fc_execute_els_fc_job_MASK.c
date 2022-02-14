
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


typedef int u8 ;
struct zfcp_port {int d_id; } ;
struct TYPE_15__ {int d_id; unsigned long handler_data; int handler; int resp; int req; struct zfcp_adapter* adapter; } ;
struct zfcp_els_fc_job {TYPE_7__ els; struct fc_bsg_job* job; } ;
struct zfcp_adapter {int status; } ;
struct fc_rport {int port_name; } ;
struct TYPE_13__ {int sg_list; } ;
struct TYPE_12__ {int sg_list; } ;
struct fc_bsg_job {TYPE_6__* req; TYPE_5__ reply_payload; TYPE_4__ request_payload; TYPE_3__* request; struct Scsi_Host* shost; struct fc_rport* rport; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
struct TYPE_16__ {int config_lock; } ;
struct TYPE_14__ {int timeout; } ;
struct TYPE_9__ {int* port_id; } ;
struct TYPE_10__ {TYPE_1__ h_els; } ;
struct TYPE_11__ {TYPE_2__ rqst_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct zfcp_els_fc_job*) ;
 struct zfcp_els_fc_job* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct Scsi_Host* FUNC_5 (struct fc_rport*) ;
 TYPE_8__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_7__*,int) ;
 struct zfcp_port* FUNC_7 (struct zfcp_adapter*,int ) ;

int FUNC_8(struct fc_bsg_job *VAR_7)
{
 struct zfcp_els_fc_job *VAR_8;
 struct fc_rport *VAR_9 = VAR_7->rport;
 struct Scsi_Host *VAR_10;
 struct zfcp_adapter *VAR_11;
 struct zfcp_port *VAR_12;
 u8 *VAR_13;

 VAR_10 = VAR_9 ? FUNC_5(VAR_9) : VAR_7->shost;
 VAR_11 = (struct zfcp_adapter *)VAR_10->hostdata[0];

 if (!(FUNC_0(&VAR_11->status) & VAR_4))
  return -VAR_0;

 VAR_8 = FUNC_2(sizeof(struct zfcp_els_fc_job), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->els.adapter = VAR_11;
 if (VAR_9) {
  FUNC_3(&VAR_5.config_lock);
  VAR_12 = FUNC_7(VAR_11, VAR_9->port_name);
  if (VAR_12)
   VAR_8->els.d_id = VAR_12->d_id;
  FUNC_4(&VAR_5.config_lock);
  if (!VAR_12) {
   FUNC_1(VAR_8);
   return -VAR_0;
  }
 } else {
  VAR_13 = VAR_7->request->rqst_data.h_els.port_id;
  VAR_8->els.d_id = (VAR_13[0] << 16) +
     (VAR_13[1] << 8) + VAR_13[2];
 }

 VAR_8->els.req = VAR_7->request_payload.sg_list;
 VAR_8->els.resp = VAR_7->reply_payload.sg_list;
 VAR_8->els.handler = VAR_6;
 VAR_8->els.handler_data = (unsigned long) VAR_8;
 VAR_8->job = VAR_7;

 return FUNC_6(&VAR_8->els, VAR_7->req->timeout / VAR_3);
}
