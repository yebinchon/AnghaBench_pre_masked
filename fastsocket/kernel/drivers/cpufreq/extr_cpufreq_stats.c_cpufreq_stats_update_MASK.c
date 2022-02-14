
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_stats {size_t last_index; unsigned long long last_time; int * time_in_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned long long,unsigned long long) ;
 unsigned long long FUNC_2 () ;
 struct cpufreq_stats* FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_2)
{
 struct cpufreq_stats *VAR_3;
 unsigned long long VAR_4;

 VAR_4 = FUNC_2();
 FUNC_4(&VAR_0);
 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3->time_in_state)
  VAR_3->time_in_state[VAR_3->last_index] =
   FUNC_0(VAR_3->time_in_state[VAR_3->last_index],
          FUNC_1(VAR_4, VAR_3->last_time));
 VAR_3->last_time = VAR_4;
 FUNC_5(&VAR_0);
 return 0;
}
