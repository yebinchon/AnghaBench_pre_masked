
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_governor {int governor_list; int rating; } ;


 struct cpuidle_governor* VAR_0 ;
 int VAR_1 ;
 struct cpuidle_governor* FUNC_0 (int ) ;
 int FUNC_1 (struct cpuidle_governor*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cpuidle_governor *VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_3(&VAR_1);
 if (VAR_2 == VAR_0) {
  struct cpuidle_governor *VAR_3;
  VAR_3 = FUNC_0(VAR_2->rating);
  FUNC_1(VAR_3);
 }
 FUNC_2(&VAR_2->governor_list);
 FUNC_4(&VAR_1);
}
