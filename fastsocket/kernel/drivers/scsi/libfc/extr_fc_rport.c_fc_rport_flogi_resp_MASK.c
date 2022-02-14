
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fc_seq {int dummy; } ;
struct TYPE_5__ {scalar_t__ port_name; } ;
struct fc_rport_priv {scalar_t__ rp_state; unsigned int r_a_tov; struct fc_lport* local_port; int kref; int rp_mutex; TYPE_2__ ids; } ;
struct TYPE_6__ {int rport_destroy; } ;
struct fc_lport {scalar_t__ wwpn; TYPE_3__ tt; } ;
struct fc_frame {int dummy; } ;
struct TYPE_4__ {int sp_r_a_tov; } ;
struct fc_els_flogi {TYPE_1__ fl_csp; } ;


 scalar_t__ VAR_0 ;
 struct fc_frame* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fc_rport_priv*,char*,...) ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct fc_frame*) ;
 int FUNC_4 (struct fc_frame*) ;
 struct fc_els_flogi* FUNC_5 (struct fc_frame*,int) ;
 scalar_t__ FUNC_6 (struct fc_frame*) ;
 int FUNC_7 (struct fc_rport_priv*) ;
 int FUNC_8 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_9 (struct fc_rport_priv*,struct fc_frame*) ;
 scalar_t__ FUNC_10 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_11 (struct fc_rport_priv*) ;
 int FUNC_12 (struct fc_rport_priv*,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 unsigned int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(struct fc_seq *VAR_4, struct fc_frame *VAR_5,
    void *VAR_6)
{
 struct fc_rport_priv *VAR_7 = VAR_6;
 struct fc_lport *VAR_8 = VAR_7->local_port;
 struct fc_els_flogi *VAR_9;
 unsigned int VAR_10;

 FUNC_1(VAR_7, "Received a FLOGI %s\n", FUNC_3(VAR_5));

 if (VAR_5 == FUNC_0(-VAR_1))
  goto put;

 FUNC_14(&VAR_7->rp_mutex);

 if (VAR_7->rp_state != VAR_2) {
  FUNC_1(VAR_7, "Received a FLOGI response, but in state "
        "%s\n", FUNC_11(VAR_7));
  if (FUNC_2(VAR_5))
   goto err;
  goto out;
 }

 if (FUNC_2(VAR_5)) {
  FUNC_8(VAR_7, VAR_5);
  goto err;
 }

 if (FUNC_6(VAR_5) != VAR_0)
  goto bad;
 if (FUNC_10(VAR_7, VAR_5))
  goto bad;

 VAR_9 = FUNC_5(VAR_5, sizeof(*VAR_9));
 if (!VAR_9)
  goto bad;
 VAR_10 = FUNC_16(VAR_9->fl_csp.sp_r_a_tov);
 if (VAR_10 > VAR_7->r_a_tov)
  VAR_7->r_a_tov = VAR_10;

 if (VAR_7->ids.port_name < VAR_8->wwpn)
  FUNC_7(VAR_7);
 else
  FUNC_12(VAR_7, VAR_3);
out:
 FUNC_4(VAR_5);
err:
 FUNC_15(&VAR_7->rp_mutex);
put:
 FUNC_13(&VAR_7->kref, VAR_7->local_port->tt.rport_destroy);
 return;
bad:
 FUNC_1(VAR_7, "Bad FLOGI response\n");
 FUNC_9(VAR_7, VAR_5);
 goto out;
}
