
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct clk*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct clk *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = FUNC_2(VAR_2->parent);
 unsigned long VAR_5 = FUNC_0(VAR_0);

 VAR_3 = FUNC_3(VAR_2, VAR_3);

 if ((VAR_4 / VAR_3) == 2)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 FUNC_1(VAR_5, VAR_0);
 return 0;
}
