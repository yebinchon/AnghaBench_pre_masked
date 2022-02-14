
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int maxentities; TYPE_2__* entities; int loaded; } ;
struct TYPE_4__ {scalar_t__ valid; } ;
struct TYPE_5__ {TYPE_1__ i; } ;


 TYPE_3__ VAR_0 ;

int FUNC_0(int VAR_1)
{
 if (!VAR_0.loaded) return 0;

 if (VAR_1 < 0) VAR_1 = -1;
 while(++VAR_1 < VAR_0.maxentities)
 {
  if (VAR_0.entities[VAR_1].i.valid) return VAR_1;
 }
 return 0;
}
