
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct modctl {struct modctl* mod_next; } ;
struct TYPE_5__ {int (* dtps_provide_module ) (int ,struct modctl*) ;int (* dtps_provide ) (int ,int *) ;} ;
struct TYPE_6__ {int dtpv_arg; TYPE_1__ dtpv_pops; struct TYPE_6__* dtpv_next; } ;
typedef TYPE_2__ dtrace_provider_t ;
typedef int dtrace_probedesc_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct modctl* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct modctl*) ;

__attribute__((used)) static void
FUNC_5(dtrace_probedesc_t *VAR_5, dtrace_provider_t *VAR_6)
{
 struct modctl *VAR_7;
 int VAR_8 = 0;

 FUNC_0(&VAR_3, VAR_0);

 if (VAR_6 == ((void*)0)) {
  VAR_8 = 1;
  VAR_6 = VAR_2;
 }

 do {



  VAR_6->dtpv_pops.dtps_provide(VAR_6->dtpv_arg, VAR_5);







  FUNC_1(&VAR_4);

  VAR_7 = VAR_1;
  while (VAR_7) {
   VAR_6->dtpv_pops.dtps_provide_module(VAR_6->dtpv_arg, VAR_7);
   VAR_7 = VAR_7->mod_next;
  }

  FUNC_2(&VAR_4);
 } while (VAR_8 && (VAR_6 = VAR_6->dtpv_next) != ((void*)0));
}
