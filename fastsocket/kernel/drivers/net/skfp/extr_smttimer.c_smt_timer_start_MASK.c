
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct smt_timer {int tm_token; int tm_delta; struct smt_timer* tm_next; int tm_active; struct s_smc* tm_smc; } ;
struct TYPE_2__ {struct smt_timer* st_queue; } ;
struct s_smc {TYPE_1__ t; } ;


 int VAR_0 ;
 int FUNC_0 (struct s_smc*,int) ;
 int FUNC_1 (struct s_smc*,struct smt_timer*) ;
 int FUNC_2 (struct s_smc*,int ) ;

void FUNC_3(struct s_smc *VAR_1, struct smt_timer *VAR_2, u_long VAR_3,
       u_long VAR_4)
{
 struct smt_timer **VAR_5 ;
 struct smt_timer *VAR_6 ;
 u_long VAR_7 = 0 ;

 VAR_3 /= 16 ;
 if (!VAR_3)
  VAR_3 = 1 ;
 FUNC_1(VAR_1,VAR_2) ;
 VAR_2->tm_smc = VAR_1 ;
 VAR_2->tm_token = VAR_4 ;
 VAR_2->tm_active = VAR_0 ;
 if (!VAR_1->t.st_queue) {
  VAR_1->t.st_queue = VAR_2 ;
  VAR_2->tm_next = ((void*)0);
  VAR_2->tm_delta = VAR_3 ;
  FUNC_0(VAR_1,VAR_3) ;
  return ;
 }



 FUNC_2(VAR_1,0) ;




 VAR_7 = 0 ;
 for (VAR_5 = &VAR_1->t.st_queue ; (VAR_6 = *VAR_5) ; VAR_5 = &VAR_6->tm_next ) {
  if (VAR_7 + VAR_6->tm_delta > VAR_3) {
   break ;
  }
  VAR_7 += VAR_6->tm_delta ;
 }

 *VAR_5 = VAR_2 ;
 VAR_2->tm_next = VAR_6 ;
 VAR_2->tm_delta = VAR_3 - VAR_7 ;
 if (VAR_6)
  VAR_6->tm_delta -= VAR_2->tm_delta ;



 FUNC_0(VAR_1,VAR_1->t.st_queue->tm_delta) ;
}
