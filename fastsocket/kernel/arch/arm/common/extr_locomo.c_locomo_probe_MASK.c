
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct resource*,int) ;
 int FUNC_1 (struct platform_device*,int ) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 struct resource *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_3, VAR_2, 0);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_3, 0);
 if (VAR_5 < 0)
  return -VAR_1;

 return FUNC_0(&VAR_3->dev, VAR_4, VAR_5);
}
