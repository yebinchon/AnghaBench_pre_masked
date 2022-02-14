
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef union fsf_status_qual {int dummy; } fsf_status_qual ;
typedef union fsf_status_qual fsf_prot_status_qual ;
struct zfcp_unit {int fcp_lun; struct zfcp_port* port; } ;
struct zfcp_send_els {int ls_code; } ;
struct zfcp_port {int wwpn; int d_id; } ;
struct TYPE_18__ {int sbal_response; int sbal_last; int sbal_first; } ;
struct zfcp_fsf_req {int fsf_command; int status; scalar_t__ data; scalar_t__ erp_action; int * pool; TYPE_3__ queue_req; int issued; int seq_no; int req_id; struct fsf_qtcb* qtcb; } ;
struct TYPE_13__ {int ls_code; int d_id; } ;
struct TYPE_22__ {int lun_handle; int port_handle; int fcp_lun; int wwpn; } ;
struct TYPE_21__ {int port_handle; int d_id; int wwpn; } ;
struct TYPE_19__ {unsigned long cmnd; int data_dir; int serial; } ;
struct TYPE_14__ {TYPE_10__ els; TYPE_7__ unit; TYPE_6__ port; TYPE_4__ fcp; } ;
struct zfcp_dbf_hba_record_response {int fsf_command; int fsf_req_status; unsigned long erp_action; TYPE_11__ u; int pool; int sbal_response; int sbal_last; int sbal_first; int fsf_status_qual; int fsf_prot_status_qual; int fsf_status; int fsf_prot_status; int fsf_issued; int fsf_seqno; int fsf_reqid; } ;
struct TYPE_16__ {struct zfcp_dbf_hba_record_response response; } ;
struct zfcp_dbf_hba_record {int tag2; int tag; TYPE_1__ u; } ;
struct zfcp_dbf {int hba_lock; int hba; struct zfcp_dbf_hba_record hba_buf; } ;
struct scsi_cmnd {int serial_number; } ;
struct TYPE_15__ {int log_start; int log_length; int lun_handle; int port_handle; int fsf_status; union fsf_status_qual fsf_status_qual; } ;
struct TYPE_23__ {int d_id; } ;
struct TYPE_20__ {int data_direction; } ;
struct TYPE_24__ {TYPE_8__ support; TYPE_5__ io; } ;
struct TYPE_17__ {int prot_status; union fsf_status_qual prot_status_qual; } ;
struct fsf_qtcb {TYPE_12__ header; TYPE_9__ bottom; TYPE_2__ prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,struct zfcp_dbf_hba_record*,int) ;
 int FUNC_1 (int ,union fsf_status_qual*,int ) ;
 int FUNC_2 (struct zfcp_dbf_hba_record*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,char const*,int ) ;
 int FUNC_6 (int ,struct zfcp_dbf_hba_record*,int,int,char*,int) ;

void FUNC_7(const char *VAR_4, int VAR_5,
    struct zfcp_fsf_req *VAR_6,
    struct zfcp_dbf *VAR_7)
{
 struct fsf_qtcb *VAR_8 = VAR_6->qtcb;
 union fsf_prot_status_qual *VAR_9 =
     &VAR_8->prefix.prot_status_qual;
 union fsf_status_qual *VAR_10 = &VAR_8->header.fsf_status_qual;
 struct scsi_cmnd *VAR_11;
 struct zfcp_port *VAR_12;
 struct zfcp_unit *VAR_13;
 struct zfcp_send_els *VAR_14;
 struct zfcp_dbf_hba_record *VAR_15 = &VAR_7->hba_buf;
 struct zfcp_dbf_hba_record_response *VAR_16 = &VAR_15->u.response;
 unsigned long VAR_17;

 FUNC_3(&VAR_7->hba_lock, VAR_17);
 FUNC_2(VAR_15, 0, sizeof(*VAR_15));
 FUNC_5(VAR_15->tag, "resp", VAR_2);
 FUNC_5(VAR_15->tag2, VAR_4, VAR_2);

 VAR_16->fsf_command = VAR_6->fsf_command;
 VAR_16->fsf_reqid = VAR_6->req_id;
 VAR_16->fsf_seqno = VAR_6->seq_no;
 VAR_16->fsf_issued = VAR_6->issued;
 VAR_16->fsf_prot_status = VAR_8->prefix.prot_status;
 VAR_16->fsf_status = VAR_8->header.fsf_status;
 FUNC_1(VAR_16->fsf_prot_status_qual,
        VAR_9, VAR_0);
 FUNC_1(VAR_16->fsf_status_qual,
        VAR_10, VAR_1);
 VAR_16->fsf_req_status = VAR_6->status;
 VAR_16->sbal_first = VAR_6->queue_req.sbal_first;
 VAR_16->sbal_last = VAR_6->queue_req.sbal_last;
 VAR_16->sbal_response = VAR_6->queue_req.sbal_response;
 VAR_16->pool = VAR_6->pool != ((void*)0);
 VAR_16->erp_action = (unsigned long)VAR_6->erp_action;

 switch (VAR_6->fsf_command) {
 case 133:
  if (VAR_6->status & VAR_3)
   break;
  VAR_11 = (struct scsi_cmnd *)VAR_6->data;
  if (VAR_11) {
   VAR_16->u.fcp.cmnd = (unsigned long)VAR_11;
   VAR_16->u.fcp.serial = VAR_11->serial_number;
   VAR_16->u.fcp.data_dir =
    VAR_8->bottom.io.data_direction;
  }
  break;

 case 131:
 case 137:
 case 138:
  VAR_12 = (struct zfcp_port *)VAR_6->data;
  VAR_16->u.port.wwpn = VAR_12->wwpn;
  VAR_16->u.port.d_id = VAR_12->d_id;
  VAR_16->u.port.port_handle = VAR_8->header.port_handle;
  break;

 case 132:
 case 139:
  VAR_13 = (struct zfcp_unit *)VAR_6->data;
  VAR_12 = VAR_13->port;
  VAR_16->u.unit.wwpn = VAR_12->wwpn;
  VAR_16->u.unit.fcp_lun = VAR_13->fcp_lun;
  VAR_16->u.unit.port_handle = VAR_8->header.port_handle;
  VAR_16->u.unit.lun_handle = VAR_8->header.lun_handle;
  break;

 case 130:
  VAR_14 = (struct zfcp_send_els *)VAR_6->data;
  VAR_16->u.els.d_id = VAR_8->bottom.support.d_id;
  VAR_16->u.els.ls_code = VAR_14->ls_code >> 24;
  break;

 case 140:
 case 129:
 case 135:
 case 134:
 case 136:
 case 128:
  break;
 }

 FUNC_0(VAR_7->hba, VAR_5, VAR_15, sizeof(*VAR_15));


 if (VAR_6->fsf_command != 133) {

  char *VAR_18 = (char *)VAR_8 + VAR_8->header.log_start;
  int VAR_19 = VAR_8->header.log_length;
  for (; VAR_19 && !VAR_18[VAR_19 - 1]; VAR_19--);
  FUNC_6(VAR_7->hba, VAR_15, sizeof(*VAR_15), VAR_5, VAR_18,
     VAR_19);
 }

 FUNC_4(&VAR_7->hba_lock, VAR_17);
}
