
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned long rate; int parent; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (unsigned long) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_3 (unsigned long) ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (unsigned long,int ) ;
 unsigned long FUNC_6 (int ) ;
 unsigned long FUNC_7 (struct clk*,unsigned long) ;
 struct clk VAR_6 ;
 struct clk VAR_7 ;

__attribute__((used)) static int FUNC_8(struct clk *VAR_8, unsigned long VAR_9)
{
 unsigned long VAR_10, VAR_11, VAR_12 = FUNC_7(VAR_8, VAR_9);

 if (VAR_12 == 0)
  return -VAR_0;

 if (VAR_8 == &VAR_6) {
  VAR_10 = VAR_2 |
   VAR_1;
  VAR_11 = FUNC_1(VAR_12) |
   FUNC_0((VAR_12 + 1) / 2);
 } else if (VAR_8 == &VAR_7) {
  VAR_10 = VAR_4 |
   VAR_3;
  VAR_11 = FUNC_3(VAR_12) |
   FUNC_2((VAR_12 + 1) / 2);
 } else
  return -VAR_0;

 VAR_8->rate = FUNC_6(VAR_8->parent) / VAR_12;
 FUNC_5(((FUNC_4(VAR_5) & ~VAR_10) | VAR_11),
  VAR_5);
 return VAR_8->rate;
}
