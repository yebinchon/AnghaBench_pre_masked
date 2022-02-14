
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ numMaterials; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static void FUNC_6( const char *VAR_5 )
{
 if ( !FUNC_5( VAR_5, "*MATERIAL_COUNT" ) )
 {
  FUNC_0( VAR_3 );
  FUNC_3( ( "..num materials: %s\n", VAR_4 ) );
  if ( FUNC_4( VAR_4 ) > VAR_1 )
  {
   FUNC_2( "Too many materials!" );
  }
  VAR_2.numMaterials = 0;
 }
 else if ( !FUNC_5( VAR_5, "*MATERIAL" ) )
 {
  FUNC_3( ( "..material %d ", VAR_2.numMaterials ) );
  FUNC_1( VAR_0 );
  VAR_2.numMaterials++;
 }
}
