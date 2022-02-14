
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct fc_seq {int dummy; } ;
struct fc_rport_priv {scalar_t__ rp_state; int r_a_tov; int e_d_tov; TYPE_2__* local_port; int kref; int rp_mutex; } ;
struct fc_frame {int dummy; } ;
struct fc_els_rtv_acc {int rtv_e_d_tov; int rtv_r_a_tov; int rtv_toq; } ;
struct TYPE_3__ {int rport_destroy; } ;
struct TYPE_4__ {TYPE_1__ tt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fc_rport_priv*,char*,int ) ;
 scalar_t__ FUNC_1 (struct fc_frame*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 struct fc_els_rtv_acc* FUNC_4 (struct fc_frame*,int) ;
 scalar_t__ FUNC_5 (struct fc_frame*) ;
 int FUNC_6 (struct fc_rport_priv*) ;
 int FUNC_7 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_8 (struct fc_rport_priv*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct fc_seq *VAR_3, struct fc_frame *VAR_4,
         void *VAR_5)
{
 struct fc_rport_priv *VAR_6 = VAR_5;
 u8 VAR_7;

 FUNC_10(&VAR_6->rp_mutex);

 FUNC_0(VAR_6, "Received a RTV %s\n", FUNC_2(VAR_4));

 if (VAR_6->rp_state != VAR_2) {
  FUNC_0(VAR_6, "Received a RTV response, but in state "
        "%s\n", FUNC_8(VAR_6));
  if (FUNC_1(VAR_4))
   goto err;
  goto out;
 }

 if (FUNC_1(VAR_4)) {
  FUNC_7(VAR_6, VAR_4);
  goto err;
 }

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7 == VAR_0) {
  struct fc_els_rtv_acc *VAR_8;
  u32 VAR_9;
  u32 VAR_10;

  VAR_8 = FUNC_4(VAR_4, sizeof(*VAR_8));
  if (VAR_8) {
   VAR_9 = FUNC_12(VAR_8->rtv_toq);
   VAR_10 = FUNC_12(VAR_8->rtv_r_a_tov);
   if (VAR_10 == 0)
    VAR_10 = 1;
   VAR_6->r_a_tov = VAR_10;
   VAR_10 = FUNC_12(VAR_8->rtv_e_d_tov);
   if (VAR_9 & VAR_1)
    VAR_10 /= 1000000;
   if (VAR_10 == 0)
    VAR_10 = 1;
   VAR_6->e_d_tov = VAR_10;
  }
 }

 FUNC_6(VAR_6);

out:
 FUNC_3(VAR_4);
err:
 FUNC_11(&VAR_6->rp_mutex);
 FUNC_9(&VAR_6->kref, VAR_6->local_port->tt.rport_destroy);
}
