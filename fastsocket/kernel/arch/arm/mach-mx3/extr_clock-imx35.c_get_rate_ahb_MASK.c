
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;
struct arm_ahb_div {unsigned long ahb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 struct arm_ahb_div* VAR_2 ;
 unsigned long FUNC_1 () ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_0 + VAR_1);
 struct arm_ahb_div *VAR_5;
 unsigned long VAR_6 = FUNC_1();

 VAR_5 = &VAR_2[(VAR_4 >> 16) & 0xf];

 return VAR_6 / VAR_5->ahb;
}
