
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {struct clk* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 struct clk VAR_5 ;
 struct clk VAR_6 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_7, struct clk *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_0);

 if (VAR_7->parent == VAR_8)
  return 0;

 if (FUNC_2() >= VAR_2) {
  if (VAR_8 == &VAR_5) {
   VAR_9 |= VAR_1;
  } else {
   if (VAR_8 == &VAR_6)
    VAR_9 &= ~VAR_1;
   else
    return -VAR_3;
  }
  FUNC_1(VAR_9, VAR_0);
  VAR_7->parent = VAR_8;
  return 0;
 }
 return -VAR_4;
}
