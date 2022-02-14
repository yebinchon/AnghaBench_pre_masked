
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (struct cpumask const*,struct mm_struct*,unsigned long) ;
 unsigned int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 struct cpumask* FUNC_4 (struct cpumask const*,struct mm_struct*,unsigned long,unsigned int) ;

void FUNC_5(const struct cpumask *VAR_0,
        struct mm_struct *VAR_1, unsigned long VAR_2)
{
 if (FUNC_2()) {
  unsigned int VAR_3;

  VAR_3 = FUNC_1();
  VAR_0 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_0)
   FUNC_0(VAR_0, VAR_1, VAR_2);
  FUNC_3();
  return;
 }
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
