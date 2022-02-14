
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_div_mult_table {int nr_divisors; } ;
struct clk {TYPE_1__* freq_table; int enable_reg; } ;
struct TYPE_2__ {unsigned long frequency; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct clk*,TYPE_1__*,int ,struct clk_div_mult_table*,int *) ;
 struct clk_div_mult_table VAR_0 ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_1)
{
 struct clk_div_mult_table *VAR_2 = &VAR_0;
 unsigned int VAR_3;

 FUNC_1(VAR_1, VAR_1->freq_table, VAR_2->nr_divisors,
        VAR_2, ((void*)0));

 VAR_3 = FUNC_0(VAR_1->enable_reg) & 0x003f;

 return VAR_1->freq_table[VAR_3].frequency;
}
