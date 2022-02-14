
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prof_cyclic; scalar_t__ prof_kind; } ;
typedef TYPE_1__ profile_probe_t ;
typedef int profile_probe_percpu_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(void *VAR_4, dtrace_id_t VAR_5, void *VAR_6)
{
#pragma unused(arg,id)
 profile_probe_t *VAR_7 = VAR_6;

 FUNC_0(VAR_7->prof_cyclic == VAR_0);

 if (VAR_7->prof_kind == VAR_2)
  FUNC_2(VAR_7, sizeof (profile_probe_t));
 else
  FUNC_2(VAR_7, sizeof (profile_probe_t) + VAR_1*sizeof(profile_probe_percpu_t));

 FUNC_0(VAR_3 >= 1);
 FUNC_1(&VAR_3, -1);
}
