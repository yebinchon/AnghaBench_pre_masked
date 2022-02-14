
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct omap_device {TYPE_1__ pdev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;

int FUNC_2(struct omap_device *VAR_0)
{
 FUNC_1("omap_device: %s: registering\n", VAR_0->pdev.name);

 return FUNC_0(&VAR_0->pdev);
}
