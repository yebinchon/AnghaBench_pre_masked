
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
typedef struct cpumask const* cpumask_var_t ;


 int VAR_0 ;
 int FUNC_0 (struct cpumask const**,int ) ;
 struct cpumask const* VAR_1 ;
 int FUNC_1 (struct cpumask const*,struct cpumask const*,struct cpumask const*) ;
 int FUNC_2 (struct cpumask const*) ;
 int FUNC_3 (struct cpumask const*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static unsigned int FUNC_5(const struct cpumask *VAR_2,
         const struct cpumask *VAR_3)
{
 int VAR_4 = FUNC_4(0);
 cpumask_var_t VAR_5;

 if (!FUNC_0(&VAR_5, VAR_0))
  return VAR_4;

 FUNC_1(VAR_5, VAR_2, VAR_3);
 FUNC_1(VAR_5, VAR_5, VAR_1);
 VAR_4 = FUNC_3(VAR_5);

 FUNC_2(VAR_5);

 return VAR_4;
}
