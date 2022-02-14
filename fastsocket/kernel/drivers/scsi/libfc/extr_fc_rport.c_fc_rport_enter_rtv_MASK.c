
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port_id; } ;
struct fc_rport_priv {int kref; TYPE_1__ ids; struct fc_lport* local_port; } ;
struct TYPE_4__ {int (* elsct_send ) (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_rport_priv*,int) ;} ;
struct fc_lport {int r_a_tov; TYPE_2__ tt; } ;
struct fc_frame {int dummy; } ;
struct fc_els_rtv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_rport_priv*,char*,int ) ;
 int VAR_1 ;
 struct fc_frame* FUNC_1 (struct fc_lport*,int) ;
 int FUNC_2 (struct fc_rport_priv*,struct fc_frame*) ;
 int VAR_2 ;
 int FUNC_3 (struct fc_rport_priv*) ;
 int FUNC_4 (struct fc_rport_priv*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_rport_priv*,int) ;

__attribute__((used)) static void FUNC_7(struct fc_rport_priv *VAR_3)
{
 struct fc_frame *VAR_4;
 struct fc_lport *VAR_5 = VAR_3->local_port;

 FUNC_0(VAR_3, "Port entered RTV state from %s state\n",
       FUNC_3(VAR_3));

 FUNC_4(VAR_3, VAR_1);

 VAR_4 = FUNC_1(VAR_5, sizeof(struct fc_els_rtv));
 if (!VAR_4) {
  FUNC_2(VAR_3, VAR_4);
  return;
 }

 if (!VAR_5->tt.elsct_send(VAR_5, VAR_3->ids.port_id, VAR_4, VAR_0,
      VAR_2, VAR_3,
      2 * VAR_5->r_a_tov))
  FUNC_2(VAR_3, ((void*)0));
 else
  FUNC_5(&VAR_3->kref);
}
