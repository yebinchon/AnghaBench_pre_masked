
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int origin; int frame; } ;
struct TYPE_13__ {TYPE_2__ e; } ;
typedef TYPE_4__ trRefEntity_t ;
struct TYPE_14__ {int * bounds; } ;
typedef TYPE_5__ md3Frame_t ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_16__ {float value; } ;
struct TYPE_15__ {TYPE_3__* currentModel; } ;
struct TYPE_12__ {int numLods; TYPE_1__** md3; } ;
struct TYPE_10__ {int ofsFrames; } ;


 float FUNC_0 (float,int ) ;
 float FUNC_1 (int ,int ) ;
 int FUNC_2 (float) ;
 TYPE_8__* VAR_0 ;
 TYPE_7__* VAR_1 ;
 TYPE_6__ VAR_2 ;

int FUNC_3( trRefEntity_t *VAR_3 ) {
 float VAR_4;
 float VAR_5, VAR_6;
 float VAR_7;
 md3Frame_t *VAR_8;
 int VAR_9;

 if ( VAR_2.currentModel->numLods < 2 )
 {

  VAR_9 = 0;
 }
 else
 {



  VAR_8 = ( md3Frame_t * ) ( ( ( unsigned char * ) VAR_2.currentModel->md3[0] ) + VAR_2.currentModel->md3[0]->ofsFrames );

  VAR_8 += VAR_3->e.frame;

  VAR_4 = FUNC_1( VAR_8->bounds[0], VAR_8->bounds[1] );

  if ( ( VAR_7 = FUNC_0( VAR_4, VAR_3->e.origin ) ) != 0 )
  {
   VAR_6 = VAR_1->value;
   if (VAR_6 > 20) VAR_6 = 20;
   VAR_5 = 1.0f - VAR_7 * VAR_6;
  }
  else
  {

   VAR_5 = 0;
  }

  VAR_5 *= VAR_2.currentModel->numLods;
  VAR_9 = FUNC_2( VAR_5 );

  if ( VAR_9 < 0 )
  {
   VAR_9 = 0;
  }
  else if ( VAR_9 >= VAR_2.currentModel->numLods )
  {
   VAR_9 = VAR_2.currentModel->numLods - 1;
  }
 }

 VAR_9 += VAR_0->integer;

 if ( VAR_9 >= VAR_2.currentModel->numLods )
  VAR_9 = VAR_2.currentModel->numLods - 1;
 if ( VAR_9 < 0 )
  VAR_9 = 0;

 return VAR_9;
}
