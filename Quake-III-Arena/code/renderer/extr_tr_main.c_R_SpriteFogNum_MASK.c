
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* origin; scalar_t__ radius; } ;
struct TYPE_11__ {TYPE_3__ e; } ;
typedef TYPE_4__ trRefEntity_t ;
struct TYPE_12__ {scalar_t__** bounds; } ;
typedef TYPE_5__ fog_t ;
struct TYPE_8__ {int rdflags; } ;
struct TYPE_13__ {TYPE_2__* world; TYPE_1__ refdef; } ;
struct TYPE_9__ {int numfogs; TYPE_5__* fogs; } ;


 int VAR_0 ;
 TYPE_6__ VAR_1 ;

int FUNC_0( trRefEntity_t *VAR_2 ) {
 int VAR_3, VAR_4;
 fog_t *VAR_5;

 if ( VAR_1.refdef.rdflags & VAR_0 ) {
  return 0;
 }

 for ( VAR_3 = 1 ; VAR_3 < VAR_1.world->numfogs ; VAR_3++ ) {
  VAR_5 = &VAR_1.world->fogs[VAR_3];
  for ( VAR_4 = 0 ; VAR_4 < 3 ; VAR_4++ ) {
   if ( VAR_2->e.origin[VAR_4] - VAR_2->e.radius >= VAR_5->bounds[1][VAR_4] ) {
    break;
   }
   if ( VAR_2->e.origin[VAR_4] + VAR_2->e.radius <= VAR_5->bounds[0][VAR_4] ) {
    break;
   }
  }
  if ( VAR_4 == 3 ) {
   return VAR_3;
  }
 }

 return 0;
}
