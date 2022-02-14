
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_state_key {int states; int refcnt; } ;
struct pf_state {struct pf_state_key* state_key; } ;


 int FUNC_0 (int *,struct pf_state*,int ) ;
 int FUNC_1 (int *,struct pf_state*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct pf_state_key *VAR_1, struct pf_state *VAR_2, int VAR_3)
{
 VAR_2->state_key = VAR_1;
 VAR_1->refcnt++;


 if (VAR_3)
  FUNC_1(&VAR_1->states, VAR_2, VAR_0);
 else
  FUNC_0(&VAR_1->states, VAR_2, VAR_0);
}
