
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fcoe_rport {scalar_t__ time; scalar_t__ fcoe_len; } ;
struct fcoe_ctlr {scalar_t__ port_id; struct fc_lport* lp; } ;
struct fc_rport_identifiers {scalar_t__ port_id; int port_name; int node_name; } ;
struct fc_rport_priv {struct fc_rport_identifiers ids; int disc_id; int * ops; } ;
struct TYPE_4__ {int disc_mutex; int disc_id; } ;
struct TYPE_3__ {int (* rport_logoff ) (struct fc_rport_priv*) ;struct fc_rport_priv* (* rport_create ) (struct fc_lport*,scalar_t__) ;} ;
struct fc_lport {TYPE_2__ disc; TYPE_1__ tt; } ;


 int FUNC_0 (struct fcoe_ctlr*,char*,scalar_t__,char*) ;
 struct fcoe_rport* FUNC_1 (struct fc_rport_priv*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fc_rport_priv* FUNC_4 (struct fc_lport*,scalar_t__) ;
 int FUNC_5 (struct fc_rport_priv*) ;

__attribute__((used)) static void FUNC_6(struct fcoe_ctlr *VAR_1, struct fc_rport_priv *VAR_2)
{
 struct fc_lport *VAR_3 = VAR_1->lp;
 struct fc_rport_priv *VAR_4;
 struct fc_rport_identifiers *VAR_5;
 struct fcoe_rport *VAR_6;
 u32 VAR_7;

 VAR_7 = VAR_2->ids.port_id;
 if (VAR_7 == VAR_1->port_id)
  return;

 FUNC_2(&VAR_3->disc.disc_mutex);
 VAR_4 = VAR_3->tt.rport_create(VAR_3, VAR_7);
 if (!VAR_4) {
  FUNC_3(&VAR_3->disc.disc_mutex);
  return;
 }

 VAR_4->ops = &VAR_0;
 VAR_4->disc_id = VAR_3->disc.disc_id;

 VAR_5 = &VAR_4->ids;
 if ((VAR_5->port_name != -1 && VAR_5->port_name != VAR_2->ids.port_name) ||
     (VAR_5->node_name != -1 && VAR_5->node_name != VAR_2->ids.node_name))
  VAR_3->tt.rport_logoff(VAR_4);
 VAR_5->port_name = VAR_2->ids.port_name;
 VAR_5->node_name = VAR_2->ids.node_name;
 FUNC_3(&VAR_3->disc.disc_mutex);

 VAR_6 = FUNC_1(VAR_4);
 FUNC_0(VAR_1, "vn_add rport %6.6x %s\n",
   VAR_7, VAR_6->fcoe_len ? "old" : "new");
 *VAR_6 = *FUNC_1(VAR_2);
 VAR_6->time = 0;
}
