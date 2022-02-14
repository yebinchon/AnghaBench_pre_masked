
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int numSpawnVars; char*** spawnVars; int spawning; } ;


 int FUNC_0 (char const*,char*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_1( const char *VAR_3, const char *VAR_4, char **VAR_5 ) {
 int VAR_6;

 if ( !VAR_0.spawning ) {
  *VAR_5 = (char *)VAR_4;

 }

 for ( VAR_6 = 0 ; VAR_6 < VAR_0.numSpawnVars ; VAR_6++ ) {
  if ( !FUNC_0( VAR_3, VAR_0.spawnVars[VAR_6][0] ) ) {
   *VAR_5 = VAR_0.spawnVars[VAR_6][1];
   return VAR_2;
  }
 }

 *VAR_5 = (char *)VAR_4;
 return VAR_1;
}
