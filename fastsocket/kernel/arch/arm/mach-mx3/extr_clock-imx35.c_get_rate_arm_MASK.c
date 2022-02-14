
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_ahb_div {unsigned long arm; scalar_t__ sel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 struct arm_ahb_div* VAR_2 ;
 unsigned long FUNC_1 () ;

__attribute__((used)) static unsigned long FUNC_2(void)
{
 unsigned long VAR_3 = FUNC_0(VAR_0 + VAR_1);
 struct arm_ahb_div *VAR_4;
 unsigned long VAR_5 = FUNC_1();

 VAR_4 = &VAR_2[(VAR_3 >> 16) & 0xf];
 if (VAR_4->sel)
  VAR_5 = VAR_5 * 2 / 3;

 return VAR_5 / VAR_4->arm;
}
