
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int resource; } ;
struct device {int platform_data; } ;


 int FUNC_0 (int ) ;
 struct platform_device* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_1(VAR_0);



 FUNC_0(VAR_0->platform_data);
 FUNC_0(VAR_1->resource);
}
