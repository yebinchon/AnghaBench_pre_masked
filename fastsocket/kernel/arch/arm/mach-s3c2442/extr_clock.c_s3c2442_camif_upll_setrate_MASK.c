
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct clk*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct clk *VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6 = FUNC_2(VAR_4->parent);
 unsigned long VAR_7 = FUNC_0(VAR_0);

 VAR_5 = FUNC_3(VAR_4, VAR_5);

 VAR_7 &= ~VAR_3;

 if (VAR_5 == VAR_6) {
  VAR_7 &= ~VAR_2;
 } else if ((VAR_6 / VAR_5) == 3) {
  VAR_7 |= VAR_2;
  VAR_7 |= VAR_3;
 } else {
  VAR_7 &= ~VAR_1;
  VAR_7 |= VAR_2;
  VAR_7 |= (((VAR_6 / VAR_5) / 2) - 1);
 }

 FUNC_1(VAR_7, VAR_0);

 return 0;
}
