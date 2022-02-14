
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_22__ {int curvalue; } ;
struct TYPE_21__ {int curvalue; } ;
struct TYPE_20__ {int curvalue; } ;
struct TYPE_19__ {int curvalue; } ;
struct TYPE_18__ {int curvalue; } ;
struct TYPE_17__ {int curvalue; } ;
struct TYPE_16__ {int curvalue; } ;
struct TYPE_15__ {int curvalue; } ;
struct TYPE_14__ {int curvalue; } ;
struct TYPE_12__ {int curvalue; } ;
struct TYPE_13__ {TYPE_10__ colordepth; TYPE_9__ driver; TYPE_8__ fs; TYPE_7__ geometry; TYPE_6__ filter; TYPE_5__ texturebits; TYPE_4__ lighting; TYPE_3__ tq; TYPE_2__ allow_extensions; TYPE_1__ mode; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 TYPE_11__ VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3( void )
{
 VAR_0.mode.curvalue = FUNC_2( "r_mode" );
 if ( VAR_0.mode.curvalue < 0 )
 {
  VAR_0.mode.curvalue = 3;
 }
 VAR_0.fs.curvalue = FUNC_2("r_fullscreen");
 VAR_0.allow_extensions.curvalue = FUNC_2("r_allowExtensions");
 VAR_0.tq.curvalue = 3-FUNC_2( "r_picmip");
 if ( VAR_0.tq.curvalue < 0 )
 {
  VAR_0.tq.curvalue = 0;
 }
 else if ( VAR_0.tq.curvalue > 3 )
 {
  VAR_0.tq.curvalue = 3;
 }

 VAR_0.lighting.curvalue = FUNC_2( "r_vertexLight" ) != 0;
 switch ( ( int ) FUNC_2( "r_texturebits" ) )
 {
 default:
 case 0:
  VAR_0.texturebits.curvalue = 0;
  break;
 case 16:
  VAR_0.texturebits.curvalue = 1;
  break;
 case 32:
  VAR_0.texturebits.curvalue = 2;
  break;
 }

 if ( !FUNC_0( FUNC_1( "r_textureMode" ), "GL_LINEAR_MIPMAP_NEAREST" ) )
 {
  VAR_0.filter.curvalue = 0;
 }
 else
 {
  VAR_0.filter.curvalue = 1;
 }

 if ( FUNC_2( "r_lodBias" ) > 0 )
 {
  if ( FUNC_2( "r_subdivisions" ) >= 20 )
  {
   VAR_0.geometry.curvalue = 0;
  }
  else
  {
   VAR_0.geometry.curvalue = 1;
  }
 }
 else
 {
  VAR_0.geometry.curvalue = 2;
 }

 switch ( ( int ) FUNC_2( "r_colorbits" ) )
 {
 default:
 case 0:
  VAR_0.colordepth.curvalue = 0;
  break;
 case 16:
  VAR_0.colordepth.curvalue = 1;
  break;
 case 32:
  VAR_0.colordepth.curvalue = 2;
  break;
 }

 if ( VAR_0.fs.curvalue == 0 )
 {
  VAR_0.colordepth.curvalue = 0;
 }
 if ( VAR_0.driver.curvalue == 1 )
 {
  VAR_0.colordepth.curvalue = 1;
 }
}
