
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clksrc_clk {int mask; int shift; struct clk_sources* sources; } ;
struct clk_sources {int nr_sources; struct clk** sources; } ;
struct clk {struct clk* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 struct clksrc_clk* FUNC_2 (struct clk*) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_2, struct clk *VAR_3)
{
 struct clksrc_clk *VAR_4 = FUNC_2(VAR_2);
 struct clk_sources *VAR_5 = VAR_4->sources;
 u32 VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = -1;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5->nr_sources; VAR_8++)
  if (VAR_5->sources[VAR_8] == VAR_3) {
   VAR_7 = VAR_8;
   break;
  }

 if (VAR_7 >= 0) {
  VAR_6 &= ~VAR_4->mask;
  VAR_6 |= VAR_7 << VAR_4->shift;

  FUNC_1(VAR_6, VAR_1);

  VAR_2->parent = VAR_3;
  return 0;
 }

 return -VAR_0;
}
