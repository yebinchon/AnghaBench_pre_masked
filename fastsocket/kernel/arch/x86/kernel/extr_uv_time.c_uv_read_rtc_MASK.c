
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clocksource {int dummy; } ;
typedef int cycle_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static cycle_t FUNC_3(struct clocksource *VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_1() == 1)
  VAR_4 = 0;
 else
  VAR_4 = (FUNC_0() * VAR_0) % VAR_1;

 return (cycle_t)FUNC_2(VAR_2 | VAR_4);
}
