
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
struct cpufreq_freqs {scalar_t__ old; scalar_t__ new; scalar_t__ cpu; } ;
struct TYPE_3__ {scalar_t__ frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct cpufreq_policy*,TYPE_1__*,unsigned int,unsigned int,unsigned int*) ;
 int FUNC_1 (struct cpufreq_freqs*,int ) ;
 TYPE_1__* VAR_3 ;
 size_t FUNC_2 () ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct cpufreq_policy *VAR_4,
   unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = 0;
 struct cpufreq_freqs VAR_8;

 if (FUNC_0(VAR_4, &VAR_3[0],
    VAR_5, VAR_6, &VAR_7))
  return -VAR_2;

 VAR_8.old = VAR_3[FUNC_2()].frequency;
 VAR_8.new = VAR_3[VAR_7].frequency;
 VAR_8.cpu = 0;

 if (VAR_8.old == VAR_8.new)
  return 0;

 FUNC_1(&VAR_8, VAR_1);
 FUNC_3(VAR_7);
 FUNC_1(&VAR_8, VAR_0);

 return 0;
}
