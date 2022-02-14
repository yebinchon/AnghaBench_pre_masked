
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct faulty_conf {scalar_t__* period; int * counters; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct faulty_conf *VAR_0, int VAR_1)
{
 if (VAR_0->period[VAR_1] == 0 &&
     FUNC_1(&VAR_0->counters[VAR_1]) <= 0)
  return 0;


 if (FUNC_0(&VAR_0->counters[VAR_1])) {
  if (VAR_0->period[VAR_1])
   FUNC_2(&VAR_0->counters[VAR_1], VAR_0->period[VAR_1]);
  return 1;
 }
 return 0;
}
