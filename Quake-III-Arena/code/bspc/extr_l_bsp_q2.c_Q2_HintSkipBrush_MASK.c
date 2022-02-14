
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t texinfo; } ;
typedef TYPE_1__ dbrushside_t ;
struct TYPE_7__ {int numsides; int firstside; } ;
typedef TYPE_2__ dbrush_t ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_3__* VAR_3 ;

int FUNC_0(dbrush_t *VAR_4)
{
 int VAR_5;
 dbrushside_t *VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4->numsides; VAR_5++)
 {
  VAR_6 = &VAR_2[VAR_4->firstside + VAR_5];
  if (VAR_6->texinfo > 0)
  {
   if (VAR_3[VAR_6->texinfo].flags & (VAR_1|VAR_0))
   {
    return 1;
   }
  }
 }
 return 0;
}
