
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int flags; scalar_t__ start; } ;
struct platform_device {int num_resources; int dev; struct resource* resource; } ;
struct TYPE_3__ {scalar_t__ mapbase; int * dev; } ;
struct TYPE_4__ {TYPE_1__ port; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_4)
{
 struct resource *VAR_5 = VAR_4->resource;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_resources; VAR_6++, VAR_5++)
  if (VAR_5->flags & VAR_0)
   break;

 if (VAR_6 < VAR_4->num_resources) {
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_5++) {
   if (VAR_1[VAR_6].port.mapbase != VAR_5->start)
    continue;
   VAR_1[VAR_6].port.dev = &VAR_4->dev;
   FUNC_0(&VAR_2, &VAR_1[VAR_6].port);
  }
 }

 return 0;
}
