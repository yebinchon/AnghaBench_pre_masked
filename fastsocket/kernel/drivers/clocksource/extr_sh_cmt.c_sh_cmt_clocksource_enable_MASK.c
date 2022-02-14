
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cmt_priv {int rate; scalar_t__ total_cycles; } ;
struct clocksource {int shift; int mult; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct sh_cmt_priv* FUNC_1 (struct clocksource*) ;
 int FUNC_2 (struct sh_cmt_priv*,int ) ;

__attribute__((used)) static int FUNC_3(struct clocksource *VAR_1)
{
 struct sh_cmt_priv *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_2->total_cycles = 0;

 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3)
  return VAR_3;


 VAR_1->shift = 0;
 VAR_1->mult = FUNC_0(VAR_2->rate, VAR_1->shift);
 return 0;
}
