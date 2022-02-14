
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clk {int clk_rst; int fnclksel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = VAR_0 | VAR_1 | FUNC_0(VAR_2->fnclksel);
 FUNC_1(VAR_3, VAR_2->clk_rst);
}
