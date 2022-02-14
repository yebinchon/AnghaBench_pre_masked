
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {scalar_t__ dvs; int arm_divisor; int p_divisor; int h_divisor; } ;
struct TYPE_3__ {int armclk; int hclk; int hclk_tns; int fclk; } ;
struct s3c_cpufreq_config {int lock_pll; TYPE_2__ divs; int max; TYPE_1__ freq; } ;


 int FUNC_0 (int ) ;
 struct s3c_cpufreq_config* FUNC_1 () ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (struct seq_file*,int *) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct s3c_cpufreq_config *VAR_2;

 VAR_2 = FUNC_1();
 if (!VAR_2) {
  FUNC_2(VAR_0, "no configuration registered\n");
  return 0;
 }

 FUNC_2(VAR_0, "  FCLK %ld Hz\n", VAR_2->freq.fclk);
 FUNC_2(VAR_0, "  HCLK %ld Hz (%lu.%lu ns)\n",
     VAR_2->freq.hclk, FUNC_0(VAR_2->freq.hclk_tns));
 FUNC_2(VAR_0, "  PCLK %ld Hz\n", VAR_2->freq.hclk);
 FUNC_2(VAR_0, "ARMCLK %ld Hz\n", VAR_2->freq.armclk);
 FUNC_2(VAR_0, "\n");

 FUNC_3(VAR_0, &VAR_2->max);

 FUNC_2(VAR_0, "Divisors: P=%d, H=%d, A=%d, dvs=%s\n",
     VAR_2->divs.h_divisor, VAR_2->divs.p_divisor,
     VAR_2->divs.arm_divisor, VAR_2->divs.dvs ? "on" : "off");
 FUNC_2(VAR_0, "\n");

 FUNC_2(VAR_0, "lock_pll=%u\n", VAR_2->lock_pll);

 return 0;
}
