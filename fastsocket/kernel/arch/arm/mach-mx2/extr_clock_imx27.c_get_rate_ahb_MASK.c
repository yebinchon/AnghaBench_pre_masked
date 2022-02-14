
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static unsigned long FUNC_3(struct clk *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 if (FUNC_2() >= VAR_1)
  VAR_4 = (FUNC_0(VAR_0) >> 8) & 0x3;
 else
  VAR_4 = (FUNC_0(VAR_0) >> 9) & 0xf;

 VAR_3 = FUNC_1(VAR_2->parent);
 return VAR_3 / (VAR_4 + 1);
}
