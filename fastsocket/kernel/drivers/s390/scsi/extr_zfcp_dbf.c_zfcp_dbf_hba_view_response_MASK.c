
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int d_id; int ls_code; } ;
struct TYPE_8__ {int wwpn; int fcp_lun; int port_handle; int lun_handle; } ;
struct TYPE_7__ {int wwpn; int d_id; int port_handle; } ;
struct TYPE_6__ {int data_dir; int cmnd; int serial; } ;
struct TYPE_10__ {TYPE_4__ els; TYPE_3__ unit; TYPE_2__ port; TYPE_1__ fcp; } ;
struct zfcp_dbf_hba_record_response {int fsf_command; int fsf_reqid; int fsf_seqno; int fsf_prot_status; int fsf_status; int fsf_req_status; int sbal_first; int sbal_last; int sbal_response; int pool; TYPE_5__ u; int fsf_status_qual; int fsf_prot_status_qual; int fsf_issued; } ;
struct timespec {int tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (char**,char*,char*,int,...) ;
 int FUNC_3 (char**,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(char **VAR_3,
           struct zfcp_dbf_hba_record_response *VAR_4)
{
 struct timespec VAR_5;

 FUNC_2(VAR_3, "fsf_command", "0x%08x", VAR_4->fsf_command);
 FUNC_2(VAR_3, "fsf_reqid", "0x%0Lx", VAR_4->fsf_reqid);
 FUNC_2(VAR_3, "fsf_seqno", "0x%08x", VAR_4->fsf_seqno);
 FUNC_1(VAR_4->fsf_issued, &VAR_5);
 FUNC_2(VAR_3, "fsf_issued", "%011lu:%06lu", VAR_5.tv_sec, VAR_5.tv_nsec);
 FUNC_2(VAR_3, "fsf_prot_status", "0x%08x", VAR_4->fsf_prot_status);
 FUNC_2(VAR_3, "fsf_status", "0x%08x", VAR_4->fsf_status);
 FUNC_3(VAR_3, "fsf_prot_status_qual", VAR_4->fsf_prot_status_qual,
        VAR_0, 0, VAR_0);
 FUNC_3(VAR_3, "fsf_status_qual", VAR_4->fsf_status_qual,
        VAR_1, 0, VAR_1);
 FUNC_2(VAR_3, "fsf_req_status", "0x%08x", VAR_4->fsf_req_status);
 FUNC_2(VAR_3, "sbal_first", "0x%02x", VAR_4->sbal_first);
 FUNC_2(VAR_3, "sbal_last", "0x%02x", VAR_4->sbal_last);
 FUNC_2(VAR_3, "sbal_response", "0x%02x", VAR_4->sbal_response);
 FUNC_2(VAR_3, "pool", "0x%02x", VAR_4->pool);

 switch (VAR_4->fsf_command) {
 case 133:
  if (VAR_4->fsf_req_status & VAR_2)
   break;
  FUNC_2(VAR_3, "data_direction", "0x%04x", VAR_4->u.fcp.data_dir);
  FUNC_2(VAR_3, "scsi_cmnd", "0x%0Lx", VAR_4->u.fcp.cmnd);
  FUNC_2(VAR_3, "scsi_serial", "0x%016Lx", VAR_4->u.fcp.serial);
  VAR_3 += FUNC_0(*VAR_3, "\n");
  break;

 case 131:
 case 137:
 case 138:
  FUNC_2(VAR_3, "wwpn", "0x%016Lx", VAR_4->u.port.wwpn);
  FUNC_2(VAR_3, "d_id", "0x%06x", VAR_4->u.port.d_id);
  FUNC_2(VAR_3, "port_handle", "0x%08x", VAR_4->u.port.port_handle);
  break;

 case 132:
 case 139:
  FUNC_2(VAR_3, "wwpn", "0x%016Lx", VAR_4->u.unit.wwpn);
  FUNC_2(VAR_3, "fcp_lun", "0x%016Lx", VAR_4->u.unit.fcp_lun);
  FUNC_2(VAR_3, "port_handle", "0x%08x", VAR_4->u.unit.port_handle);
  FUNC_2(VAR_3, "lun_handle", "0x%08x", VAR_4->u.unit.lun_handle);
  break;

 case 130:
  FUNC_2(VAR_3, "d_id", "0x%06x", VAR_4->u.els.d_id);
  FUNC_2(VAR_3, "ls_code", "0x%02x", VAR_4->u.els.ls_code);
  break;

 case 140:
 case 129:
 case 135:
 case 134:
 case 136:
 case 128:
  break;
 }
}
