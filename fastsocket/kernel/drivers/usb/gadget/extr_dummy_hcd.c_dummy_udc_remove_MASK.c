
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct dummy {TYPE_1__ gadget; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 struct dummy* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_4 (struct platform_device *VAR_1)
{
 struct dummy *VAR_2 = FUNC_2 (VAR_1);

 FUNC_3 (VAR_1, ((void*)0));
 FUNC_0 (&VAR_2->gadget.dev, &VAR_0);
 FUNC_1 (&VAR_2->gadget.dev);
 return 0;
}
