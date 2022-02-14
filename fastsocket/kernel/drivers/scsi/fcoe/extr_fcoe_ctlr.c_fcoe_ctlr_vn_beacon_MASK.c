
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fcoe_rport {int flags; scalar_t__ time; } ;
struct fcoe_ctlr {scalar_t__ state; scalar_t__ sol_time; struct fc_lport* lp; } ;
struct TYPE_6__ {scalar_t__ node_name; scalar_t__ port_name; int port_id; } ;
struct fc_rport_priv {TYPE_3__ ids; int kref; } ;
struct TYPE_5__ {int rport_destroy; int (* rport_login ) (struct fc_rport_priv*) ;struct fc_rport_priv* (* rport_lookup ) (struct fc_lport*,int ) ;} ;
struct TYPE_4__ {int disc_mutex; } ;
struct fc_lport {TYPE_2__ tt; TYPE_1__ disc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fcoe_ctlr*,char*,int ) ;
 int VAR_4 ;
 struct fcoe_rport* FUNC_1 (struct fc_rport_priv*) ;
 int FUNC_2 (struct fcoe_ctlr*,int ,int ,int ) ;
 int FUNC_3 (struct fcoe_ctlr*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct fc_rport_priv* FUNC_9 (struct fc_lport*,int ) ;
 int FUNC_10 (struct fc_rport_priv*) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct fcoe_ctlr *VAR_6,
    struct fc_rport_priv *VAR_7)
{
 struct fc_lport *VAR_8 = VAR_6->lp;
 struct fc_rport_priv *VAR_9;
 struct fcoe_rport *VAR_10;

 VAR_10 = FUNC_1(VAR_7);
 if (VAR_10->flags & VAR_0) {
  FUNC_2(VAR_6, VAR_1, VAR_4, 0);
  return;
 }
 FUNC_7(&VAR_8->disc.disc_mutex);
 VAR_9 = VAR_8->tt.rport_lookup(VAR_8, VAR_7->ids.port_id);
 if (VAR_9)
  FUNC_4(&VAR_9->kref);
 FUNC_8(&VAR_8->disc.disc_mutex);
 if (VAR_9) {
  if (VAR_9->ids.node_name == VAR_7->ids.node_name &&
      VAR_9->ids.port_name == VAR_7->ids.port_name) {
   VAR_10 = FUNC_1(VAR_9);
   if (!VAR_10->time && VAR_6->state == VAR_2)
    VAR_8->tt.rport_login(VAR_9);
   VAR_10->time = VAR_5;
  }
  FUNC_5(&VAR_9->kref, VAR_8->tt.rport_destroy);
  return;
 }
 if (VAR_6->state != VAR_2)
  return;






 FUNC_0(VAR_6, "beacon from new rport %x. sending claim notify\n",
   VAR_7->ids.port_id);
 if (FUNC_11(VAR_5,
         VAR_6->sol_time + FUNC_6(VAR_3)))
  FUNC_3(VAR_6);
}
