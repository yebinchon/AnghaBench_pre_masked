
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long fclk; unsigned long hclk; unsigned long pclk; int hclk_tns; } ;
struct TYPE_6__ {unsigned long h_divisor; unsigned long p_divisor; } ;
struct TYPE_4__ {unsigned long frequency; } ;
struct s3c_cpufreq_config {TYPE_2__ freq; TYPE_3__ divs; TYPE_1__ pll; } ;



__attribute__((used)) static inline void FUNC_0(struct s3c_cpufreq_config *VAR_0)
{
 unsigned long VAR_1 = VAR_0->pll.frequency;

 VAR_0->freq.fclk = VAR_1;
 VAR_0->freq.hclk = VAR_1 / VAR_0->divs.h_divisor;
 VAR_0->freq.pclk = VAR_1 / VAR_0->divs.p_divisor;


 VAR_0->freq.hclk_tns = 1000000000 / (VAR_0->freq.hclk / 10);
}
