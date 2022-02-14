
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct icst525_vco {int s; int v; int r; } ;
struct cpufreq_policy {int cpu; unsigned int max; } ;
struct cpufreq_freqs {scalar_t__ old; scalar_t__ new; int cpu; } ;
typedef int cpumask_t ;
struct TYPE_3__ {int cpus_allowed; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct cpufreq_freqs*,int ) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_6 ;
 void* FUNC_5 (int *,struct icst525_vco) ;
 struct icst525_vco FUNC_6 (int *,unsigned int) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct cpufreq_policy *VAR_7,
     unsigned int VAR_8,
     unsigned int VAR_9)
{
 cpumask_t VAR_10;
 int VAR_11 = VAR_7->cpu;
 struct icst525_vco VAR_12;
 struct cpufreq_freqs VAR_13;
 u_int VAR_14;




 VAR_10 = VAR_6->cpus_allowed;





 FUNC_9(VAR_6, FUNC_4(VAR_11));
 FUNC_0(VAR_11 != FUNC_10());


 VAR_14 = FUNC_1(VAR_1);

 if (FUNC_8()) {
  VAR_12.s = (VAR_14 >> 8) & 7;
 } else if (FUNC_7()) {
  VAR_12.s = 1;
 }
 VAR_12.v = VAR_14 & 255;
 VAR_12.r = 22;
 VAR_13.old = FUNC_5(&VAR_5, VAR_12);




 if (VAR_9 == VAR_4)
  VAR_8 += 999;
 if (VAR_8 > VAR_7->max)
  VAR_8 = VAR_7->max;
 VAR_12 = FUNC_6(&VAR_5, VAR_8);
 VAR_13.new = FUNC_5(&VAR_5, VAR_12);

 VAR_13.cpu = VAR_7->cpu;

 if (VAR_13.old == VAR_13.new) {
  FUNC_9(VAR_6, VAR_10);
  return 0;
 }

 FUNC_3(&VAR_13, VAR_3);

 VAR_14 = FUNC_1(VAR_1);

 if (FUNC_8()) {
  VAR_14 &= 0xfffff800;
  VAR_14 |= VAR_12.s << 8;
 } else if (FUNC_7()) {
  VAR_14 &= 0xffffff00;
 }
 VAR_14 |= VAR_12.v;

 FUNC_2(0xa05f, VAR_0);
 FUNC_2(VAR_14, VAR_1);
 FUNC_2(0, VAR_0);




 FUNC_9(VAR_6, VAR_10);

 FUNC_3(&VAR_13, VAR_2);

 return 0;
}
