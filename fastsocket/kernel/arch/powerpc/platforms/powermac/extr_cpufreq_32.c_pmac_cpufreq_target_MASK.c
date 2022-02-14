
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cpufreq_policy*,int ,unsigned int,unsigned int,unsigned int*) ;
 unsigned long VAR_1 ;
 int FUNC_1 (unsigned int,int) ;
 int VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static int FUNC_2( struct cpufreq_policy *VAR_4,
     unsigned int VAR_5,
     unsigned int VAR_6)
{
 unsigned int VAR_7 = 0;
 int VAR_8;

 if (FUNC_0(VAR_4, VAR_2,
   VAR_5, VAR_6, &VAR_7))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7, 1);

 VAR_3 = VAR_1 * 1000ul;
 return VAR_8;
}
