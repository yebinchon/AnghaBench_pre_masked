
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clksrc_clk {int mask; int shift; int reg_source; struct clk_sources* sources; } ;
struct clk_sources {int nr_sources; struct clk** sources; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 struct clksrc_clk* FUNC_2 (struct clk*) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_1, struct clk *VAR_2)
{
 struct clksrc_clk *VAR_3 = FUNC_2(VAR_1);
 struct clk_sources *VAR_4 = VAR_3->sources;
 u32 VAR_5 = FUNC_0(VAR_3->reg_source);
 int VAR_6 = -1;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->nr_sources; VAR_7++)
  if (VAR_4->sources[VAR_7] == VAR_2) {
   VAR_6 = VAR_7;
   break;
  }

 if (VAR_6 >= 0) {
  VAR_5 &= ~VAR_3->mask;
  VAR_5 |= VAR_6 << VAR_3->shift;

  FUNC_1(VAR_5, VAR_3->reg_source);
  return 0;
 }

 return -VAR_0;
}
