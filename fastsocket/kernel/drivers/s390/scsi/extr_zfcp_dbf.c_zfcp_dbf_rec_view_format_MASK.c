
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int step; int status; int fsf_req; int action; } ;
struct TYPE_8__ {int us; int ps; int as; int fcp_lun; int wwpn; int need; int want; int action; int ref; } ;
struct TYPE_7__ {int fcp_lun; int wwpn; int d_id; int erp_count; int status; int ref; } ;
struct TYPE_6__ {int running; int ready; int total; } ;
struct TYPE_10__ {TYPE_4__ action; TYPE_3__ trigger; TYPE_2__ target; TYPE_1__ thread; } ;
struct zfcp_dbf_rec_record {size_t id; TYPE_5__ u; int id2; } ;
struct debug_view {int dummy; } ;
typedef int debug_info_t ;


 int VAR_0 ;




 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char**,char*,char*,int ) ;
 int FUNC_3 (char**,char*,char*) ;
 char** VAR_1 ;

__attribute__((used)) static int FUNC_4(debug_info_t *VAR_2, struct debug_view *VAR_3,
        char *VAR_4, const char *VAR_5)
{
 struct zfcp_dbf_rec_record *VAR_6 = (struct zfcp_dbf_rec_record *)VAR_5;
 char *VAR_7 = VAR_4;
 char VAR_8[VAR_0 + 1];

 FUNC_0(VAR_8, VAR_6->id2, VAR_0);
 VAR_8[VAR_0] = 0;
 FUNC_3(&VAR_7, "tag", VAR_1[VAR_6->id]);
 FUNC_3(&VAR_7, "hint", VAR_8);
 switch (VAR_6->id) {
 case 129:
  FUNC_2(&VAR_7, "total", "%d", VAR_6->u.thread.total);
  FUNC_2(&VAR_7, "ready", "%d", VAR_6->u.thread.ready);
  FUNC_2(&VAR_7, "running", "%d", VAR_6->u.thread.running);
  break;
 case 130:
  FUNC_2(&VAR_7, "reference", "0x%016Lx", VAR_6->u.target.ref);
  FUNC_2(&VAR_7, "status", "0x%08x", VAR_6->u.target.status);
  FUNC_2(&VAR_7, "erp_count", "%d", VAR_6->u.target.erp_count);
  FUNC_2(&VAR_7, "d_id", "0x%06x", VAR_6->u.target.d_id);
  FUNC_2(&VAR_7, "wwpn", "0x%016Lx", VAR_6->u.target.wwpn);
  FUNC_2(&VAR_7, "fcp_lun", "0x%016Lx", VAR_6->u.target.fcp_lun);
  break;
 case 128:
  FUNC_2(&VAR_7, "reference", "0x%016Lx", VAR_6->u.trigger.ref);
  FUNC_2(&VAR_7, "erp_action", "0x%016Lx", VAR_6->u.trigger.action);
  FUNC_2(&VAR_7, "requested", "%d", VAR_6->u.trigger.want);
  FUNC_2(&VAR_7, "executed", "%d", VAR_6->u.trigger.need);
  FUNC_2(&VAR_7, "wwpn", "0x%016Lx", VAR_6->u.trigger.wwpn);
  FUNC_2(&VAR_7, "fcp_lun", "0x%016Lx", VAR_6->u.trigger.fcp_lun);
  FUNC_2(&VAR_7, "adapter_status", "0x%08x", VAR_6->u.trigger.as);
  FUNC_2(&VAR_7, "port_status", "0x%08x", VAR_6->u.trigger.ps);
  FUNC_2(&VAR_7, "unit_status", "0x%08x", VAR_6->u.trigger.us);
  break;
 case 131:
  FUNC_2(&VAR_7, "erp_action", "0x%016Lx", VAR_6->u.action.action);
  FUNC_2(&VAR_7, "fsf_req", "0x%016Lx", VAR_6->u.action.fsf_req);
  FUNC_2(&VAR_7, "status", "0x%08Lx", VAR_6->u.action.status);
  FUNC_2(&VAR_7, "step", "0x%08Lx", VAR_6->u.action.step);
  break;
 }
 VAR_7 += FUNC_1(VAR_7, "\n");
 return VAR_7 - VAR_4;
}
