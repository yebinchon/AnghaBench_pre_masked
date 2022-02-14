
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_freq_info {int cpufreq_mhz; } ;
struct cpufreq_policy {scalar_t__ cpu; int cur; } ;
struct cpufreq_freqs {int old; int new; scalar_t__ cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pxa3xx_freq_info*) ;
 int FUNC_1 (struct pxa3xx_freq_info*) ;
 scalar_t__ FUNC_2 (struct cpufreq_policy*,int ,unsigned int,unsigned int,int*) ;
 int FUNC_3 (struct cpufreq_freqs*,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,int,int,char*) ;
 struct pxa3xx_freq_info* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct cpufreq_policy *VAR_5,
         unsigned int VAR_6,
         unsigned int VAR_7)
{
 struct pxa3xx_freq_info *VAR_8;
 struct cpufreq_freqs VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 if (VAR_5->cpu != 0)
  return -VAR_2;


 if (FUNC_2(VAR_5, VAR_4,
    VAR_6, VAR_7, &VAR_11))
  return -VAR_2;

 VAR_8 = &VAR_3[VAR_11];

 VAR_9.old = VAR_5->cur;
 VAR_9.new = VAR_8->cpufreq_mhz * 1000;
 VAR_9.cpu = VAR_5->cpu;

 FUNC_6("CPU frequency from %d MHz to %d MHz%s\n",
   VAR_9.old / 1000, VAR_9.new / 1000,
   (VAR_9.old == VAR_9.new) ? " (skipped)" : "");

 if (VAR_9.old == VAR_6)
  return 0;

 FUNC_3(&VAR_9, VAR_1);

 FUNC_5(VAR_10);
 FUNC_1(VAR_8);
 FUNC_0(VAR_8);
 FUNC_4(VAR_10);

 FUNC_3(&VAR_9, VAR_0);

 return 0;
}
