
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
struct TYPE_19__ {size_t curvalue; } ;
struct TYPE_18__ {int curvalue; } ;
struct TYPE_17__ {int curvalue; } ;
struct TYPE_16__ {int curvalue; } ;
struct TYPE_15__ {int curvalue; } ;
struct TYPE_14__ {int curvalue; } ;
struct TYPE_12__ {scalar_t__ curvalue; } ;
struct TYPE_13__ {TYPE_10__ filter; TYPE_9__ geometry; TYPE_8__ lighting; TYPE_7__ colordepth; TYPE_6__ driver; TYPE_5__ fs; TYPE_4__ mode; TYPE_3__ allow_extensions; TYPE_2__ tq; TYPE_1__ texturebits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 TYPE_11__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3( void *VAR_4, int VAR_5 )
{
 if (VAR_5 != VAR_1)
  return;

 switch ( VAR_3.texturebits.curvalue )
 {
 case 0:
  FUNC_2( "r_texturebits", 0 );
  break;
 case 1:
  FUNC_2( "r_texturebits", 16 );
  break;
 case 2:
  FUNC_2( "r_texturebits", 32 );
  break;
 }
 FUNC_2( "r_picmip", 3 - VAR_3.tq.curvalue );
 FUNC_2( "r_allowExtensions", VAR_3.allow_extensions.curvalue );
 FUNC_2( "r_mode", VAR_3.mode.curvalue );
 FUNC_2( "r_fullscreen", VAR_3.fs.curvalue );
 FUNC_1( "r_glDriver", ( char * ) VAR_2[VAR_3.driver.curvalue] );
 switch ( VAR_3.colordepth.curvalue )
 {
 case 0:
  FUNC_2( "r_colorbits", 0 );
  FUNC_2( "r_depthbits", 0 );
  FUNC_2( "r_stencilbits", 0 );
  break;
 case 1:
  FUNC_2( "r_colorbits", 16 );
  FUNC_2( "r_depthbits", 16 );
  FUNC_2( "r_stencilbits", 0 );
  break;
 case 2:
  FUNC_2( "r_colorbits", 32 );
  FUNC_2( "r_depthbits", 24 );
  break;
 }
 FUNC_2( "r_vertexLight", VAR_3.lighting.curvalue );

 if ( VAR_3.geometry.curvalue == 2 )
 {
  FUNC_2( "r_lodBias", 0 );
  FUNC_2( "r_subdivisions", 4 );
 }
 else if ( VAR_3.geometry.curvalue == 1 )
 {
  FUNC_2( "r_lodBias", 1 );
  FUNC_2( "r_subdivisions", 12 );
 }
 else
 {
  FUNC_2( "r_lodBias", 1 );
  FUNC_2( "r_subdivisions", 20 );
 }

 if ( VAR_3.filter.curvalue )
 {
  FUNC_1( "r_textureMode", "GL_LINEAR_MIPMAP_LINEAR" );
 }
 else
 {
  FUNC_1( "r_textureMode", "GL_LINEAR_MIPMAP_NEAREST" );
 }

 FUNC_0( VAR_0, "vid_restart\n" );
}
