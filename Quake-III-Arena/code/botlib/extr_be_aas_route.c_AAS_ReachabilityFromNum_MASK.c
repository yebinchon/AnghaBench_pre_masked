
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aas_reachability_s {int dummy; } ;
typedef int aas_reachability_t ;
struct TYPE_2__ {int reachabilitysize; int * reachability; int initialized; } ;


 int FUNC_0 (struct aas_reachability_s*,int *,int) ;
 int FUNC_1 (struct aas_reachability_s*,int ,int) ;
 TYPE_1__ VAR_0 ;

void FUNC_2(int VAR_1, struct aas_reachability_s *VAR_2)
{
 if (!VAR_0.initialized)
 {
  FUNC_1(VAR_2, 0, sizeof(aas_reachability_t));
  return;
 }
 if (VAR_1 < 0 || VAR_1 >= VAR_0.reachabilitysize)
 {
  FUNC_1(VAR_2, 0, sizeof(aas_reachability_t));
  return;
 }
 FUNC_0(VAR_2, &VAR_0.reachability[VAR_1], sizeof(aas_reachability_t));;
}
