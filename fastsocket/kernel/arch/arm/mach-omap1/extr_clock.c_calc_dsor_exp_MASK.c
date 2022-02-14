
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned long rate; struct clk* parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct clk *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 struct clk * VAR_4;
 unsigned VAR_5;

 VAR_4 = VAR_1->parent;
 if (FUNC_0(VAR_4 == ((void*)0)))
  return -VAR_0;

 VAR_3 = VAR_4->rate;
 for (VAR_5=0; VAR_5<4; VAR_5++) {
  if (VAR_3 <= VAR_2)
   break;

  VAR_3 /= 2;
 }

 return VAR_5;
}
