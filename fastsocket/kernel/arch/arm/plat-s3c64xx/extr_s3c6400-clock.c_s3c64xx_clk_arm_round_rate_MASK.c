
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int parent; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_1,
      unsigned long VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1->parent);
 u32 VAR_4;

 if (VAR_3 < VAR_2)
  return VAR_3;

 VAR_4 = (VAR_3 / VAR_2) - 1;
 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;

 return VAR_3 / (VAR_4 + 1);
}
