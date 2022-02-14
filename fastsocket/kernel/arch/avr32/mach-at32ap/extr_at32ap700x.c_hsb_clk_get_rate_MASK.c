
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct clk*,unsigned long) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk *VAR_3)
{
 unsigned long VAR_4, VAR_5 = 0;

 VAR_4 = FUNC_3(VAR_0);
 if (VAR_4 & FUNC_1(VAR_1))
  VAR_5 = FUNC_0(VAR_2, VAR_4) + 1;

 return FUNC_2(VAR_3, VAR_5);
}
