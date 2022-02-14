
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct s3c64xx_dvfs {int vddarm_max; int vddarm_min; } ;
struct cpufreq_policy {int dummy; } ;
struct cpufreq_freqs {int old; int new; scalar_t__ flags; scalar_t__ cpu; } ;
struct TYPE_3__ {int frequency; size_t index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct cpufreq_policy*,TYPE_1__*,unsigned int,unsigned int,unsigned int*) ;
 int FUNC_3 (struct cpufreq_freqs*,int ) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 struct s3c64xx_dvfs* VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_7(struct cpufreq_policy *VAR_6,
          unsigned int VAR_7,
          unsigned int VAR_8)
{
 int VAR_9;
 unsigned int VAR_10;
 struct cpufreq_freqs VAR_11;
 struct s3c64xx_dvfs *VAR_12;

 VAR_9 = FUNC_2(VAR_6, VAR_4,
          VAR_7, VAR_8, &VAR_10);
 if (VAR_9 != 0)
  return VAR_9;

 VAR_11.cpu = 0;
 VAR_11.old = FUNC_0(VAR_2) / 1000;
 VAR_11.new = VAR_4[VAR_10].frequency;
 VAR_11.flags = 0;
 VAR_12 = &VAR_3[VAR_4[VAR_10].index];

 if (VAR_11.old == VAR_11.new)
  return 0;

 FUNC_4("cpufreq: Transition %d-%dkHz\n", VAR_11.old, VAR_11.new);

 FUNC_3(&VAR_11, VAR_1);
 VAR_9 = FUNC_1(VAR_2, VAR_11.new * 1000);
 if (VAR_9 < 0) {
  FUNC_5("cpufreq: Failed to set rate %dkHz: %d\n",
         VAR_11.new, VAR_9);
  goto err;
 }
 FUNC_3(&VAR_11, VAR_0);

 FUNC_4("cpufreq: Set actual frequency %lukHz\n",
   FUNC_0(VAR_2) / 1000);

 return 0;

err_clk:
 if (FUNC_1(VAR_2, VAR_11.old * 1000) < 0)
  FUNC_5("Failed to restore original clock rate\n");
err:
 FUNC_3(&VAR_11, VAR_0);

 return VAR_9;
}
