
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t currentObject; TYPE_1__* objects; scalar_t__ grabAnims; } ;
struct TYPE_3__ {scalar_t__ name; } ;


 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 size_t VAR_2 ;
 int FUNC_7 (char*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_8 (char*,char*) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (scalar_t__,char*) ;

__attribute__((used)) static void FUNC_11( void )
{
 while ( FUNC_1( VAR_4 ) )
 {
  if ( !FUNC_9( VAR_5, "*3DSMAX_ASCIIEXPORT" ) ||
    !FUNC_9( VAR_5, "*COMMENT" ) )
  {
   FUNC_4();
  }
  else if ( !FUNC_9( VAR_5, "*SCENE" ) )
   FUNC_3();
  else if ( !FUNC_9( VAR_5, "*MATERIAL_LIST" ) )
  {
   FUNC_7( ("MATERIAL_LIST\n") );

   FUNC_2( VAR_1 );
  }
  else if ( !FUNC_9( VAR_5, "*GEOMOBJECT" ) )
  {
   FUNC_7( ("GEOMOBJECT" ) );

   FUNC_2( VAR_0 );

   if ( FUNC_10( VAR_3.objects[VAR_3.currentObject].name, "Bip" ) ||
     FUNC_10( VAR_3.objects[VAR_3.currentObject].name, "ignore_" ) )
   {
    FUNC_0( VAR_3.currentObject );
    FUNC_7( ( "(discarding BIP/ignore object)\n" ) );
   }
   else if ( ( FUNC_10( VAR_3.objects[VAR_3.currentObject].name, "h_" ) != VAR_3.objects[VAR_3.currentObject].name ) &&
          ( FUNC_10( VAR_3.objects[VAR_3.currentObject].name, "l_" ) != VAR_3.objects[VAR_3.currentObject].name ) &&
       ( FUNC_10( VAR_3.objects[VAR_3.currentObject].name, "u_" ) != VAR_3.objects[VAR_3.currentObject].name ) &&
       ( FUNC_10( VAR_3.objects[VAR_3.currentObject].name, "tag" ) != VAR_3.objects[VAR_3.currentObject].name ) &&
       VAR_3.grabAnims )
   {
    FUNC_7( ( "(ignoring improperly labeled object '%s')\n", VAR_3.objects[VAR_3.currentObject].name ) );
    FUNC_0( VAR_3.currentObject );
   }
   else
   {
    if ( ++VAR_3.currentObject == VAR_2 )
    {
     FUNC_6( "Too many GEOMOBJECTs" );
    }
   }
  }
  else if ( VAR_5[0] )
  {
   FUNC_8( "Unknown token '%s'\n", VAR_5 );
  }
 }

 if ( !VAR_3.currentObject )
  FUNC_6( "No animation data!" );

 FUNC_5();
}
