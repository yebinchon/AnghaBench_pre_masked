
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* kauth_scope_t ;
typedef int kauth_cred_t ;
typedef int kauth_action_t ;
struct TYPE_5__ {int (* ks_callback ) (int ,int ,int ,uintptr_t,uintptr_t,uintptr_t,uintptr_t) ;int ks_flags; TYPE_1__* ks_listeners; int ks_idata; } ;
struct TYPE_4__ {int (* kll_callback ) (int ,int ,int ,uintptr_t,uintptr_t,uintptr_t,uintptr_t) ;int kll_idata; int * kll_listenerp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,uintptr_t,uintptr_t,uintptr_t,uintptr_t) ;
 int FUNC_1 (int ,int ,int ,uintptr_t,uintptr_t,uintptr_t,uintptr_t) ;

int
FUNC_2(kauth_scope_t VAR_6, kauth_cred_t VAR_7, kauth_action_t VAR_8,
    uintptr_t VAR_9, uintptr_t VAR_10, uintptr_t VAR_11, uintptr_t VAR_12)
{
 int VAR_13, VAR_14, VAR_15;


 if (VAR_6->ks_callback != ((void*)0))
  VAR_13 = VAR_6->ks_callback(VAR_7, VAR_6->ks_idata, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 else
  VAR_13 = VAR_2;


 if ((VAR_6->ks_flags & VAR_5) != 0) {
  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {






   if (VAR_6->ks_listeners[VAR_15].kll_listenerp == ((void*)0) ||
    VAR_6->ks_listeners[VAR_15].kll_callback == ((void*)0))
    continue;

   VAR_14 = VAR_6->ks_listeners[VAR_15].kll_callback(
     VAR_7, VAR_6->ks_listeners[VAR_15].kll_idata,
     VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
   if ((VAR_14 == VAR_3) ||
    (VAR_13 == VAR_2))
    VAR_13 = VAR_14;
  }
 }



  return(VAR_13 == VAR_1 ? 0 : VAR_0);
}
