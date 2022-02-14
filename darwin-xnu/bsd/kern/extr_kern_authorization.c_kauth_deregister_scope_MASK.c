
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* kauth_scope_t ;
struct TYPE_7__ {TYPE_1__* ks_listeners; } ;
struct TYPE_6__ {int * kll_listenerp; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_5(kauth_scope_t VAR_6)
{
 int VAR_7;

 FUNC_1();

 FUNC_4(&VAR_3, VAR_6, VAR_5);


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_6->ks_listeners[VAR_7].kll_listenerp != ((void*)0)) {
   FUNC_3(&VAR_2, VAR_6->ks_listeners[VAR_7].kll_listenerp, VAR_4);
   VAR_6->ks_listeners[VAR_7].kll_listenerp = ((void*)0);




  }
 }
 FUNC_2();
 FUNC_0(VAR_6, VAR_1);

 return;
}
