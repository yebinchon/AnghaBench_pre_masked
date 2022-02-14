
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* kauth_scope_t ;
typedef TYPE_3__* kauth_listener_t ;
struct TYPE_8__ {int kl_idata; int kl_callback; } ;
struct TYPE_7__ {int ks_flags; TYPE_1__* ks_listeners; } ;
struct TYPE_6__ {TYPE_3__* kll_listenerp; int kll_idata; int kll_callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(kauth_scope_t VAR_3, kauth_listener_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_3->ks_listeners[VAR_5].kll_listenerp == ((void*)0)) {
   VAR_3->ks_listeners[VAR_5].kll_callback = VAR_4->kl_callback;
   VAR_3->ks_listeners[VAR_5].kll_idata = VAR_4->kl_idata;
   VAR_3->ks_listeners[VAR_5].kll_listenerp = VAR_4;
   VAR_3->ks_flags |= VAR_2;
   return(0);
  }
 }
 return(VAR_0);
}
