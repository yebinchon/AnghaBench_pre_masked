
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {scalar_t__ so_pcb; } ;
struct kctl {int kcb_head; int kctlref; int (* disconnect ) (int ,int ,int ) ;} ;
struct TYPE_3__ {int sc_unit; } ;
struct ctl_cb {scalar_t__ usecount; TYPE_1__ sac; struct kctl* kctl; int userdata; } ;
struct TYPE_4__ {int kcs_gencnt; int kcs_pcbcount; } ;


 int FUNC_0 (int *,struct ctl_cb*,int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*,int ,int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct socket*,int ) ;
 int FUNC_5 (struct socket*,int ) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct socket *VAR_3)
{
 struct ctl_cb *VAR_4 = (struct ctl_cb *)VAR_3->so_pcb;

 if ((VAR_4 = (struct ctl_cb *)VAR_3->so_pcb)) {
  struct kctl *VAR_5 = VAR_4->kctl;

  if (VAR_5 && VAR_5->disconnect) {
   FUNC_5(VAR_3, 0);
   (*VAR_5->disconnect)(VAR_5->kctlref, VAR_4->sac.sc_unit,
       VAR_4->userdata);
   FUNC_4(VAR_3, 0);
  }

  FUNC_6(VAR_3);

  FUNC_5(VAR_3, 0);
  FUNC_1(VAR_0);
  VAR_4->kctl = 0;
  VAR_4->sac.sc_unit = 0;
  while (VAR_4->usecount != 0) {
   FUNC_3(&VAR_4->usecount, VAR_0, 0, "kcb->usecount", 0);
  }
  FUNC_0(&VAR_5->kcb_head, VAR_4, VAR_2);
  VAR_1.kcs_pcbcount--;
  VAR_1.kcs_gencnt++;
  FUNC_2(VAR_0);
  FUNC_4(VAR_3, 0);
 }
 return (0);
}
