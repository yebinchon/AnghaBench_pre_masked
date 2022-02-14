
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_cpufreq_config {TYPE_1__* info; } ;
struct TYPE_2__ {int (* set_divs ) (struct s3c_cpufreq_config*) ;} ;


 int FUNC_0 (struct s3c_cpufreq_config*) ;

__attribute__((used)) static void FUNC_1(struct s3c_cpufreq_config *VAR_0)
{
 (VAR_0->info->set_divs)(VAR_0);
}
