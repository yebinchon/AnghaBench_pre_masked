
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prof_cyclic; scalar_t__ prof_kind; } ;
typedef TYPE_1__ profile_probe_t ;
typedef int dtrace_id_t ;
typedef int cyclic_id_list_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3, dtrace_id_t VAR_4, void *VAR_5)
{
 profile_probe_t *VAR_6 = VAR_5;

 FUNC_0(VAR_6->prof_cyclic != VAR_0);
 FUNC_0(FUNC_1(&VAR_2));

#pragma unused(arg,id)
 if (VAR_6->prof_kind == VAR_1) {
  FUNC_3(VAR_6->prof_cyclic);
 } else {
  FUNC_2((cyclic_id_list_t)VAR_6->prof_cyclic);
 }
 VAR_6->prof_cyclic = VAR_0;
}
