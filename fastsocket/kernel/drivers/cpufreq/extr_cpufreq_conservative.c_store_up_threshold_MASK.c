
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {unsigned int down_threshold; unsigned int up_threshold; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct cpufreq_policy *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 VAR_7 = FUNC_2(VAR_4, "%u", &VAR_6);

 FUNC_0(&VAR_1);
 if (VAR_7 != 1 || VAR_6 > 100 ||
   VAR_6 <= VAR_2.down_threshold) {
  FUNC_1(&VAR_1);
  return -VAR_0;
 }

 VAR_2.up_threshold = VAR_6;
 FUNC_1(&VAR_1);

 return VAR_5;
}
