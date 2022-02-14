
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
typedef int u32 ;
struct TYPE_16__ {unsigned long handler_data; int * wka_port; int * completion; int handler; int resp; int req; } ;
struct zfcp_ct_fc_job {TYPE_8__ ct; struct fc_bsg_job* job; } ;
struct zfcp_adapter {TYPE_4__* gs; int status; } ;
struct fc_rport {int dummy; } ;
struct TYPE_14__ {int sg_list; } ;
struct TYPE_13__ {int sg_list; } ;
struct fc_bsg_job {TYPE_7__* req; TYPE_6__ reply_payload; TYPE_5__ request_payload; TYPE_3__* request; struct Scsi_Host* shost; struct fc_rport* rport; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
struct TYPE_15__ {int timeout; } ;
struct TYPE_12__ {int ds; int ts; int ms; int as; } ;
struct TYPE_9__ {int preamble_word1; } ;
struct TYPE_10__ {TYPE_1__ r_ct; } ;
struct TYPE_11__ {TYPE_2__ rqst_data; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct zfcp_ct_fc_job*) ;
 struct zfcp_ct_fc_job* FUNC_2 (int,int ) ;
 struct Scsi_Host* FUNC_3 (struct fc_rport*) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_8__*,int *,int) ;

int FUNC_7(struct fc_bsg_job *VAR_6)
{
 int VAR_7;
 u8 VAR_8;
 struct fc_rport *VAR_9 = VAR_6->rport;
 struct Scsi_Host *VAR_10;
 struct zfcp_adapter *VAR_11;
 struct zfcp_ct_fc_job *VAR_12;
 u32 VAR_13;

 VAR_10 = VAR_9 ? FUNC_3(VAR_9) : VAR_6->shost;

 VAR_11 = (struct zfcp_adapter *)VAR_10->hostdata[0];
 if (!(FUNC_0(&VAR_11->status) & VAR_4))
  return -VAR_0;

 VAR_12 = FUNC_2(sizeof(struct zfcp_ct_fc_job), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = VAR_6->request->rqst_data.r_ct.preamble_word1;
 VAR_8 = (VAR_13 & 0xff000000) >> 24;

 switch (VAR_8) {
 case 131:
  VAR_12->ct.wka_port = &VAR_11->gs->as;
  break;
 case 129:
  VAR_12->ct.wka_port = &VAR_11->gs->ms;
  break;
 case 128:
  VAR_12->ct.wka_port = &VAR_11->gs->ts;
  break;
 case 130:
  VAR_12->ct.wka_port = &VAR_11->gs->ds;
  break;
 default:
  FUNC_1(VAR_12);
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_12->ct.wka_port);
 if (VAR_7) {
  FUNC_1(VAR_12);
  return VAR_7;
 }

 VAR_12->ct.req = VAR_6->request_payload.sg_list;
 VAR_12->ct.resp = VAR_6->reply_payload.sg_list;
 VAR_12->ct.handler = VAR_5;
 VAR_12->ct.handler_data = (unsigned long) VAR_12;
 VAR_12->ct.completion = ((void*)0);
 VAR_12->job = VAR_6;

 VAR_7 = FUNC_6(&VAR_12->ct, ((void*)0), VAR_6->req->timeout / VAR_3);
 if (VAR_7) {
  FUNC_1(VAR_12);
  FUNC_5(VAR_12->ct.wka_port);
 }
 return VAR_7;
}
