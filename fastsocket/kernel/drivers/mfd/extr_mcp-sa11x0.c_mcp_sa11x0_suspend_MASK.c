
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct mcp {int dummy; } ;
typedef int pm_message_t ;
struct TYPE_2__ {int mccr1; int mccr0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mcp* FUNC_0 (struct platform_device*) ;
 TYPE_1__* FUNC_1 (struct mcp*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_3, pm_message_t VAR_4)
{
 struct mcp *VAR_5 = FUNC_0(VAR_3);

 FUNC_1(VAR_5)->mccr0 = VAR_1;
 FUNC_1(VAR_5)->mccr1 = VAR_2;
 VAR_1 &= ~VAR_0;

 return 0;
}
