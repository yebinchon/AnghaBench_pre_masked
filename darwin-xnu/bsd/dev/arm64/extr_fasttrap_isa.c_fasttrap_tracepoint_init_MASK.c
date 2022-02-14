
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int proc_t ;
typedef int fasttrap_tracepoint_t ;
typedef int fasttrap_probe_type_t ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;

int
FUNC_3(proc_t *VAR_0, fasttrap_tracepoint_t *VAR_1,
    user_addr_t VAR_2, fasttrap_probe_type_t VAR_3)
{
 if (FUNC_2(VAR_0)) {
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 } else {
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 }
}
