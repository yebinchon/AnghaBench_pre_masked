
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_freqs {scalar_t__ old; scalar_t__ new; int cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct cpufreq_freqs*,int ) ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(int VAR_9, int VAR_10)
{
 struct cpufreq_freqs VAR_11;
 unsigned long VAR_12;
 static unsigned long VAR_13;

 VAR_11.old = VAR_6;
 VAR_11.new = (VAR_9 == VAR_0) ? VAR_7 : VAR_8;
 VAR_11.cpu = FUNC_5();

 if (VAR_11.old == VAR_11.new)
  return 0;

 if (VAR_10)
  FUNC_3(&VAR_11, VAR_3);
 if (VAR_9 == VAR_1 &&
     FUNC_2(VAR_4)) {
  VAR_12 = FUNC_0();
  if (VAR_12 & VAR_5) {
   VAR_13 = VAR_12;
   FUNC_1(0);
  }
 }
 FUNC_4(VAR_9 == VAR_1);
 if (VAR_9 == VAR_0 &&
     FUNC_2(VAR_4)) {
  VAR_12 = FUNC_0();
  if ((VAR_13 & VAR_5) && VAR_12 != VAR_13)
   FUNC_1(VAR_13);
 }
 if (VAR_10)
  FUNC_3(&VAR_11, VAR_2);
 VAR_6 = (VAR_9 == VAR_0) ? VAR_7 : VAR_8;

 return 0;
}
