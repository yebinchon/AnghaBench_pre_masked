
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct fc_seq {int dummy; } ;
struct TYPE_5__ {void* node_name; void* port_name; } ;
struct fc_rport_priv {scalar_t__ rp_state; struct fc_lport* local_port; int kref; int rp_mutex; int maxframe_size; scalar_t__ max_seq; void* sp_features; TYPE_1__ ids; } ;
struct TYPE_8__ {int rport_destroy; } ;
struct fc_lport {TYPE_4__ tt; int mfs; scalar_t__ point_to_multipoint; } ;
struct fc_frame {int dummy; } ;
struct TYPE_6__ {int sp_tot_seq; int sp_features; } ;
struct fc_els_flogi {TYPE_3__* fl_cssp; TYPE_2__ fl_csp; int fl_wwnn; int fl_wwpn; } ;
struct TYPE_7__ {int cp_con_seq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fc_rport_priv*,char*,int ) ;
 scalar_t__ FUNC_1 (struct fc_frame*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 struct fc_els_flogi* FUNC_4 (struct fc_frame*,int) ;
 scalar_t__ FUNC_5 (struct fc_frame*) ;
 int FUNC_6 (struct fc_els_flogi*,int ) ;
 int FUNC_7 (struct fc_rport_priv*) ;
 int FUNC_8 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_9 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_10 (struct fc_rport_priv*) ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 void* FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct fc_seq *VAR_2, struct fc_frame *VAR_3,
    void *VAR_4)
{
 struct fc_rport_priv *VAR_5 = VAR_4;
 struct fc_lport *VAR_6 = VAR_5->local_port;
 struct fc_els_flogi *VAR_7 = ((void*)0);
 u16 VAR_8;
 u16 VAR_9;
 u8 VAR_10;

 FUNC_13(&VAR_5->rp_mutex);

 FUNC_0(VAR_5, "Received a PLOGI %s\n", FUNC_2(VAR_3));

 if (VAR_5->rp_state != VAR_1) {
  FUNC_0(VAR_5, "Received a PLOGI response, but in state "
        "%s\n", FUNC_10(VAR_5));
  if (FUNC_1(VAR_3))
   goto err;
  goto out;
 }

 if (FUNC_1(VAR_3)) {
  FUNC_8(VAR_5, VAR_3);
  goto err;
 }

 VAR_10 = FUNC_5(VAR_3);
 if (VAR_10 == VAR_0 &&
     (VAR_7 = FUNC_4(VAR_3, sizeof(*VAR_7))) != ((void*)0)) {
  VAR_5->ids.port_name = FUNC_11(&VAR_7->fl_wwpn);
  VAR_5->ids.node_name = FUNC_11(&VAR_7->fl_wwnn);


  VAR_5->sp_features = FUNC_15(VAR_7->fl_csp.sp_features);

  if (VAR_6->point_to_multipoint)
   FUNC_9(VAR_5, VAR_3);
  VAR_8 = FUNC_15(VAR_7->fl_csp.sp_tot_seq);
  VAR_9 = FUNC_15(VAR_7->fl_cssp[3 - 1].cp_con_seq);
  if (VAR_9 < VAR_8)
   VAR_8 = VAR_9;
  VAR_5->max_seq = VAR_8;
  VAR_5->maxframe_size = FUNC_6(VAR_7, VAR_6->mfs);
  FUNC_7(VAR_5);
 } else
  FUNC_8(VAR_5, VAR_3);

out:
 FUNC_3(VAR_3);
err:
 FUNC_14(&VAR_5->rp_mutex);
 FUNC_12(&VAR_5->kref, VAR_5->local_port->tt.rport_destroy);
}
