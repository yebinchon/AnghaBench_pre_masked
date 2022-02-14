
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t currentObject; TYPE_2__* objects; scalar_t__ grabAnims; } ;
struct TYPE_4__ {scalar_t__ currentFrame; scalar_t__ numFrames; } ;
struct TYPE_5__ {char* name; scalar_t__ numAnimations; TYPE_1__ anim; int materialRef; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* FUNC_7 (char*,char) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*,scalar_t__) ;
 scalar_t__* FUNC_10 (char*,char) ;
 char* FUNC_11 (char*,char*) ;

__attribute__((used)) static void FUNC_12( const char *VAR_7 )
{
 if ( !FUNC_8( VAR_7, "*NODE_NAME" ) )
 {
  char *VAR_8 = VAR_3.objects[VAR_3.currentObject].name;

  FUNC_0( VAR_5 );
  FUNC_5( ( " %s\n", VAR_6 ) );
  FUNC_9( VAR_3.objects[VAR_3.currentObject].name, VAR_6 + 1 );
  if ( FUNC_7( VAR_3.objects[VAR_3.currentObject].name, '"' ) )
   *FUNC_7( VAR_3.objects[VAR_3.currentObject].name, '"' ) = 0;

  if ( FUNC_11( VAR_8, "tag" ) == VAR_8 )
  {
   while ( FUNC_7( VAR_8, '_' ) != FUNC_10( VAR_8, '_' ) )
   {
    *FUNC_10( VAR_8, '_' ) = 0;
   }
   while ( FUNC_10( VAR_8, ' ' ) )
   {
    *FUNC_10( VAR_8, ' ' ) = 0;
   }
  }
 }
 else if ( !FUNC_8( VAR_7, "*NODE_PARENT" ) )
 {
  FUNC_3();
 }

 else if ( !FUNC_8( VAR_7, "*NODE_TM" ) ||
        !FUNC_8( VAR_7, "*TM_ANIMATION" ) )
 {
  FUNC_1( 0 );
 }

 else if ( !FUNC_8( VAR_7, "*MESH" ) && !VAR_3.grabAnims )
 {
  FUNC_1( VAR_0 );
  if ( ++VAR_3.objects[VAR_3.currentObject].anim.currentFrame == VAR_2 )
  {
   FUNC_4( "Too many animation frames" );
  }
  VAR_3.objects[VAR_3.currentObject].anim.numFrames = VAR_3.objects[VAR_3.currentObject].anim.currentFrame;
  VAR_3.objects[VAR_3.currentObject].numAnimations++;
 }

 else if ( !FUNC_8( VAR_7, "*MATERIAL_REF" ) )
 {
  FUNC_0( VAR_4 );

  VAR_3.objects[VAR_3.currentObject].materialRef = FUNC_6( VAR_6 );
 }

 else if ( !FUNC_8( VAR_7, "*MESH_ANIMATION" ) )
 {
  if ( VAR_3.grabAnims )
  {
   FUNC_5( ( "..found MESH_ANIMATION\n" ) );

   if ( VAR_3.objects[VAR_3.currentObject].numAnimations )
   {
    FUNC_4( "Multiple MESH_ANIMATIONS within a single GEOM_OBJECT" );
   }
   FUNC_1( VAR_1 );
   VAR_3.objects[VAR_3.currentObject].anim.numFrames = VAR_3.objects[VAR_3.currentObject].anim.currentFrame;
   VAR_3.objects[VAR_3.currentObject].numAnimations++;
  }
  else
  {
   FUNC_2();
  }
 }

 else if ( !FUNC_8( VAR_7, "*PROP_MOTIONBLUR" ) ||
        !FUNC_8( VAR_7, "*PROP_CASTSHADOW" ) ||
     !FUNC_8( VAR_7, "*PROP_RECVSHADOW" ) )
 {
  FUNC_3();
 }
}
