
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_freqs {unsigned int cpu; unsigned int old; unsigned int new; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpufreq_freqs*,int ) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_2, unsigned int VAR_3,
    unsigned int VAR_4)
{
 struct cpufreq_freqs VAR_5;

 FUNC_1("Warning: CPU frequency out of sync: cpufreq and timing "
        "core thinks of %u, is %u kHz.\n", VAR_3, VAR_4);

 VAR_5.cpu = VAR_2;
 VAR_5.old = VAR_3;
 VAR_5.new = VAR_4;
 FUNC_0(&VAR_5, VAR_1);
 FUNC_0(&VAR_5, VAR_0);
}
