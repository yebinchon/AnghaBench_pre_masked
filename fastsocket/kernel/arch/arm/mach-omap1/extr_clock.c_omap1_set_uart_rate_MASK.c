
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int enable_bit; unsigned long rate; int enable_reg; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct clk * VAR_1, unsigned long VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_1->enable_reg);
 if (VAR_2 == 12000000)
  VAR_3 &= ~(1 << VAR_1->enable_bit);
 else if (VAR_2 == 48000000)
  VAR_3 |= (1 << VAR_1->enable_bit);
 else
  return -VAR_0;
 FUNC_1(VAR_3, VAR_1->enable_reg);
 VAR_1->rate = VAR_2;

 return 0;
}
