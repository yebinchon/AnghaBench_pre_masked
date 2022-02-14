
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_12__ {int frame; int origin; } ;
struct TYPE_14__ {TYPE_2__ e; } ;
typedef TYPE_4__ trRefEntity_t ;
struct TYPE_15__ {int ofsFrames; } ;
typedef TYPE_5__ md3Header_t ;
struct TYPE_16__ {scalar_t__ radius; int localOrigin; } ;
typedef TYPE_6__ md3Frame_t ;
struct TYPE_17__ {scalar_t__** bounds; } ;
typedef TYPE_7__ fog_t ;
typedef int byte ;
struct TYPE_11__ {int rdflags; } ;
struct TYPE_18__ {TYPE_3__* world; TYPE_1__ refdef; } ;
struct TYPE_13__ {int numfogs; TYPE_7__* fogs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 TYPE_8__ VAR_1 ;

int FUNC_1( md3Header_t *VAR_2, trRefEntity_t *VAR_3 ) {
 int VAR_4, VAR_5;
 fog_t *VAR_6;
 md3Frame_t *VAR_7;
 vec3_t VAR_8;

 if ( VAR_1.refdef.rdflags & VAR_0 ) {
  return 0;
 }


 VAR_7 = ( md3Frame_t * ) ( ( byte * ) VAR_2 + VAR_2->ofsFrames ) + VAR_3->e.frame;
 FUNC_0( VAR_3->e.origin, VAR_7->localOrigin, VAR_8 );
 for ( VAR_4 = 1 ; VAR_4 < VAR_1.world->numfogs ; VAR_4++ ) {
  VAR_6 = &VAR_1.world->fogs[VAR_4];
  for ( VAR_5 = 0 ; VAR_5 < 3 ; VAR_5++ ) {
   if ( VAR_8[VAR_5] - VAR_7->radius >= VAR_6->bounds[1][VAR_5] ) {
    break;
   }
   if ( VAR_8[VAR_5] + VAR_7->radius <= VAR_6->bounds[0][VAR_5] ) {
    break;
   }
  }
  if ( VAR_5 == 3 ) {
   return VAR_4;
  }
 }

 return 0;
}
