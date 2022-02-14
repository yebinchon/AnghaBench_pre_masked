
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
 struct clk VAR_5 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct clk *VAR_6, struct clk *VAR_7)
{
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;



 if (VAR_7 == &VAR_5 || VAR_7 == &VAR_3)
  VAR_10 = 0;
 else if (VAR_7 == &VAR_4)
  VAR_10 = VAR_2;
 else
  return -VAR_0;

 VAR_6->parent = VAR_7;




 FUNC_3(VAR_8);

 VAR_9 = FUNC_0(VAR_1);
 VAR_9 &= ~VAR_2;
 VAR_9 |= VAR_10;
 FUNC_1(VAR_9, VAR_1);

 FUNC_2(VAR_8);

 return 0;
}
