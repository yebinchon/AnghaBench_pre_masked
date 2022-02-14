
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int enable_reg; int freq_table; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct clk*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_0,
    unsigned long VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_0->freq_table, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = FUNC_0(VAR_0->enable_reg);
 VAR_3 &= ~0x3f;
 VAR_3 |= VAR_4;
 FUNC_1(VAR_3, VAR_0->enable_reg);
 return 0;
}
