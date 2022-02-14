
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ ctrlbit; struct clk* parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 struct clk VAR_5 ;
 struct clk VAR_6 ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_7, struct clk *VAR_8)
{
 unsigned long VAR_9;
 unsigned int VAR_10;

 if (VAR_8 == &VAR_6)
  VAR_10 = 1;
 else if (VAR_8 == &VAR_5)
  VAR_10 = 0;
 else
  return -VAR_0;

 VAR_7->parent = VAR_8;

 VAR_9 = FUNC_0(VAR_4);

 if (VAR_7->ctrlbit == VAR_1) {
  if (VAR_10)
   VAR_9 |= VAR_2;
  else
   VAR_9 &= ~VAR_2;
 } else {
  if (VAR_10)
   VAR_9 |= VAR_3;
  else
   VAR_9 &= ~VAR_3;
 }

 FUNC_1(VAR_9, VAR_4);

 return 0;
}
