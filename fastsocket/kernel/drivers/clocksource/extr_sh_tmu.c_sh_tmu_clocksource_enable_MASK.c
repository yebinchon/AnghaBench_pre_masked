
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_tmu_priv {int rate; } ;
struct clocksource {int shift; int mult; } ;


 int FUNC_0 (int ,int) ;
 struct sh_tmu_priv* FUNC_1 (struct clocksource*) ;
 int FUNC_2 (struct sh_tmu_priv*) ;

__attribute__((used)) static int FUNC_3(struct clocksource *VAR_0)
{
 struct sh_tmu_priv *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;


 VAR_0->shift = 10;
 VAR_0->mult = FUNC_0(VAR_1->rate, VAR_0->shift);
 return 0;
}
