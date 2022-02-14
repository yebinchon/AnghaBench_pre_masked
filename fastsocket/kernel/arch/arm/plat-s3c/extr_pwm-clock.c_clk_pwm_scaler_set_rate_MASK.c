
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
 struct clk* VAR_4 ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static int FUNC_6(struct clk *VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7 = FUNC_3(VAR_5, VAR_6);
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;

 VAR_9 = FUNC_2(VAR_5->parent) / VAR_7;
 VAR_9--;

 FUNC_5(VAR_10);
 VAR_8 = FUNC_0(VAR_0);

 if (VAR_5 == &VAR_4[1]) {
  VAR_8 &= ~VAR_2;
  VAR_8 |= VAR_9 << VAR_3;
 } else {
  VAR_8 &= ~VAR_1;
  VAR_8 |= VAR_9;
 }

 FUNC_1(VAR_8, VAR_0);
 FUNC_4(VAR_10);

 return 0;
}
