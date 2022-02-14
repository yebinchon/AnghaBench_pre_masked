
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_provider_t ;
typedef scalar_t__ dtrace_provider_id_t ;
struct TYPE_3__ {void* dtpr_arg; int * dtpr_provider; } ;
typedef TYPE_1__ dtrace_probe_t ;
typedef int dtrace_id_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void *
FUNC_3(dtrace_provider_id_t VAR_1, dtrace_id_t VAR_2)
{
 dtrace_probe_t *VAR_3;
 void *VAR_4 = ((void*)0);

 FUNC_1(&VAR_0);

 if ((VAR_3 = FUNC_0(VAR_2)) != ((void*)0) &&
     VAR_3->dtpr_provider == (dtrace_provider_t *)VAR_1)
  VAR_4 = VAR_3->dtpr_arg;

 FUNC_2(&VAR_0);

 return (VAR_4);
}
