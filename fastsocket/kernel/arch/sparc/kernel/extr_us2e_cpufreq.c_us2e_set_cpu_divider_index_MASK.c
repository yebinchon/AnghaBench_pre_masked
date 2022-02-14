
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_freqs {unsigned long old; unsigned long new; unsigned int cpu; } ;
typedef int cpumask_t ;
struct TYPE_3__ {int cpus_allowed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cpufreq_freqs*,int ) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__* VAR_3 ;
 unsigned long FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (unsigned int) ;
 unsigned long FUNC_5 (unsigned int) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_10(unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11;
 cpumask_t VAR_12;
 struct cpufreq_freqs VAR_13;

 if (!FUNC_0(VAR_4))
  return;

 VAR_12 = VAR_3->cpus_allowed;
 FUNC_7(VAR_3, FUNC_2(VAR_4));

 VAR_7 = VAR_8 = FUNC_8(VAR_4) / 1000;
 VAR_6 = FUNC_5(VAR_5);
 VAR_9 = FUNC_4(VAR_5);
 VAR_7 /= VAR_9;

 VAR_11 = FUNC_6(VAR_2);

 VAR_10 = FUNC_3(VAR_11);

 VAR_13.old = VAR_8 / VAR_10;
 VAR_13.new = VAR_7;
 VAR_13.cpu = VAR_4;
 FUNC_1(&VAR_13, VAR_1);

 if (VAR_10 != VAR_9)
  FUNC_9(VAR_11, VAR_6, VAR_8 * 1000,
    VAR_10, VAR_9);

 FUNC_1(&VAR_13, VAR_0);

 FUNC_7(VAR_3, VAR_12);
}
