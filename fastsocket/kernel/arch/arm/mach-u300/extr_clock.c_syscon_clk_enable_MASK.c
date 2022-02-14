
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int clk_val; scalar_t__ hw_ctrld; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct clk *VAR_3)
{
 unsigned long VAR_4;


 if (VAR_3->hw_ctrld)
  return;

 FUNC_0(&VAR_2, VAR_4);
 FUNC_2(VAR_3->clk_val, VAR_1 + VAR_0);
 FUNC_1(&VAR_2, VAR_4);
}
