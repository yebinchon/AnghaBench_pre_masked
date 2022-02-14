
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ sort; scalar_t__ fogPass; int cullType; int name; } ;
typedef TYPE_3__ shader_t ;
struct TYPE_7__ {scalar_t__ colors; } ;
struct TYPE_10__ {TYPE_3__* shader; scalar_t__ fogNum; scalar_t__ dlightBits; int indexes; int numIndexes; TYPE_2__** xstages; int numVertexes; int xyz; int ** texCoords; TYPE_1__ svars; } ;
typedef TYPE_4__ shaderCommands_t ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_8__ {int stateBits; int * bundle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int,int ,int ,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int,int ,int,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int,int ,int,int ) ;
 TYPE_6__* VAR_5 ;
 TYPE_4__ VAR_6 ;
 char* FUNC_14 (char*,int ) ;

void FUNC_15( void )
{
 shaderCommands_t *VAR_7;
 shader_t *VAR_8;

 VAR_7 = &VAR_6;

 VAR_8 = VAR_7->shader;




 FUNC_4( ( unsigned char * ) VAR_6.svars.colors );




 if ( VAR_5->integer )
 {


  FUNC_2( FUNC_14("--- RB_StageIteratorVertexLitTexturedUnfogged( %s ) ---\n", VAR_6.shader->name) );
 }




 FUNC_0( VAR_7->shader->cullType );




 FUNC_9( VAR_0);
 FUNC_9( VAR_2);

 FUNC_8( 4, VAR_3, 0, VAR_6.svars.colors );
 FUNC_11( 2, VAR_1, 16, VAR_6.texCoords[0][0] );
 FUNC_13 (3, VAR_1, 16, VAR_7->xyz);

 if ( &FUNC_10 )
 {
  FUNC_10(0, VAR_7->numVertexes);
  FUNC_2( "glLockArraysEXT\n" );
 }




 FUNC_6( &VAR_6.xstages[0]->bundle[0] );
 FUNC_1( VAR_6.xstages[0]->stateBits );
 FUNC_7( VAR_7->numIndexes, VAR_7->indexes );




 if ( VAR_6.dlightBits && VAR_6.shader->sort <= VAR_4 ) {
  FUNC_3();
 }




 if ( VAR_6.fogNum && VAR_6.shader->fogPass ) {
  FUNC_5();
 }




 if (&FUNC_12)
 {
  FUNC_12();
  FUNC_2( "glUnlockArraysEXT\n" );
 }
}
