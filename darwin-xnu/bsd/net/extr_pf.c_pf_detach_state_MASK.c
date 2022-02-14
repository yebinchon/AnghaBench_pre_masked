
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_state_key {scalar_t__ refcnt; struct pf_state_key* app_state; int states; } ;
struct pf_state {struct pf_state_key* state_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct pf_state_key*) ;
 int FUNC_1 (int *,struct pf_state*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,struct pf_state_key*) ;

__attribute__((used)) static void
FUNC_3(struct pf_state *VAR_9, int VAR_10)
{
 struct pf_state_key *VAR_11 = VAR_9->state_key;

 if (VAR_11 == ((void*)0))
  return;

 VAR_9->state_key = ((void*)0);
 FUNC_1(&VAR_11->states, VAR_9, VAR_2);
 if (--VAR_11->refcnt == 0) {
  if (!(VAR_10 & VAR_0))
   FUNC_0(VAR_5,
       &VAR_7, VAR_11);
  if (!(VAR_10 & VAR_1))
   FUNC_0(VAR_6,
       &VAR_8, VAR_11);
  if (VAR_11->app_state)
   FUNC_2(&VAR_3, VAR_11->app_state);
  FUNC_2(&VAR_4, VAR_11);
 }
}
