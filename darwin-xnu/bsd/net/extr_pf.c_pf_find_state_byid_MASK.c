
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pf_state_cmp {int dummy; } ;
struct pf_state {int dummy; } ;
struct TYPE_2__ {int * fcounters; } ;


 size_t VAR_0 ;
 struct pf_state* FUNC_0 (int ,int *,struct pf_state*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

struct pf_state *
FUNC_1(struct pf_state_cmp *VAR_4)
{
 VAR_2.fcounters[VAR_0]++;

 return (FUNC_0(VAR_1, &VAR_3,
     (struct pf_state *)(void *)VAR_4));
}
