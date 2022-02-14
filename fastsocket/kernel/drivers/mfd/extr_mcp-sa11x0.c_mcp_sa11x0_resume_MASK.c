
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct mcp {int dummy; } ;
struct TYPE_2__ {int mccr0; int mccr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mcp* FUNC_0 (struct platform_device*) ;
 TYPE_1__* FUNC_1 (struct mcp*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct mcp *VAR_3 = FUNC_0(VAR_2);

 VAR_1 = FUNC_1(VAR_3)->mccr1;
 VAR_0 = FUNC_1(VAR_3)->mccr0;

 return 0;
}
