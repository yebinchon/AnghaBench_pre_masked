
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hardwareType; } ;
struct TYPE_4__ {void* menuBackNoLogoShader; void* menuBackShader; TYPE_1__ glconfig; void* whiteShader; void* rb_off; void* rb_on; void* cursor; void* charsetPropB; void* charsetPropGlow; void* charsetProp; void* charset; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* FUNC_0 (char*) ;
 void* FUNC_1 (char*,int ) ;
 TYPE_2__ VAR_10 ;
 void* VAR_11 ;

void FUNC_2( void )
{
 VAR_10.charset = FUNC_0( "gfx/2d/bigchars" );
 VAR_10.charsetProp = FUNC_0( "menu/art/font1_prop.tga" );
 VAR_10.charsetPropGlow = FUNC_0( "menu/art/font1_prop_glo.tga" );
 VAR_10.charsetPropB = FUNC_0( "menu/art/font2_prop.tga" );
 VAR_10.cursor = FUNC_0( "menu/art/3_cursor2" );
 VAR_10.rb_on = FUNC_0( "menu/art/switch_on" );
 VAR_10.rb_off = FUNC_0( "menu/art/switch_off" );

 VAR_10.whiteShader = FUNC_0( "white" );
 if ( VAR_10.glconfig.hardwareType == VAR_0 ) {

  VAR_10.menuBackShader = FUNC_0( "menubackRagePro" );
 } else {
  VAR_10.menuBackShader = FUNC_0( "menuback" );
 }
 VAR_10.menuBackNoLogoShader = FUNC_0( "menubacknologo" );

 VAR_2 = FUNC_1( "sound/misc/menu1.wav", VAR_6 );
 VAR_3 = FUNC_1( "sound/misc/menu2.wav", VAR_6 );
 VAR_5 = FUNC_1( "sound/misc/menu3.wav", VAR_6 );
 VAR_1 = FUNC_1( "sound/misc/menu4.wav", VAR_6 );
 VAR_11 = FUNC_1( "sound/weapons/change.wav", VAR_6 );


 VAR_4 = -1;

 VAR_7 = FUNC_0( "menu/art/slider2" );
 VAR_8 = FUNC_0( "menu/art/sliderbutt_0" );
 VAR_9 = FUNC_0( "menu/art/sliderbutt_1" );
}
