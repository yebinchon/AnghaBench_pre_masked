
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pll; } ;
typedef TYPE_1__ reg_clkgen_rw_clk_ctrl ;


 TYPE_1__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_3)
{
 reg_clkgen_rw_clk_ctrl VAR_4;
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 return VAR_4.pll ? 200000 : 6000;
}
