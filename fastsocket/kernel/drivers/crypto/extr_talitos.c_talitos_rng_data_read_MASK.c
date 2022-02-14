
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct talitos_private {scalar_t__ reg; } ;
struct hwrng {scalar_t__ priv; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct talitos_private* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_2, u32 *VAR_3)
{
 struct device *VAR_4 = (struct device *)VAR_2->priv;
 struct talitos_private *VAR_5 = FUNC_0(VAR_4);


 *VAR_3 = FUNC_1(VAR_5->reg + VAR_0);
 *VAR_3 = FUNC_1(VAR_5->reg + VAR_1);

 return sizeof(u32);
}
