
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;
typedef int tree_t ;
typedef int entity_t ;


 float FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,scalar_t__*) ;
 int FUNC_2 (char const*,scalar_t__*,float,int *) ;
 int FUNC_3 (char const*,scalar_t__*,float,int *) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

void FUNC_9( tree_t *VAR_6 ) {
 int VAR_7;
 entity_t *VAR_8;

 FUNC_7("----- AddTriangleModels -----\n");

 for ( VAR_7=1 ; VAR_7< VAR_5 ; VAR_7++ ) {
  VAR_8 = &VAR_4[VAR_7];


  if ( !FUNC_4( "misc_model", FUNC_5( VAR_8, "classname" ) ) ) {
   const char *VAR_9;
   vec3_t VAR_10;
   float VAR_11;


   VAR_11 = FUNC_0( VAR_8, "angle" );

   FUNC_1( VAR_8, "origin", VAR_10 );

   VAR_9 = FUNC_5( VAR_8, "model" );
   if ( !VAR_9[0] ) {
    FUNC_6("WARNING: misc_model at %i %i %i without a model key\n", (int)VAR_10[0],
     (int)VAR_10[1], (int)VAR_10[2] );
    continue;
   }
   if ( FUNC_8( VAR_9, ".md3" ) || FUNC_8( VAR_9, ".MD3" ) ) {
    FUNC_3( VAR_9, VAR_10, VAR_11, VAR_6 );
    continue;
   }
   if ( FUNC_8( VAR_9, ".ase" ) || FUNC_8( VAR_9, ".ASE" ) ) {
    FUNC_2( VAR_9, VAR_10, VAR_11, VAR_6 );
    continue;
   }
   FUNC_6( "Unknown misc_model type: %s\n", VAR_9 );
   continue;
  }
 }

 FUNC_7( "%5i triangle models\n", VAR_1 );
 FUNC_7( "%5i triangle surfaces\n", VAR_2 );
 FUNC_7( "%5i triangle vertexes\n", VAR_3 );
 FUNC_7( "%5i triangle indexes\n", VAR_0 );
}
