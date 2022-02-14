
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__** drv; int global_features; } ;
struct TYPE_5__ {TYPE_1__* interface; } ;
struct TYPE_4__ {int features; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void
FUNC_0(void)
{
 int VAR_2;

 VAR_1->global_features = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1->drv[VAR_2])
   continue;
  if (VAR_1->drv[VAR_2]->interface)
   VAR_1->global_features |= VAR_1->drv[VAR_2]->interface->features;
 }
}
