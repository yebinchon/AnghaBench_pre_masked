
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct platform_device {int dummy; } ;
struct m48t59_private {scalar_t__ ioaddr; } ;
struct device {int dummy; } ;


 struct m48t59_private* FUNC_0 (struct platform_device*) ;
 struct platform_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct device *VAR_0, u32 VAR_1, u8 VAR_2)
{
 struct platform_device *VAR_3 = FUNC_1(VAR_0);
 struct m48t59_private *VAR_4 = FUNC_0(VAR_3);

 FUNC_2(VAR_2, VAR_4->ioaddr+VAR_1);
}
