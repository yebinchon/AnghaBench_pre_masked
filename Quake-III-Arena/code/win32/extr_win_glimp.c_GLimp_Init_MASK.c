
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_17__ {int string; } ;
typedef TYPE_1__ cvar_t ;
typedef int buf ;
struct TYPE_18__ {int (* Cvar_Set ) (char*,char*) ;TYPE_1__* (* Cvar_Get ) (char*,char*,int) ;int (* Error ) (int ,char*) ;int (* Printf ) (int ,char*) ;} ;
struct TYPE_16__ {int hInstance; } ;
struct TYPE_15__ {char* vendor_string; char* renderer_string; char* version_string; char* extensions_string; int hardwareType; } ;
struct TYPE_14__ {int wndproc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 () ;
 TYPE_13__ VAR_13 ;
 TYPE_12__ VAR_14 ;
 TYPE_11__ VAR_15 ;
 char* FUNC_7 (int ) ;
 TYPE_1__* VAR_16 ;
 TYPE_1__* VAR_17 ;
 TYPE_8__ VAR_18 ;
 int FUNC_8 (int ,char*,int*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 TYPE_1__* FUNC_10 (char*,char*,int) ;
 TYPE_1__* FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,char*) ;
 TYPE_1__* FUNC_18 (char*,char*,int) ;
 TYPE_1__* FUNC_19 (char*,char*,int) ;
 TYPE_1__* FUNC_20 (char*,char*,int) ;
 TYPE_1__* FUNC_21 (char*,char*,int) ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 (char*,char*) ;

void FUNC_24( void )
{
 char VAR_19[1024];
 cvar_t *VAR_20 = VAR_18.Cvar_Get( "r_lastValidRenderer", "(uninitialized)", VAR_0 );
 cvar_t *VAR_21;

 VAR_18.Printf( VAR_12, "Initializing OpenGL subsystem\n" );




 if ( !FUNC_0() )
 {
  VAR_18.Error( VAR_2, "GLimp_Init() - incorrect operating system\n" );
 }


 VAR_21 = VAR_18.Cvar_Get( "win_hinstance", "", 0 );
 FUNC_8( VAR_21->string, "%i", (int *)&VAR_13.hInstance );

 VAR_21 = VAR_18.Cvar_Get( "win_wndproc", "", 0 );
 FUNC_8( VAR_21->string, "%i", (int *)&VAR_15.wndproc );

 VAR_16 = VAR_18.Cvar_Get( "r_allowSoftwareGL", "0", VAR_1 );
 VAR_17 = VAR_18.Cvar_Get( "r_maskMinidriver", "0", VAR_1 );


 FUNC_2();


 FUNC_5( VAR_14.vendor_string, FUNC_7 (VAR_10), sizeof( VAR_14.vendor_string ) );
 FUNC_5( VAR_14.renderer_string, FUNC_7 (VAR_9), sizeof( VAR_14.renderer_string ) );
 FUNC_5( VAR_14.version_string, FUNC_7 (VAR_11), sizeof( VAR_14.version_string ) );
 FUNC_5( VAR_14.extensions_string, FUNC_7 (VAR_8), sizeof( VAR_14.extensions_string ) );




 FUNC_5( VAR_19, VAR_14.renderer_string, sizeof(VAR_19) );
 FUNC_4( VAR_19 );






 if ( FUNC_3( VAR_20->string, VAR_14.renderer_string ) )
 {
  VAR_14.hardwareType = VAR_4;

  VAR_18.Cvar_Set( "r_textureMode", "GL_LINEAR_MIPMAP_NEAREST" );


  if ( FUNC_9( VAR_19, "voodoo graphics/1 tmu/2 mb" ) )
  {
   VAR_18.Cvar_Set( "r_picmip", "2" );
   VAR_18.Cvar_Get( "r_picmip", "1", VAR_0 | VAR_1 );
  }
  else
  {
   VAR_18.Cvar_Set( "r_picmip", "1" );

   if ( FUNC_9( VAR_19, "rage 128" ) || FUNC_9( VAR_19, "rage128" ) )
   {
    VAR_18.Cvar_Set( "r_finish", "0" );
   }

   else if ( FUNC_9( VAR_19, "savage3d" ) || FUNC_9( VAR_19, "s3 savage4" ) )
   {
    VAR_18.Cvar_Set( "r_texturemode", "GL_LINEAR_MIPMAP_LINEAR" );
   }
  }
 }





 if ( FUNC_9( VAR_19, "banshee" ) || FUNC_9( VAR_19, "voodoo3" ) )
 {
  VAR_14.hardwareType = VAR_3;
 }

 else if ( FUNC_9( VAR_19, "voodoo graphics/1 tmu/2 mb" ) )
 {
 }
 else if ( FUNC_9( VAR_19, "glzicd" ) )
 {
 }
 else if ( FUNC_9( VAR_19, "rage pro" ) || FUNC_9( VAR_19, "Rage Pro" ) || FUNC_9( VAR_19, "ragepro" ) )
 {
  VAR_14.hardwareType = VAR_6;
 }
 else if ( FUNC_9( VAR_19, "rage 128" ) )
 {
 }
 else if ( FUNC_9( VAR_19, "permedia2" ) )
 {
  VAR_14.hardwareType = VAR_5;
 }
 else if ( FUNC_9( VAR_19, "riva 128" ) )
 {
  VAR_14.hardwareType = VAR_7;
 }
 else if ( FUNC_9( VAR_19, "riva tnt " ) )
 {
 }

 VAR_18.Cvar_Set( "r_lastValidRenderer", VAR_14.renderer_string );

 FUNC_1();
 FUNC_6();
}
