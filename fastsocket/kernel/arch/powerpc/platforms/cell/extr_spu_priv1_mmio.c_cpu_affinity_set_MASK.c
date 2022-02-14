
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct spu {TYPE_1__* priv1; int node; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {int int_route_RW; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cpumask const*,struct cpumask const*) ;
 struct cpumask* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(struct spu *VAR_0, int VAR_1)
{
 u64 VAR_2;
 u64 VAR_3;

 if (FUNC_4(VAR_0->node)) {
  const struct cpumask *VAR_4 = FUNC_2(VAR_0->node),
   *VAR_5 = FUNC_2(FUNC_0(VAR_1));

  if (!FUNC_1(VAR_4, VAR_5))
   return;
 }

 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = VAR_2 << 48 | VAR_2 << 32 | VAR_2 << 16;
 FUNC_5(&VAR_0->priv1->int_route_RW, VAR_3);
}
