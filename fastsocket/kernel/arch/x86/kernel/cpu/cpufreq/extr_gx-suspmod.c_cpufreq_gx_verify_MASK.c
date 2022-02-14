
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cpufreq_policy {unsigned int min; unsigned int max; scalar_t__ cpu; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int *,int *) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_3)
{
 unsigned int VAR_4 = 0;
 u8 VAR_5, VAR_6;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_3->cpu = 0;
 FUNC_0(VAR_3, (VAR_2 / VAR_1),
   VAR_2);







 VAR_4 = FUNC_1(VAR_3->min, &VAR_5, &VAR_6);
 if (VAR_4 < VAR_3->min)
  VAR_4 += VAR_2 / VAR_1;
 VAR_3->min = VAR_4;
 if (VAR_3->min > VAR_3->max)
  VAR_3->max = VAR_4;
 VAR_4 = FUNC_1(VAR_3->max, &VAR_5, &VAR_6);
 if (VAR_4 > VAR_3->max)
  VAR_4 -= VAR_2 / VAR_1;
 VAR_3->max = VAR_4;
 if (VAR_3->max < VAR_3->min)
  VAR_3->max = VAR_3->min;
 FUNC_0(VAR_3, (VAR_2 / VAR_1),
   VAR_2);

 return 0;
}
