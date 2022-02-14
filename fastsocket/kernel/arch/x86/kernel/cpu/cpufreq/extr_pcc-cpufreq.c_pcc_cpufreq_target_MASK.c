
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pcc_cpu {scalar_t__ input_offset; } ;
struct cpufreq_policy {int cpu; } ;
struct cpufreq_freqs {unsigned int new; int cpu; } ;
struct TYPE_2__ {int status; int command; int nominal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cpufreq_freqs*,int ) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 () ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ VAR_9 ;
 struct pcc_cpu* FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct cpufreq_policy *VAR_10,
         unsigned int VAR_11,
         unsigned int VAR_12)
{
 struct pcc_cpu *VAR_13;
 struct cpufreq_freqs VAR_14;
 u16 VAR_15;
 u32 VAR_16;
 int VAR_17;

 FUNC_9(&VAR_7);
 VAR_17 = VAR_10->cpu;
 VAR_13 = FUNC_8(VAR_6, VAR_17);

 FUNC_1("target: CPU %d should go to target freq: %d "
  "(virtual) input_offset is 0x%x\n",
  VAR_17, VAR_11,
  (VAR_9 + VAR_13->input_offset));

 VAR_14.new = VAR_11;
 VAR_14.cpu = VAR_17;
 FUNC_0(&VAR_14, VAR_4);

 VAR_16 = 0x1 | (((VAR_11 * 100)
          / (FUNC_3(&VAR_8->nominal) * 1000)) << 8);
 FUNC_5(VAR_16,
   (VAR_9 + VAR_13->input_offset));
 FUNC_4(VAR_2, &VAR_8->command);

 FUNC_7();


 FUNC_6((VAR_9 + VAR_13->input_offset), 0, VAR_0);

 VAR_15 = FUNC_2(&VAR_8->status);
 if (VAR_15 != VAR_1) {
  FUNC_1("target: FAILED for cpu %d, with status: 0x%x\n",
   VAR_17, VAR_15);
  goto cmd_incomplete;
 }
 FUNC_4(0, &VAR_8->status);

 FUNC_0(&VAR_14, VAR_3);
 FUNC_1("target: was SUCCESSFUL for cpu %d\n", VAR_17);
 FUNC_10(&VAR_7);

 return 0;

cmd_incomplete:
 FUNC_4(0, &VAR_8->status);
 FUNC_10(&VAR_7);
 return -VAR_5;
}
