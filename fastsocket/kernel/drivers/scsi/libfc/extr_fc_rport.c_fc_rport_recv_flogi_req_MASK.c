
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fc_seq_els_data {void* explan; void* reason; } ;
struct TYPE_3__ {scalar_t__ port_name; } ;
struct fc_rport_priv {int rp_state; int rp_mutex; TYPE_1__ ids; } ;
struct TYPE_4__ {int (* seq_els_rsp_send ) (struct fc_frame*,int ,struct fc_seq_els_data*) ;int (* frame_send ) (struct fc_lport*,struct fc_frame*) ;struct fc_rport_priv* (* rport_lookup ) (struct fc_lport*,int ) ;} ;
struct fc_disc {int disc_mutex; } ;
struct fc_lport {scalar_t__ wwpn; TYPE_2__ tt; scalar_t__ point_to_multipoint; struct fc_disc disc; } ;
struct fc_frame {int dummy; } ;
struct fc_els_flogi {int fl_cmd; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct fc_rport_priv*,char*,int ) ;
 int FUNC_1 (struct fc_lport*,int ,char*) ;
 int VAR_10 ;
 int FUNC_2 (struct fc_frame*,struct fc_frame*,int ,int ) ;
 int FUNC_3 (struct fc_lport*,struct fc_frame*) ;
 struct fc_frame* FUNC_4 (struct fc_lport*,int) ;
 int FUNC_5 (struct fc_frame*) ;
 struct fc_els_flogi* FUNC_6 (struct fc_frame*,int) ;
 int FUNC_7 (struct fc_frame*) ;
 int FUNC_8 (struct fc_rport_priv*,int ) ;
 int FUNC_9 (struct fc_rport_priv*) ;
 scalar_t__ FUNC_10 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_11 (struct fc_rport_priv*) ;
 int FUNC_12 (struct fc_rport_priv*,int const) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct fc_rport_priv* FUNC_15 (struct fc_lport*,int ) ;
 int FUNC_16 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_17 (struct fc_frame*,int ,struct fc_seq_els_data*) ;

__attribute__((used)) static void FUNC_18(struct fc_lport *VAR_11,
        struct fc_frame *VAR_12)
{
 struct fc_disc *VAR_13;
 struct fc_els_flogi *VAR_14;
 struct fc_rport_priv *VAR_15;
 struct fc_frame *VAR_16 = VAR_12;
 struct fc_seq_els_data VAR_17;
 u32 VAR_18;

 VAR_18 = FUNC_7(VAR_16);

 FUNC_1(VAR_11, VAR_18, "Received FLOGI request\n");

 VAR_13 = &VAR_11->disc;
 FUNC_13(&VAR_13->disc_mutex);

 if (!VAR_11->point_to_multipoint) {
  VAR_17.reason = VAR_8;
  VAR_17.explan = VAR_1;
  goto reject;
 }

 VAR_14 = FUNC_6(VAR_16, sizeof(*VAR_14));
 if (!VAR_14) {
  VAR_17.reason = VAR_7;
  VAR_17.explan = VAR_0;
  goto reject;
 }

 VAR_15 = VAR_11->tt.rport_lookup(VAR_11, VAR_18);
 if (!VAR_15) {
  VAR_17.reason = VAR_6;
  VAR_17.explan = VAR_2;
  goto reject;
 }
 FUNC_13(&VAR_15->rp_mutex);

 FUNC_0(VAR_15, "Received FLOGI in %s state\n",
       FUNC_11(VAR_15));

 switch (VAR_15->rp_state) {
 case 133:
  if (VAR_11->point_to_multipoint)
   break;
 case 135:
  FUNC_14(&VAR_15->rp_mutex);
  VAR_17.reason = VAR_6;
  VAR_17.explan = VAR_2;
  goto reject;
 case 134:
 case 131:
 case 132:
  break;
 case 130:
 case 128:
 case 129:
 case 136:




  FUNC_8(VAR_15, VAR_10);
  FUNC_14(&VAR_15->rp_mutex);
  VAR_17.reason = VAR_5;
  VAR_17.explan = VAR_1;
  goto reject;
 }
 if (FUNC_10(VAR_15, VAR_16)) {
  FUNC_14(&VAR_15->rp_mutex);
  VAR_17.reason = VAR_7;
  VAR_17.explan = VAR_1;
  goto reject;
 }

 VAR_16 = FUNC_4(VAR_11, sizeof(*VAR_14));
 if (!VAR_16)
  goto out;

 FUNC_3(VAR_11, VAR_16);
 VAR_14 = FUNC_6(VAR_16, sizeof(*VAR_14));
 VAR_14->fl_cmd = VAR_3;

 FUNC_2(VAR_16, VAR_12, VAR_9, 0);
 VAR_11->tt.frame_send(VAR_11, VAR_16);

 if (VAR_15->ids.port_name < VAR_11->wwpn)
  FUNC_9(VAR_15);
 else
  FUNC_12(VAR_15, 131);
out:
 FUNC_14(&VAR_15->rp_mutex);
 FUNC_14(&VAR_13->disc_mutex);
 FUNC_5(VAR_12);
 return;

reject:
 FUNC_14(&VAR_13->disc_mutex);
 VAR_11->tt.seq_els_rsp_send(VAR_12, VAR_4, &VAR_17);
 FUNC_5(VAR_12);
}
