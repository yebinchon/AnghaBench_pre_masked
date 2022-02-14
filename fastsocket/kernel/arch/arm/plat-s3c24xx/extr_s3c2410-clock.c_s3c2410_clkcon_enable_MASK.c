
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned int ctrlbit; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

int FUNC_2(struct clk *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = VAR_3->ctrlbit;
 unsigned long VAR_6;

 VAR_6 = FUNC_0(VAR_0);

 if (VAR_4)
  VAR_6 |= VAR_5;
 else
  VAR_6 &= ~VAR_5;


 VAR_6 &= ~(VAR_1|VAR_2);

 FUNC_1(VAR_6, VAR_0);

 return 0;
}
