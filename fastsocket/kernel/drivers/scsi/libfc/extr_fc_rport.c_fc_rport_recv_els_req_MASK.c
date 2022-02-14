
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fc_seq_els_data {int explan; int reason; } ;
struct fc_rport_priv {int rp_state; int rp_mutex; } ;
struct TYPE_4__ {int (* seq_els_rsp_send ) (struct fc_frame*,int const,struct fc_seq_els_data*) ;struct fc_rport_priv* (* rport_lookup ) (struct fc_lport*,int ) ;} ;
struct TYPE_3__ {int disc_mutex; } ;
struct fc_lport {TYPE_2__ tt; TYPE_1__ disc; } ;
struct fc_frame {int dummy; } ;



 int VAR_0 ;
 int const VAR_1 ;



 int VAR_2 ;






 int FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_4 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_5 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_6 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct fc_rport_priv* FUNC_9 (struct fc_lport*,int ) ;
 int FUNC_10 (struct fc_frame*,int const,struct fc_seq_els_data*) ;
 int FUNC_11 (struct fc_frame*,int const,struct fc_seq_els_data*) ;
 int FUNC_12 (struct fc_frame*,int const,struct fc_seq_els_data*) ;

__attribute__((used)) static void FUNC_13(struct fc_lport *VAR_3, struct fc_frame *VAR_4)
{
 struct fc_rport_priv *VAR_5;
 struct fc_seq_els_data VAR_6;

 FUNC_7(&VAR_3->disc.disc_mutex);
 VAR_5 = VAR_3->tt.rport_lookup(VAR_3, FUNC_2(VAR_4));
 if (!VAR_5) {
  FUNC_8(&VAR_3->disc.disc_mutex);
  goto reject;
 }
 FUNC_7(&VAR_5->rp_mutex);
 FUNC_8(&VAR_3->disc.disc_mutex);

 switch (VAR_5->rp_state) {
 case 130:
 case 128:
 case 129:
 case 131:
  break;
 default:
  FUNC_8(&VAR_5->rp_mutex);
  goto reject;
 }

 switch (FUNC_1(VAR_4)) {
 case 136:
  FUNC_4(VAR_5, VAR_4);
  break;
 case 135:
  FUNC_5(VAR_5, VAR_4);
  break;
 case 137:
  FUNC_3(VAR_5, VAR_4);
  break;
 case 132:
  VAR_3->tt.seq_els_rsp_send(VAR_4, 132, ((void*)0));
  FUNC_0(VAR_4);
  break;
 case 134:
  VAR_3->tt.seq_els_rsp_send(VAR_4, 134, ((void*)0));
  FUNC_0(VAR_4);
  break;
 case 133:
  FUNC_6(VAR_5, VAR_4);
  break;
 default:
  FUNC_0(VAR_4);
  break;
 }

 FUNC_8(&VAR_5->rp_mutex);
 return;

reject:
 VAR_6.reason = VAR_2;
 VAR_6.explan = VAR_0;
 VAR_3->tt.seq_els_rsp_send(VAR_4, VAR_1, &VAR_6);
 FUNC_0(VAR_4);
}
