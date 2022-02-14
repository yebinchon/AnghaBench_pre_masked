
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * texcoords; int colors; } ;
struct TYPE_11__ {int numPasses; TYPE_2__* shader; scalar_t__ fogNum; scalar_t__ dlightBits; int numVertexes; int xyz; TYPE_1__ svars; } ;
typedef TYPE_3__ shaderCommands_t ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {int value; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_10__ {scalar_t__ sort; int surfaceFlags; scalar_t__ polygonOffset; scalar_t__ fogPass; scalar_t__ multitextureEnv; int cullType; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int,int ,int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int,int ,int,int ) ;
 int VAR_9 ;
 TYPE_7__* VAR_10 ;
 TYPE_6__* VAR_11 ;
 TYPE_5__* VAR_12 ;
 int VAR_13 ;
 TYPE_3__ VAR_14 ;
 char* FUNC_16 (char*,int ) ;

void FUNC_17( void )
{
 shaderCommands_t *VAR_15;

 VAR_15 = &VAR_14;

 FUNC_3();




 if ( VAR_10->integer )
 {


  FUNC_1( FUNC_16("--- RB_StageIteratorGeneric( %s ) ---\n", VAR_14.shader->name) );
 }




 FUNC_0( VAR_15->shader->cullType );


 if ( VAR_15->shader->polygonOffset )
 {
  FUNC_9( VAR_2 );
  FUNC_12( VAR_11->value, VAR_12->value );
 }







 if ( VAR_14.numPasses > 1 || VAR_15->shader->multitextureEnv )
 {
  VAR_13 = VAR_8;
  FUNC_8 (VAR_0);
  FUNC_8 (VAR_3);
 }
 else
 {
  VAR_13 = VAR_9;

  FUNC_10( VAR_0);
  FUNC_6( 4, VAR_4, 0, VAR_14.svars.colors );

  FUNC_10( VAR_3);
  FUNC_13( 2, VAR_1, 0, VAR_14.svars.texcoords[0] );
 }




 FUNC_15 (3, VAR_1, 16, VAR_15->xyz);
 if (&FUNC_11)
 {
  FUNC_11(0, VAR_15->numVertexes);
  FUNC_1( "glLockArraysEXT\n" );
 }




 if ( !VAR_13 )
 {
  FUNC_10( VAR_3 );
  FUNC_10( VAR_0 );
 }




 FUNC_5( VAR_15 );




 if ( VAR_14.dlightBits && VAR_14.shader->sort <= VAR_5
  && !(VAR_14.shader->surfaceFlags & (VAR_6 | VAR_7) ) ) {
  FUNC_2();
 }




 if ( VAR_14.fogNum && VAR_14.shader->fogPass ) {
  FUNC_4();
 }




 if (&FUNC_14)
 {
  FUNC_14();
  FUNC_1( "glUnlockArraysEXT\n" );
 }




 if ( VAR_15->shader->polygonOffset )
 {
  FUNC_7( VAR_2 );
 }
}
