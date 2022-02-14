
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {scalar_t__ so_usecount; TYPE_2__* so_proto; scalar_t__ so_pcb; } ;
struct ctl_cb {int * mtx; } ;
typedef int lck_mtx_t ;
struct TYPE_4__ {TYPE_1__* pr_domain; } ;
struct TYPE_3__ {int * dom_mtx; } ;


 int FUNC_0 (char*,struct socket*,scalar_t__,...) ;
 int FUNC_1 (struct socket*) ;

__attribute__((used)) static lck_mtx_t *
FUNC_2(struct socket *VAR_0, int VAR_1)
{
#pragma unused(flags)
 struct ctl_cb *VAR_2 = (struct ctl_cb *)VAR_0->so_pcb;

 if (VAR_0->so_pcb) {
  if (VAR_0->so_usecount < 0)
   FUNC_0("ctl_getlock: so=%p usecount=%x lrh= %s\n",
       VAR_0, VAR_0->so_usecount, FUNC_1(VAR_0));
  return (VAR_2->mtx);
 } else {
  FUNC_0("ctl_getlock: so=%p NULL NO so_pcb %s\n",
      VAR_0, FUNC_1(VAR_0));
  return (VAR_0->so_proto->pr_domain->dom_mtx);
 }
}
