
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {int cpus_allowed; } ;
struct cpumask {int dummy; } ;


 scalar_t__ FUNC_0 (struct cpumask const*,int *) ;
 struct cpumask* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct spu_context *VAR_0, int VAR_1)
{
 if (FUNC_2(VAR_1)) {
  const struct cpumask *VAR_2 = FUNC_1(VAR_1);

  if (FUNC_0(VAR_2, &VAR_0->cpus_allowed))
   return 1;
 }

 return 0;
}
