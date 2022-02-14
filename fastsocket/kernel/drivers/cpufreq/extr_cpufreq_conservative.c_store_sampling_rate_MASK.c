
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int sampling_rate; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct cpufreq_policy *VAR_4,
  const char *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;
 VAR_8 = FUNC_3(VAR_5, "%u", &VAR_7);

 if (VAR_8 != 1)
  return -VAR_0;

 FUNC_1(&VAR_1);
 VAR_2.sampling_rate = FUNC_0(VAR_7, VAR_3);
 FUNC_2(&VAR_1);

 return VAR_6;
}
