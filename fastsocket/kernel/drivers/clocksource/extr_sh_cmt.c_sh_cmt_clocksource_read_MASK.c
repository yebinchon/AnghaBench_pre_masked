
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cmt_priv {unsigned long total_cycles; int lock; scalar_t__ match_value; } ;
struct clocksource {int dummy; } ;
typedef unsigned long cycle_t ;


 struct sh_cmt_priv* FUNC_0 (struct clocksource*) ;
 unsigned long FUNC_1 (struct sh_cmt_priv*,int*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static cycle_t FUNC_5(struct clocksource *VAR_0)
{
 struct sh_cmt_priv *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2, VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_2(&VAR_1->lock, VAR_2);
 VAR_4 = VAR_1->total_cycles;
 VAR_3 = FUNC_1(VAR_1, &VAR_5);

 if (FUNC_4(VAR_5))
  VAR_3 += VAR_1->match_value;
 FUNC_3(&VAR_1->lock, VAR_2);

 return VAR_4 + VAR_3;
}
