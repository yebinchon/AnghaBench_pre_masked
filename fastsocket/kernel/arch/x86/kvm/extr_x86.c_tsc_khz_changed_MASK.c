
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_freqs {unsigned long new; } ;
typedef unsigned long __get_cpu_var ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 () ;
 unsigned long VAR_1 ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 struct cpufreq_freqs *VAR_3 = VAR_2;
 unsigned long VAR_4 = 0;

 if (VAR_2)
  VAR_4 = VAR_3->new;
 else if (!FUNC_0(VAR_0))
  VAR_4 = FUNC_1(FUNC_2());
 if (!VAR_4)
  VAR_4 = VAR_1;
 __get_cpu_var(VAR_5) = VAR_4;
}
