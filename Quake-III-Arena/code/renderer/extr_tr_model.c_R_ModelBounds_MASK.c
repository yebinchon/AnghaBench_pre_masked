
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qhandle_t ;
struct TYPE_7__ {TYPE_3__** md3; TYPE_1__* bmodel; } ;
typedef TYPE_2__ model_t ;
struct TYPE_8__ {int ofsFrames; } ;
typedef TYPE_3__ md3Header_t ;
struct TYPE_9__ {int * bounds; } ;
typedef TYPE_4__ md3Frame_t ;
typedef int byte ;
struct TYPE_6__ {int * bounds; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3( qhandle_t VAR_0, vec3_t VAR_1, vec3_t VAR_2 ) {
 model_t *VAR_3;
 md3Header_t *VAR_4;
 md3Frame_t *VAR_5;

 VAR_3 = FUNC_0( VAR_0 );

 if ( VAR_3->bmodel ) {
  FUNC_2( VAR_3->bmodel->bounds[0], VAR_1 );
  FUNC_2( VAR_3->bmodel->bounds[1], VAR_2 );
  return;
 }

 if ( !VAR_3->md3[0] ) {
  FUNC_1( VAR_1 );
  FUNC_1( VAR_2 );
  return;
 }

 VAR_4 = VAR_3->md3[0];

 VAR_5 = (md3Frame_t *)( (byte *)VAR_4 + VAR_4->ofsFrames );

 FUNC_2( VAR_5->bounds[0], VAR_1 );
 FUNC_2( VAR_5->bounds[1], VAR_2 );
}
