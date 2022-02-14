
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
struct cpufreq_freqs {unsigned long new; int old; scalar_t__ cpu; } ;
typedef int cycles_t ;
struct TYPE_5__ {unsigned long frequency; } ;
struct TYPE_4__ {unsigned int csel; unsigned int tscale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (struct cpufreq_policy*,TYPE_2__*,unsigned int,unsigned int,unsigned int*) ;
 int FUNC_6 (struct cpufreq_freqs*,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static int FUNC_11(struct cpufreq_policy *VAR_8,
   unsigned int VAR_9, unsigned int VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14, VAR_15;
 struct cpufreq_freqs VAR_16;
 cycles_t VAR_17;

 if (FUNC_5(VAR_8, VAR_6,
   VAR_9, VAR_10, &VAR_11))
  return -VAR_2;

 VAR_15 = VAR_6[VAR_11].frequency;

 VAR_16.old = FUNC_1(0);
 VAR_16.new = VAR_15;
 VAR_16.cpu = 0;

 FUNC_10("cpufreq: changing cclk to %lu; target = %u, oldfreq = %u\n",
   VAR_15, VAR_9, VAR_16.old);

 FUNC_6(&VAR_16, VAR_1);
 FUNC_9(VAR_14);
  VAR_12 = (FUNC_2() & VAR_3) | VAR_7[VAR_11].csel;
  VAR_13 = VAR_7[VAR_11].tscale;
  FUNC_3(VAR_12);

  FUNC_4(VAR_13);
  VAR_17 = FUNC_7();
  FUNC_0();
 VAR_17 += 10;
 VAR_5 += (VAR_17 << VAR_4) - (VAR_17 << VAR_11);
 VAR_4 = VAR_11;
 FUNC_8(VAR_14);

 FUNC_10("cpufreq: done\n");
 FUNC_6(&VAR_16, VAR_0);

 return 0;
}
