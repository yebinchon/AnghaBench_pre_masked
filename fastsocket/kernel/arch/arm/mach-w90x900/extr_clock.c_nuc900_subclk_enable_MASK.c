
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned int cken; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

void FUNC_2(struct clk *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_2->cken;
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_1 + VAR_0);

 if (VAR_3)
  VAR_5 |= VAR_4;
 else
  VAR_5 &= ~VAR_4;

 FUNC_1(VAR_5, VAR_1 + VAR_0);
}
