
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dtpv_arg; int dtpv_pops; } ;
typedef TYPE_1__ dtrace_provider_t ;
struct TYPE_5__ {int dtpr_arg; TYPE_1__* dtpr_provider; int * dtpr_ecb; } ;
typedef TYPE_2__ dtrace_probe_t ;
typedef int dtrace_icookie_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static void
FUNC_2(uintptr_t VAR_2)
{
 dtrace_provider_t *VAR_3;
 void (*VAR_4)(void *, VAR_5, void *);
 dtrace_probe_t *VAR_6;
 dtrace_icookie_t VAR_7;
 int VAR_8;






 VAR_7 = FUNC_0();

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if ((VAR_6 = VAR_1[VAR_8]) == ((void*)0))
   continue;

  if (VAR_6->dtpr_ecb == ((void*)0)) {



   continue;
  }

  VAR_3 = VAR_6->dtpr_provider;
  VAR_4 = *((void(**)(void *, VAR_9, void *))
      ((uintptr_t)&VAR_3->dtpv_pops + VAR_2));

  VAR_4(VAR_3->dtpv_arg, VAR_8 + 1, VAR_6->dtpr_arg);
 }

 FUNC_1(VAR_7);
}
