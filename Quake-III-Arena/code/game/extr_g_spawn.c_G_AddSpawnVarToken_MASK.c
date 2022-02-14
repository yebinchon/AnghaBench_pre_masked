
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ numSpawnVarChars; char* spawnVarChars; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;

char *FUNC_3( const char *VAR_2 ) {
 int VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_2( VAR_2 );
 if ( VAR_1.numSpawnVarChars + VAR_3 + 1 > VAR_0 ) {
  FUNC_0( "G_AddSpawnVarToken: MAX_SPAWN_CHARS" );
 }

 VAR_4 = VAR_1.spawnVarChars + VAR_1.numSpawnVarChars;
 FUNC_1( VAR_4, VAR_2, VAR_3+1 );

 VAR_1.numSpawnVarChars += VAR_3 + 1;

 return VAR_4;
}
