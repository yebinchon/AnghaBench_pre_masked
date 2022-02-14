
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pf_state {scalar_t__ timeout; TYPE_4__* state_key; } ;
struct TYPE_6__ {struct pf_state* grev1_state; } ;
struct TYPE_5__ {int * pptp_state; } ;
struct TYPE_7__ {TYPE_2__ pptp; TYPE_1__ grev1; } ;
struct pf_app_state {TYPE_3__ u; } ;
struct TYPE_8__ {struct pf_app_state* app_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct pf_state *VAR_2)
{
 struct pf_app_state *VAR_3 = VAR_2->state_key->app_state;
 struct pf_state *VAR_4 = VAR_3->u.pptp.grev1_state;

 if (VAR_4) {
  struct pf_app_state *VAR_5 = VAR_4->state_key->app_state;

  if (VAR_4->timeout < VAR_0)
   VAR_4->timeout = VAR_1;
  VAR_5->u.grev1.pptp_state = ((void*)0);
  VAR_3->u.pptp.grev1_state = ((void*)0);
 }
}
