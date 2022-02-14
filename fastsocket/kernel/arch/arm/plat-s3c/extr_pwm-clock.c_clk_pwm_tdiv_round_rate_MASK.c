
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_0,
          unsigned long VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_0(VAR_0->parent);
 VAR_3 = VAR_2 / VAR_1;

 if (VAR_3 <= 1 && FUNC_1())
  VAR_3 = 1;
 else if (VAR_3 <= 2)
  VAR_3 = 2;
 else if (VAR_3 <= 4)
  VAR_3 = 4;
 else if (VAR_3 <= 8)
  VAR_3 = 8;
 else
  VAR_3 = 16;

 return VAR_2 / VAR_3;
}
