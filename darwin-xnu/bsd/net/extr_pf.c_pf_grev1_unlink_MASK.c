
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pf_state {TYPE_2__* state_key; } ;
struct TYPE_5__ {struct pf_state* pptp_state; } ;
struct TYPE_7__ {int * grev1_state; } ;
struct TYPE_8__ {TYPE_1__ grev1; TYPE_3__ pptp; } ;
struct pf_app_state {TYPE_4__ u; } ;
struct TYPE_6__ {struct pf_app_state* app_state; } ;



__attribute__((used)) static void
FUNC_0(struct pf_state *VAR_0)
{
 struct pf_app_state *VAR_1 = VAR_0->state_key->app_state;
 struct pf_state *VAR_2 = VAR_1->u.grev1.pptp_state;

 if (VAR_2) {
  struct pf_app_state *VAR_3 = VAR_2->state_key->app_state;

  VAR_3->u.pptp.grev1_state = ((void*)0);
  VAR_1->u.grev1.pptp_state = ((void*)0);
 }
}
