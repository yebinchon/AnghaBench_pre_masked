
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned int cken; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

void FUNC_2(struct clk *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_1->cken;
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_0);

 if (VAR_2)
  VAR_4 |= VAR_3;
 else
  VAR_4 &= ~VAR_3;

 FUNC_1(VAR_4, VAR_0);
}
