
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
struct cpufreq_freqs {scalar_t__ cpu; int new; int old; } ;
struct TYPE_3__ {int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct cpufreq_policy*,TYPE_1__*,unsigned int,unsigned int,unsigned int*) ;
 int FUNC_1 (struct cpufreq_freqs*,int ) ;
 TYPE_1__* VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (unsigned int) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct cpufreq_policy *VAR_6,
 unsigned int VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9 = 0;
 struct cpufreq_freqs VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_6, VAR_3,
   VAR_7, VAR_8, &VAR_9))
  return -VAR_2;

 if (VAR_4 == VAR_9)
  return 0;

 FUNC_3(&VAR_5);

 VAR_10.old = VAR_3[VAR_4].frequency;
 VAR_10.new = VAR_3[VAR_9].frequency;
 VAR_10.cpu = 0;

 FUNC_1(&VAR_10, VAR_1);
 VAR_11 = FUNC_2(VAR_9);
 FUNC_1(&VAR_10, VAR_0);

 FUNC_4(&VAR_5);

 return VAR_11;
}
