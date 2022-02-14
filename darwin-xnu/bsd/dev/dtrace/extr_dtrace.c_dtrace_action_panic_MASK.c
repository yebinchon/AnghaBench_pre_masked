
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dtpr_name; int dtpr_func; int dtpr_mod; TYPE_1__* dtpr_provider; } ;
typedef TYPE_2__ dtrace_probe_t ;
struct TYPE_7__ {TYPE_2__* dte_probe; } ;
typedef TYPE_3__ dtrace_ecb_t ;
struct TYPE_5__ {int dtpv_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int **,int *,int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_3 (char*,int ,int ,int ,int ,void*) ;

__attribute__((used)) static void
FUNC_4(dtrace_ecb_t *VAR_2)
{
 dtrace_probe_t *VAR_3 = VAR_2->dte_probe;




 FUNC_0(VAR_3 != ((void*)0));

 if (VAR_0)
  return;

 if (VAR_1 != ((void*)0))
  return;

 if (FUNC_2(&VAR_1, ((void*)0), FUNC_1()) != ((void*)0))
  return;






 FUNC_3("dtrace: panic action at probe %s:%s:%s:%s (ecb %p)",
     VAR_3->dtpr_provider->dtpv_name, VAR_3->dtpr_mod,
     VAR_3->dtpr_func, VAR_3->dtpr_name, (void *)VAR_2);





 VAR_1 = ((void*)0);
}
