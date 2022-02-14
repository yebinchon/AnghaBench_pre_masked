
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int contents; int surfaceFlags; } ;
typedef TYPE_1__ shaderInfo_t ;
struct TYPE_5__ {int contentFlags; int surfaceFlags; int shader; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int ) ;
 TYPE_1__* FUNC_2 (char const*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char const*) ;

int FUNC_4( const char *VAR_3 ) {
 int VAR_4;
 shaderInfo_t *VAR_5;

 if ( !VAR_3 ) {
  VAR_3 = "noshader";
 }

 for ( VAR_4 = 0 ; VAR_4 < VAR_2 ; VAR_4++ ) {
  if ( !FUNC_1( VAR_3, VAR_1[VAR_4].shader ) ) {
   return VAR_4;
  }
 }

 if ( VAR_4 == VAR_0 ) {
  FUNC_0( "MAX_MAP_SHADERS" );
 }
 VAR_2++;
 FUNC_3( VAR_1[VAR_4].shader, VAR_3 );

 VAR_5 = FUNC_2( VAR_3 );
 VAR_1[VAR_4].surfaceFlags = VAR_5->surfaceFlags;
 VAR_1[VAR_4].contentFlags = VAR_5->contents;

 return VAR_4;
}
