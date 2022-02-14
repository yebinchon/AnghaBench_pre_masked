
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_divert_pcb {int hash; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline int
FUNC_1(const struct flow_divert_pcb *VAR_0, const struct flow_divert_pcb *VAR_1)
{
 return FUNC_0(&VAR_0->hash, &VAR_1->hash, sizeof(VAR_0->hash));
}
