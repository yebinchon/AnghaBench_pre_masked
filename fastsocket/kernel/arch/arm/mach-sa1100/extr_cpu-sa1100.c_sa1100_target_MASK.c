
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {unsigned int max; unsigned int min; } ;
struct cpufreq_freqs {unsigned int old; unsigned int new; scalar_t__ cpu; } ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned int VAR_2 ;
 int FUNC_0 (struct cpufreq_freqs*,int ) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct cpufreq_policy *VAR_3,
    unsigned int VAR_4,
    unsigned int VAR_5)
{
 unsigned int VAR_6 = FUNC_3(0);
 unsigned int VAR_7;

 struct cpufreq_freqs VAR_8;
 switch(VAR_5){
 case 128:
  VAR_7 = FUNC_2(VAR_4);
  if (FUNC_4(VAR_7) > VAR_3->max)
   VAR_7--;
  break;
 case 129:
  VAR_7 = FUNC_2(VAR_4);
  if ((FUNC_4(VAR_7) > VAR_4) &&
      (FUNC_4(VAR_7 - 1) >= VAR_3->min))
   VAR_7--;
  break;
 }

 VAR_8.old = VAR_6;
 VAR_8.new = FUNC_4(VAR_7);
 VAR_8.cpu = 0;

 FUNC_0(&VAR_8, VAR_1);

 if (VAR_8.new > VAR_6)
  FUNC_1(VAR_6, VAR_8.new);

 VAR_2 = VAR_7;

 if (VAR_8.new < VAR_6)
  FUNC_1(VAR_6, VAR_8.new);

 FUNC_0(&VAR_8, VAR_0);

 return 0;
}
