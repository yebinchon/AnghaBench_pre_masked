
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_governor {int governor_list; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct cpufreq_governor *VAR_4)
{
 int VAR_5;

 if (!VAR_4)
  return -VAR_1;

 FUNC_2(&VAR_3);

 VAR_5 = -VAR_0;
 if (FUNC_0(VAR_4->name) == ((void*)0)) {
  VAR_5 = 0;
  FUNC_1(&VAR_4->governor_list, &VAR_2);
 }

 FUNC_3(&VAR_3);
 return VAR_5;
}
