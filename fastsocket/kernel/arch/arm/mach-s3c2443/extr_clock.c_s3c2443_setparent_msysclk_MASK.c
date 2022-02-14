
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {struct clk* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 struct clk VAR_4 ;
 struct clk VAR_5 ;
 struct clk VAR_6 ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_7, struct clk *VAR_8)
{
 unsigned long VAR_9 = FUNC_0(VAR_1);

 VAR_9 &= ~(VAR_3 |
      VAR_2);

 if (VAR_8 == &VAR_5)
  VAR_9 |= VAR_3;
 else if (VAR_8 == &VAR_4)
  VAR_9 |= VAR_2;
 else if (VAR_8 != &VAR_6)
  return -VAR_0;

 FUNC_1(VAR_9, VAR_1);
 VAR_7->parent = VAR_8;

 return 0;
}
