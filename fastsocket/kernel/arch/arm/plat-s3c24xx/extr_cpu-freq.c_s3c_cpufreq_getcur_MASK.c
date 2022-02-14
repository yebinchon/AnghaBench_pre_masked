
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long h_divisor; unsigned long p_divisor; } ;
struct TYPE_5__ {unsigned long fclk; unsigned long hclk; unsigned long pclk; unsigned long armclk; int hclk_tns; } ;
struct TYPE_4__ {unsigned long frequency; int index; } ;
struct s3c_cpufreq_config {TYPE_3__ divs; TYPE_2__ freq; TYPE_1__ pll; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct s3c_cpufreq_config *VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_5->freq.fclk = VAR_6 = FUNC_1(VAR_2);
 VAR_5->freq.hclk = VAR_8 = FUNC_1(VAR_3);
 VAR_5->freq.pclk = VAR_7 = FUNC_1(VAR_4);
 VAR_5->freq.armclk = VAR_9 = FUNC_1(VAR_1);

 VAR_5->pll.index = FUNC_0(VAR_0);
 VAR_5->pll.frequency = VAR_6;

 VAR_5->freq.hclk_tns = 1000000000 / (VAR_5->freq.hclk / 10);

 VAR_5->divs.h_divisor = VAR_6 / VAR_8;
 VAR_5->divs.p_divisor = VAR_6 / VAR_7;
}
