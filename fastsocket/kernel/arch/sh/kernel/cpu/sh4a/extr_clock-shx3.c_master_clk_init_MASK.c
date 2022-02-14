
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int rate; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int ) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_4)
{
 VAR_4->rate *= VAR_3[(FUNC_0(VAR_0) >> VAR_2) & VAR_1];
}
