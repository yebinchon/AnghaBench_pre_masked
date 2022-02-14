
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_30__ {int port; int pkey; } ;
struct TYPE_28__ {int status; } ;
struct TYPE_26__ {int path; } ;
struct TYPE_24__ {int reason; } ;
struct TYPE_22__ {int timeout; } ;
struct TYPE_17__ {int send_status; int sidr_rep_resp; TYPE_9__ sidr_req_resp; TYPE_7__ apr_resp; TYPE_5__ lap_resp; TYPE_3__ rej_resp; TYPE_1__ mra_resp; int rep_resp; int req_resp; } ;
struct TYPE_19__ {int present; TYPE_11__ u; } ;
struct ib_ucm_event {void* data; TYPE_13__ resp; void* info; scalar_t__ info_len; scalar_t__ data_len; } ;
struct TYPE_20__ {void* info; scalar_t__ info_len; } ;
struct TYPE_16__ {int port; int pkey; } ;
struct TYPE_29__ {void* apr_info; scalar_t__ info_len; int ap_status; } ;
struct TYPE_27__ {int alternate_path; } ;
struct TYPE_25__ {void* ari; scalar_t__ ari_length; int reason; } ;
struct TYPE_23__ {int service_timeout; } ;
struct TYPE_21__ {int alternate_path; } ;
struct TYPE_18__ {int send_status; TYPE_14__ sidr_rep_rcvd; TYPE_10__ sidr_req_rcvd; TYPE_8__ apr_rcvd; TYPE_6__ lap_rcvd; TYPE_4__ rej_rcvd; TYPE_2__ mra_rcvd; int rep_rcvd; TYPE_15__ req_rcvd; } ;
struct ib_cm_event {int event; void* private_data; TYPE_12__ param; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

 scalar_t__ VAR_3 ;

 scalar_t__ VAR_4 ;

 scalar_t__ VAR_5 ;

 scalar_t__ VAR_6 ;

 scalar_t__ VAR_7 ;

 scalar_t__ VAR_8 ;

 scalar_t__ VAR_9 ;

 scalar_t__ VAR_10 ;

 scalar_t__ VAR_11 ;

 scalar_t__ VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_15__*) ;
 int FUNC_3 (int *,TYPE_14__*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (void*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct ib_cm_event *VAR_17,
    struct ib_ucm_event *VAR_18)
{
 void *VAR_19 = ((void*)0);

 switch (VAR_17->event) {
 case 131:
  FUNC_2(&VAR_18->resp.u.req_resp,
         &VAR_17->param.req_rcvd);
  VAR_18->data_len = VAR_9;
  VAR_18->resp.present = VAR_16;
  VAR_18->resp.present |= (VAR_17->param.req_rcvd.alternate_path ?
          VAR_13 : 0);
  break;
 case 132:
  FUNC_1(&VAR_18->resp.u.rep_resp,
         &VAR_17->param.rep_rcvd);
  VAR_18->data_len = VAR_8;
  break;
 case 130:
  VAR_18->data_len = VAR_10;
  VAR_18->resp.u.send_status = VAR_17->param.send_status;
  break;
 case 136:
  VAR_18->data_len = VAR_4;
  VAR_18->resp.u.send_status = VAR_17->param.send_status;
  break;
 case 137:
  VAR_18->data_len = VAR_3;
  VAR_18->resp.u.send_status = VAR_17->param.send_status;
  break;
 case 134:
  VAR_18->resp.u.mra_resp.timeout =
     VAR_17->param.mra_rcvd.service_timeout;
  VAR_18->data_len = VAR_6;
  break;
 case 133:
  VAR_18->resp.u.rej_resp.reason = VAR_17->param.rej_rcvd.reason;
  VAR_18->data_len = VAR_7;
  VAR_18->info_len = VAR_17->param.rej_rcvd.ari_length;
  VAR_19 = VAR_17->param.rej_rcvd.ari;
  break;
 case 135:
  FUNC_0(&VAR_18->resp.u.lap_resp.path,
      VAR_17->param.lap_rcvd.alternate_path);
  VAR_18->data_len = VAR_5;
  VAR_18->resp.present = VAR_13;
  break;
 case 138:
  VAR_18->resp.u.apr_resp.status = VAR_17->param.apr_rcvd.ap_status;
  VAR_18->data_len = VAR_2;
  VAR_18->info_len = VAR_17->param.apr_rcvd.info_len;
  VAR_19 = VAR_17->param.apr_rcvd.apr_info;
  break;
 case 128:
  VAR_18->resp.u.sidr_req_resp.pkey =
     VAR_17->param.sidr_req_rcvd.pkey;
  VAR_18->resp.u.sidr_req_resp.port =
     VAR_17->param.sidr_req_rcvd.port;
  VAR_18->data_len = VAR_12;
  break;
 case 129:
  FUNC_3(&VAR_18->resp.u.sidr_rep_resp,
       &VAR_17->param.sidr_rep_rcvd);
  VAR_18->data_len = VAR_11;
  VAR_18->info_len = VAR_17->param.sidr_rep_rcvd.info_len;
  VAR_19 = VAR_17->param.sidr_rep_rcvd.info;
  break;
 default:
  VAR_18->resp.u.send_status = VAR_17->param.send_status;
  break;
 }

 if (VAR_18->data_len) {
  VAR_18->data = FUNC_5(VAR_17->private_data, VAR_18->data_len, VAR_1);
  if (!VAR_18->data)
   goto err1;

  VAR_18->resp.present |= VAR_14;
 }

 if (VAR_18->info_len) {
  VAR_18->info = FUNC_5(VAR_19, VAR_18->info_len, VAR_1);
  if (!VAR_18->info)
   goto err2;

  VAR_18->resp.present |= VAR_15;
 }
 return 0;

err2:
 FUNC_4(VAR_18->data);
err1:
 return -VAR_0;
}
