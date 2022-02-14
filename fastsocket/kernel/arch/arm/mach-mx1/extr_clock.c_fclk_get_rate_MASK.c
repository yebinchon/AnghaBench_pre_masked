
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_2->parent);

 if (FUNC_0(VAR_0) & VAR_1)
  VAR_3 /= 2;

 return VAR_3;
}
