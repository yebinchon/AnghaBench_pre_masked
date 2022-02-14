
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtimer_list {scalar_t__ expires; int cpu; int function; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct vtimer_list*) ;

__attribute__((used)) static inline void FUNC_3(struct vtimer_list *VAR_1)
{
 FUNC_0(!VAR_1->function);
 FUNC_0(!VAR_1->expires || VAR_1->expires > VAR_0);
 FUNC_0(FUNC_2(VAR_1));
 VAR_1->cpu = FUNC_1();
}
