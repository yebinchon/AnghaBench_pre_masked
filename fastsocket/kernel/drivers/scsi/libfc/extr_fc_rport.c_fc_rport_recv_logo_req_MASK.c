
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fc_rport_priv {int rp_mutex; } ;
struct TYPE_3__ {int disc_mutex; } ;
struct TYPE_4__ {struct fc_rport_priv* (* rport_lookup ) (struct fc_lport*,int ) ;int (* seq_els_rsp_send ) (struct fc_frame*,int ,int *) ;} ;
struct fc_lport {TYPE_1__ disc; TYPE_2__ tt; } ;
struct fc_frame {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_rport_priv*,char*,int ) ;
 int FUNC_1 (struct fc_lport*,int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 int FUNC_4 (struct fc_rport_priv*,int ) ;
 int FUNC_5 (struct fc_rport_priv*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct fc_frame*,int ,int *) ;
 struct fc_rport_priv* FUNC_9 (struct fc_lport*,int ) ;

__attribute__((used)) static void FUNC_10(struct fc_lport *VAR_2, struct fc_frame *VAR_3)
{
 struct fc_rport_priv *VAR_4;
 u32 VAR_5;

 VAR_2->tt.seq_els_rsp_send(VAR_3, VAR_0, ((void*)0));

 VAR_5 = FUNC_3(VAR_3);

 FUNC_6(&VAR_2->disc.disc_mutex);
 VAR_4 = VAR_2->tt.rport_lookup(VAR_2, VAR_5);
 if (VAR_4) {
  FUNC_6(&VAR_4->rp_mutex);
  FUNC_0(VAR_4, "Received LOGO request while in state %s\n",
        FUNC_5(VAR_4));

  FUNC_4(VAR_4, VAR_1);
  FUNC_7(&VAR_4->rp_mutex);
 } else
  FUNC_1(VAR_2, VAR_5,
    "Received LOGO from non-logged-in port\n");
 FUNC_7(&VAR_2->disc.disc_mutex);
 FUNC_2(VAR_3);
}
