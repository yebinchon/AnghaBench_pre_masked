
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fcoe_port {struct bnx2fc_interface* priv; } ;
struct TYPE_2__ {scalar_t__ port_id; } ;
struct fc_rport_priv {scalar_t__ rp_state; TYPE_1__ ids; } ;
struct bnx2fc_rport {struct fc_rport_priv* rdata; struct fcoe_port* port; } ;
struct bnx2fc_interface {struct bnx2fc_hba* hba; } ;
struct bnx2fc_hba {struct bnx2fc_rport** tgt_ofld_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2fc_rport*,char*,...) ;
 scalar_t__ VAR_1 ;

struct bnx2fc_rport *FUNC_1(struct fcoe_port *VAR_2,
          u32 VAR_3)
{
 struct bnx2fc_interface *VAR_4 = VAR_2->priv;
 struct bnx2fc_hba *VAR_5 = VAR_4->hba;
 struct bnx2fc_rport *VAR_6;
 struct fc_rport_priv *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_6 = VAR_5->tgt_ofld_list[VAR_8];
  if ((VAR_6) && (VAR_6->port == VAR_2)) {
   VAR_7 = VAR_6->rdata;
   if (VAR_7->ids.port_id == VAR_3) {
    if (VAR_7->rp_state != VAR_1) {
     FUNC_0(VAR_6, "rport "
      "obtained\n");
     return VAR_6;
    } else {
     FUNC_0(VAR_6, "rport 0x%x "
      "is in DELETED state\n",
      VAR_7->ids.port_id);
     return ((void*)0);
    }
   }
  }
 }
 return ((void*)0);
}
