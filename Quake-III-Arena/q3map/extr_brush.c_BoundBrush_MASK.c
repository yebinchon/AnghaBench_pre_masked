
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numpoints; int * p; } ;
typedef TYPE_2__ winding_t ;
typedef int qboolean ;
struct TYPE_7__ {scalar_t__* mins; scalar_t__* maxs; int numsides; TYPE_1__* sides; } ;
typedef TYPE_3__ bspbrush_t ;
struct TYPE_5__ {TYPE_2__* winding; } ;


 int FUNC_0 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_2 (bspbrush_t *VAR_4)
{
 int VAR_5, VAR_6;
 winding_t *VAR_7;

 FUNC_1 (VAR_4->mins, VAR_4->maxs);
 for (VAR_5=0 ; VAR_5<VAR_4->numsides ; VAR_5++)
 {
  VAR_7 = VAR_4->sides[VAR_5].winding;
  if (!VAR_7)
   continue;
  for (VAR_6=0 ; VAR_6<VAR_7->numpoints ; VAR_6++)
   FUNC_0 (VAR_7->p[VAR_6], VAR_4->mins, VAR_4->maxs);
 }

 for (VAR_5=0 ; VAR_5<3 ; VAR_5++) {
  if (VAR_4->mins[VAR_5] < VAR_1 || VAR_4->maxs[VAR_5] > VAR_0
   || VAR_4->mins[VAR_5] >= VAR_4->maxs[VAR_5] ) {
   return VAR_2;
  }
 }

 return VAR_3;
}
