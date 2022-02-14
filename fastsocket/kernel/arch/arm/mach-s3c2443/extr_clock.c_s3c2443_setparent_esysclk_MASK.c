
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {struct clk* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 struct clk VAR_3 ;
 struct clk VAR_4 ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_5, struct clk *VAR_6)
{
 unsigned long VAR_7 = FUNC_0(VAR_1);

 if (VAR_6 == &VAR_3)
  VAR_7 |= VAR_2;
 else if (VAR_6 == &VAR_4)
  VAR_7 &= ~VAR_2;
 else
  return -VAR_0;

 FUNC_1(VAR_7, VAR_1);
 VAR_5->parent = VAR_6;

 return 0;
}
