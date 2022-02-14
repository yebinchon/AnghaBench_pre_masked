
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {scalar_t__ so_pcb; } ;
struct sockaddr {int dummy; } ;
struct proc {int dummy; } ;
struct TYPE_5__ {scalar_t__ sc_unit; } ;
struct ctl_cb {TYPE_2__ sac; TYPE_1__* kctl; int userdata; } ;
struct TYPE_6__ {int kcs_conn_fail; int kcs_gencnt; int kcs_pcbcount; } ;
struct TYPE_4__ {int (* connect ) (int ,TYPE_2__*,int *) ;int kcb_head; int kctlref; int (* disconnect ) (int ,scalar_t__,int ) ;} ;


 int FUNC_0 (int *,struct ctl_cb*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct socket*,struct sockaddr*,struct proc*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct socket*,int ) ;
 int FUNC_6 (struct socket*,int ) ;
 int FUNC_7 (struct socket*) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (struct socket*) ;
 int FUNC_10 (int ,TYPE_2__*,int *) ;
 int FUNC_11 (int ,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_12(struct socket *VAR_3, struct sockaddr *VAR_4, struct proc *VAR_5)
{
 int VAR_6 = 0;
 struct ctl_cb *VAR_7 = (struct ctl_cb *)VAR_3->so_pcb;

 if (VAR_7 == ((void*)0)) {
  FUNC_4("ctl_connect so_pcb null\n");
 }

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_6) {
  return (VAR_6);
 }

 if (VAR_7->kctl == ((void*)0)) {
  FUNC_4("ctl_connect kctl null\n");
 }

 FUNC_8(VAR_3);
 FUNC_6(VAR_3, 0);
 VAR_6 = (*VAR_7->kctl->connect)(VAR_7->kctl->kctlref, &VAR_7->sac, &VAR_7->userdata);
 FUNC_5(VAR_3, 0);
 if (VAR_6) {
  goto end;
 }
 FUNC_7(VAR_3);

end:
 if (VAR_6 && VAR_7->kctl->disconnect) {
  FUNC_6(VAR_3, 0);
  (*VAR_7->kctl->disconnect)(VAR_7->kctl->kctlref, VAR_7->sac.sc_unit, VAR_7->userdata);
  FUNC_5(VAR_3, 0);
 }
 if (VAR_6) {
  FUNC_9(VAR_3);
  FUNC_2(VAR_0);
  FUNC_0(&VAR_7->kctl->kcb_head, VAR_7, VAR_2);
  VAR_7->kctl = ((void*)0);
  VAR_7->sac.sc_unit = 0;
  VAR_1.kcs_pcbcount--;
  VAR_1.kcs_gencnt++;
  VAR_1.kcs_conn_fail++;
  FUNC_3(VAR_0);
 }
 return (VAR_6);
}
