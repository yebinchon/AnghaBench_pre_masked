
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_3->parent);
 unsigned long VAR_5 = FUNC_0(VAR_0);

 VAR_5 &= VAR_1;
 VAR_5 >>= (VAR_2-1);

 return VAR_4 / (VAR_5 + 1);
}
