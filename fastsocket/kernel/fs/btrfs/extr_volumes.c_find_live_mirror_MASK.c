
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct map_lookup {TYPE_2__* stripes; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {scalar_t__ bdev; } ;



__attribute__((used)) static int FUNC_0(struct map_lookup *VAR_0, int VAR_1, int VAR_2,
       int VAR_3)
{
 int VAR_4;
 if (VAR_0->stripes[VAR_3].dev->bdev)
  return VAR_3;
 for (VAR_4 = VAR_1; VAR_4 < VAR_1 + VAR_2; VAR_4++) {
  if (VAR_0->stripes[VAR_4].dev->bdev)
   return VAR_4;
 }



 return VAR_3;
}
