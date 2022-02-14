
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct impd1_module {scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct impd1_module* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct device *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct impd1_module *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5;

 VAR_3 &= VAR_2;
 VAR_5 = FUNC_1(VAR_4->base + VAR_0) & ~VAR_2;
 FUNC_2(VAR_5 | VAR_3, VAR_4->base + VAR_0);
}
