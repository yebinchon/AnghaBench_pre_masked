
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (struct platform_device*,int ,char const*) ;

int FUNC_1(struct platform_device *VAR_2, const char *VAR_3)
{
 struct resource *VAR_4 = FUNC_0(VAR_2, VAR_1,
         VAR_3);

 return VAR_4 ? VAR_4->start : -VAR_0;
}
