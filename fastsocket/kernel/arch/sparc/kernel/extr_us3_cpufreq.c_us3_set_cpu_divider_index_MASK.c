
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_freqs {unsigned long new; unsigned int cpu; int old; } ;
typedef int cpumask_t ;
struct TYPE_3__ {int cpus_allowed; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct cpufreq_freqs*,int ) ;
 int FUNC_3 (unsigned int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (unsigned int,unsigned long) ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned long) ;

__attribute__((used)) static void FUNC_9(unsigned int VAR_7, unsigned int VAR_8)
{
 unsigned long VAR_9, VAR_10, VAR_11;
 cpumask_t VAR_12;
 struct cpufreq_freqs VAR_13;

 if (!FUNC_1(VAR_7))
  return;

 VAR_12 = VAR_6->cpus_allowed;
 FUNC_6(VAR_6, FUNC_3(VAR_7));

 VAR_10 = FUNC_7(VAR_7) / 1000;
 switch (VAR_8) {
 case 0:
  VAR_9 = VAR_2;
  VAR_10 /= 1;
  break;
 case 1:
  VAR_9 = VAR_3;
  VAR_10 /= 2;
  break;
 case 2:
  VAR_9 = VAR_4;
  VAR_10 /= 32;
  break;

 default:
  FUNC_0();
 };

 VAR_11 = FUNC_5();

 VAR_13.old = FUNC_4(VAR_7, VAR_11);
 VAR_13.new = VAR_10;
 VAR_13.cpu = VAR_7;
 FUNC_2(&VAR_13, VAR_1);

 VAR_11 &= ~VAR_5;
 VAR_11 |= VAR_9;
 FUNC_8(VAR_11);

 FUNC_2(&VAR_13, VAR_0);

 FUNC_6(VAR_6, VAR_12);
}
