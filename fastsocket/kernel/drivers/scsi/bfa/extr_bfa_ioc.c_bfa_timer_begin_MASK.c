
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_timer_s {unsigned int timeout; void (* timercb ) (void*) ;int qe; void* arg; } ;
struct bfa_timer_mod_s {int timer_q; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct bfa_timer_s*) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(struct bfa_timer_mod_s *VAR_0, struct bfa_timer_s *VAR_1,
      void (*VAR_2) (void *), void *VAR_3, unsigned int VAR_4)
{

 FUNC_0(VAR_2 == ((void*)0));
 FUNC_0(FUNC_1(&VAR_0->timer_q, VAR_1));

 VAR_1->timeout = VAR_4;
 VAR_1->timercb = VAR_2;
 VAR_1->arg = VAR_3;

 FUNC_2(&VAR_1->qe, &VAR_0->timer_q);
}
