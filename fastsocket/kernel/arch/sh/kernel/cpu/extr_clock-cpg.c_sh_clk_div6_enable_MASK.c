
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int enable_reg; int rate; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct clk*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_0->rate, 0);
 if (VAR_2 == 0) {
  VAR_1 = FUNC_0(VAR_0->enable_reg);
  VAR_1 &= ~0x100;
  FUNC_1(VAR_1, VAR_0->enable_reg);
 }
 return VAR_2;
}
