
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_3)
{
 VAR_3->rate *= VAR_2[(FUNC_0(VAR_0) >> 8) & 0x0003] * VAR_1 ;
}
