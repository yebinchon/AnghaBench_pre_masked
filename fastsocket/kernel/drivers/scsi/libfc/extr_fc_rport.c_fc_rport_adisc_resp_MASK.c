
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct fc_seq {int dummy; } ;
struct TYPE_4__ {scalar_t__ port_id; scalar_t__ port_name; scalar_t__ node_name; } ;
struct fc_rport_priv {scalar_t__ rp_state; TYPE_3__* local_port; int kref; int rp_mutex; TYPE_1__ ids; } ;
struct fc_frame {int dummy; } ;
struct fc_els_adisc {int adisc_wwnn; int adisc_wwpn; int adisc_port_id; } ;
struct TYPE_5__ {int rport_destroy; } ;
struct TYPE_6__ {TYPE_2__ tt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fc_rport_priv*,char*,...) ;
 scalar_t__ FUNC_1 (struct fc_frame*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct fc_frame*) ;
 struct fc_els_adisc* FUNC_3 (struct fc_frame*,int) ;
 scalar_t__ FUNC_4 (struct fc_frame*) ;
 int FUNC_5 (struct fc_rport_priv*) ;
 int FUNC_6 (struct fc_rport_priv*) ;
 int FUNC_7 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_8 (struct fc_rport_priv*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct fc_seq *VAR_2, struct fc_frame *VAR_3,
    void *VAR_4)
{
 struct fc_rport_priv *VAR_5 = VAR_4;
 struct fc_els_adisc *VAR_6;
 u8 VAR_7;

 FUNC_11(&VAR_5->rp_mutex);

 FUNC_0(VAR_5, "Received a ADISC response\n");

 if (VAR_5->rp_state != VAR_1) {
  FUNC_0(VAR_5, "Received a ADISC resp but in state %s\n",
        FUNC_8(VAR_5));
  if (FUNC_1(VAR_3))
   goto err;
  goto out;
 }

 if (FUNC_1(VAR_3)) {
  FUNC_7(VAR_5, VAR_3);
  goto err;
 }






 VAR_7 = FUNC_4(VAR_3);
 VAR_6 = FUNC_3(VAR_3, sizeof(*VAR_6));
 if (VAR_7 != VAR_0 || !VAR_6 ||
     FUNC_13(VAR_6->adisc_port_id) != VAR_5->ids.port_id ||
     FUNC_9(&VAR_6->adisc_wwpn) != VAR_5->ids.port_name ||
     FUNC_9(&VAR_6->adisc_wwnn) != VAR_5->ids.node_name) {
  FUNC_0(VAR_5, "ADISC error or mismatch\n");
  FUNC_5(VAR_5);
 } else {
  FUNC_0(VAR_5, "ADISC OK\n");
  FUNC_6(VAR_5);
 }
out:
 FUNC_2(VAR_3);
err:
 FUNC_12(&VAR_5->rp_mutex);
 FUNC_10(&VAR_5->kref, VAR_5->local_port->tt.rport_destroy);
}
