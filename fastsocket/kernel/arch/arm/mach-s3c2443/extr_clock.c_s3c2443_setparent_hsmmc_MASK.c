
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ usage; struct clk* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 struct clk VAR_4 ;
 struct clk VAR_5 ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_6, struct clk *VAR_7)
{
 unsigned long VAR_8 = FUNC_0(VAR_1);

 VAR_8 &= ~(VAR_3 |
      VAR_2);

 if (VAR_7 == &VAR_4)
  VAR_8 |= VAR_2;
 else if (VAR_7 == &VAR_5)
  VAR_8 |= VAR_3;
 else
  return -VAR_0;

 if (VAR_6->usage > 0) {
  FUNC_1(VAR_8, VAR_1);
 }

 VAR_6->parent = VAR_7;
 return 0;
}
