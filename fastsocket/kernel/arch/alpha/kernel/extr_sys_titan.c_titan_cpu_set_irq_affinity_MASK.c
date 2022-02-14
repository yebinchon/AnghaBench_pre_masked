
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpumask_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 unsigned long* VAR_0 ;

__attribute__((used)) static void
FUNC_1(unsigned int VAR_1, cpumask_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  if (FUNC_0(VAR_3, VAR_2))
   VAR_0[VAR_3] |= 1UL << VAR_1;
  else
   VAR_0[VAR_3] &= ~(1UL << VAR_1);
 }

}
