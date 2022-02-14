
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ so_pcb; } ;
struct kctl {int kcb_head; } ;
struct ctl_cb {struct kctl* kctl; } ;
struct TYPE_2__ {int kcs_gencnt; int kcs_pcbcount; } ;


 int FUNC_0 (int *,struct ctl_cb*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ctl_cb*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct socket*,int) ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_3)
{
 struct ctl_cb *VAR_4 = (struct ctl_cb *)VAR_3->so_pcb;

 VAR_3->so_pcb = 0;

 if (VAR_4 != 0) {
  struct kctl *VAR_5;
  if ((VAR_5 = VAR_4->kctl) != 0) {
   FUNC_2(VAR_0);
   FUNC_0(&VAR_5->kcb_head, VAR_4, VAR_2);
   VAR_1.kcs_pcbcount--;
   VAR_1.kcs_gencnt++;
   FUNC_3(VAR_0);
  }
  FUNC_1(VAR_4);
 }
 FUNC_4(VAR_3, 1);
 return (0);
}
