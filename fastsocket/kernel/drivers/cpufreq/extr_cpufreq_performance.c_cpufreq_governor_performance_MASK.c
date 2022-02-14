
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int max; } ;




 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,int ,int ) ;
 int FUNC_1 (char*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_1,
     unsigned int VAR_2)
{
 switch (VAR_2) {
 case 128:
 case 129:
  FUNC_1("setting to %u kHz because of event %u\n",
      VAR_1->max, VAR_2);
  FUNC_0(VAR_1, VAR_1->max,
      VAR_0);
  break;
 default:
  break;
 }
 return 0;
}
