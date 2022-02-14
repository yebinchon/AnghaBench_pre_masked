
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* shader; scalar_t__ fogNum; scalar_t__ dlightBits; int indexes; int numIndexes; int numVertexes; int ** texCoords; TYPE_1__** xstages; int constantColor255; int xyz; } ;
typedef TYPE_3__ shaderCommands_t ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_8__ {scalar_t__ sort; scalar_t__ fogPass; int cullType; int name; } ;
struct TYPE_7__ {int * bundle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (int,int,int) ;
 int FUNC_10 (int,int ,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int,int ,int,int ) ;
 int FUNC_18 () ;
 int FUNC_19 (int,int ,int,int ) ;
 TYPE_6__* VAR_11 ;
 TYPE_5__* VAR_12 ;
 TYPE_3__ VAR_13 ;
 char* FUNC_20 (char*,int ) ;

void FUNC_21( void ) {
 shaderCommands_t *VAR_14;

 VAR_14 = &VAR_13;




 if ( VAR_12->integer ) {


  FUNC_4( FUNC_20("--- RB_StageIteratorLightmappedMultitexture( %s ) ---\n", VAR_13.shader->name) );
 }




 FUNC_0( VAR_14->shader->cullType );




 FUNC_2( VAR_0 );
 FUNC_19( 3, VAR_3, 16, VAR_14->xyz );






 FUNC_14( VAR_1 );
 FUNC_10( 4, VAR_9, 0, VAR_13.constantColor255 );





 FUNC_1( 0 );

 FUNC_14( VAR_8 );
 FUNC_7( &VAR_13.xstages[0]->bundle[0] );
 FUNC_17( 2, VAR_3, 16, VAR_13.texCoords[0][0] );




 FUNC_1( 1 );
 FUNC_13( VAR_7 );
 if ( VAR_11->integer ) {
  FUNC_3( VAR_5 );
 } else {
  FUNC_3( VAR_4 );
 }
 FUNC_7( &VAR_13.xstages[0]->bundle[1] );
 FUNC_14( VAR_8 );
 FUNC_17( 2, VAR_3, 16, VAR_13.texCoords[0][1] );




 if ( &FUNC_15 ) {
  FUNC_15(0, VAR_14->numVertexes);
  FUNC_4( "glLockArraysEXT\n" );
 }

 FUNC_8( VAR_14->numIndexes, VAR_14->indexes );




 FUNC_11( VAR_7 );
 FUNC_12( VAR_8 );

 FUNC_1( 0 );
 if ( VAR_13.dlightBits && VAR_13.shader->sort <= VAR_10 ) {
  FUNC_5();
 }




 if ( VAR_13.fogNum && VAR_13.shader->fogPass ) {
  FUNC_6();
 }




 if ( &FUNC_18 ) {
  FUNC_18();
  FUNC_4( "glUnlockArraysEXT\n" );
 }
}
