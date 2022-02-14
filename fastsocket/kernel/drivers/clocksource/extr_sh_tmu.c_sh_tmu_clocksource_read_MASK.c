
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_tmu_priv {int dummy; } ;
struct clocksource {int dummy; } ;
typedef int cycle_t ;


 int VAR_0 ;
 struct sh_tmu_priv* FUNC_0 (struct clocksource*) ;
 int FUNC_1 (struct sh_tmu_priv*,int ) ;

__attribute__((used)) static cycle_t FUNC_2(struct clocksource *VAR_1)
{
 struct sh_tmu_priv *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2, VAR_0) ^ 0xffffffff;
}
