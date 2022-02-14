
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {scalar_t__ numIndexes; scalar_t__* indexes; scalar_t__** xyz; int numPasses; int (* currentStageIteratorFunc ) () ;scalar_t__ numVertexes; TYPE_1__* shader; } ;
typedef TYPE_3__ shaderCommands_t ;
struct TYPE_21__ {scalar_t__ integer; } ;
struct TYPE_20__ {scalar_t__ integer; } ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_18__ {int (* Error ) (int ,char*) ;} ;
struct TYPE_17__ {TYPE_1__* shadowShader; } ;
struct TYPE_15__ {scalar_t__ c_indexes; int c_totalIndexes; int c_vertexes; int c_shaders; } ;
struct TYPE_14__ {scalar_t__ sort; } ;
struct TYPE_13__ {TYPE_2__ pc; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_10__ VAR_3 ;
 TYPE_9__* VAR_4 ;
 TYPE_8__* VAR_5 ;
 TYPE_7__* VAR_6 ;
 TYPE_6__ VAR_7 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 TYPE_3__ VAR_8 ;
 TYPE_4__ VAR_9 ;

void FUNC_7( void ) {
 shaderCommands_t *VAR_10;

 VAR_10 = &VAR_8;

 if (VAR_10->numIndexes == 0) {
  return;
 }

 if (VAR_10->indexes[VAR_1-1] != 0) {
  VAR_7.Error (VAR_0, "RB_EndSurface() - SHADER_MAX_INDEXES hit");
 }
 if (VAR_10->xyz[VAR_2-1][0] != 0) {
  VAR_7.Error (VAR_0, "RB_EndSurface() - SHADER_MAX_VERTEXES hit");
 }

 if ( VAR_8.shader == VAR_9.shadowShader ) {
  FUNC_3();
  return;
 }


 if ( VAR_4->integer && VAR_4->integer < VAR_8.shader->sort ) {
  return;
 }




 VAR_3.pc.c_shaders++;
 VAR_3.pc.c_vertexes += VAR_8.numVertexes;
 VAR_3.pc.c_indexes += VAR_8.numIndexes;
 VAR_3.pc.c_totalIndexes += VAR_8.numIndexes * VAR_8.numPasses;




 VAR_8.currentStageIteratorFunc();




 if ( VAR_6->integer ) {
  FUNC_1 (VAR_10);
 }
 if ( VAR_5->integer ) {
  FUNC_0 (VAR_10);
 }

 VAR_8.numIndexes = 0;

 FUNC_2( "----------\n" );
}
