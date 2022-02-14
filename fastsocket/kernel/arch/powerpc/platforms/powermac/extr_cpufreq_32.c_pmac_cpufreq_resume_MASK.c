
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,int ) ;
 unsigned long FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_7)
{

 if (&FUNC_1)
  VAR_2 = FUNC_1();
 else
  VAR_2 = 0;





 FUNC_0(VAR_6 == VAR_3 ?
    VAR_1 : VAR_0, 0);

 VAR_5 = VAR_2 * 1000ul;

 VAR_4 = 0;
 return 0;
}
