
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned long ctrlbit; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_0);

 if (VAR_2)
  VAR_3 |= VAR_1->ctrlbit;
 else
  VAR_3 &= ~VAR_1->ctrlbit;

 FUNC_1(VAR_3, VAR_0);

 return 0;
}
