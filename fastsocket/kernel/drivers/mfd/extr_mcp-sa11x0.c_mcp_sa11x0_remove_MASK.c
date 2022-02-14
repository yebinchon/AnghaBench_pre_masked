
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mcp {int dummy; } ;


 int FUNC_0 (struct mcp*) ;
 struct mcp* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int *) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct mcp *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0, ((void*)0));
 FUNC_0(VAR_1);
 FUNC_3(0x80060000, 0x60);

 return 0;
}
