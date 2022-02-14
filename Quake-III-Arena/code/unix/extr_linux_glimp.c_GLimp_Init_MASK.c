
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef void* qboolean ;
struct TYPE_12__ {char* string; } ;
typedef TYPE_1__ cvar_t ;
struct TYPE_14__ {char* string; void* modified; } ;
struct TYPE_13__ {int (* Cvar_Set ) (char*,char*) ;TYPE_1__* (* Cvar_Get ) (char*,char*,int) ;int (* Error ) (int ,char*) ;} ;
struct TYPE_11__ {char* vendor_string; char* renderer_string; char* version_string; char* extensions_string; void* hardwareType; int driverType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 () ;
 char* VAR_14 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 char* VAR_15 ;
 TYPE_10__ VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int FUNC_10 (int ) ;
 void* VAR_19 ;
 TYPE_1__* VAR_20 ;
 TYPE_8__* VAR_21 ;
 TYPE_1__* VAR_22 ;
 TYPE_6__ VAR_23 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 TYPE_1__* FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;
 TYPE_1__* FUNC_17 (char*,char*,int) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*,char*) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (char*,char*) ;
 TYPE_1__* FUNC_23 (char*,char*,int) ;
 TYPE_1__* FUNC_24 (char*,char*,int) ;
 int FUNC_25 (char*,char*) ;
 int FUNC_26 (char*,char*) ;
 int FUNC_27 (char*,char*) ;
 int FUNC_28 (int ,char*) ;
 int FUNC_29 (char*,char*) ;

void FUNC_30( void )
{
  qboolean VAR_24 = VAR_18;
  qboolean VAR_25 = VAR_18;
  qboolean VAR_26 = VAR_18;
  char VAR_27[1024];
  cvar_t *VAR_28 = VAR_23.Cvar_Get( "r_lastValidRenderer", "(uninitialized)", VAR_0 );
  VAR_20 = VAR_23.Cvar_Get( "r_allowSoftwareGL", "0", VAR_1 );

  VAR_22 = VAR_23.Cvar_Get( "r_previousglDriver", "", VAR_2 );

  FUNC_4();


  if ( *VAR_22->string )
  {


    VAR_23.Cvar_Set( "r_glDriver", VAR_22->string );
  }


  FUNC_9(&VAR_17);




  if ( !FUNC_3( VAR_21->string ) )
  {
    if ( !FUNC_5( VAR_21->string, VAR_14 ) )
    {
      VAR_24 = VAR_19;
    } else if ( !FUNC_5( VAR_21->string, VAR_15 ) )
    {
      VAR_25 = VAR_19;
    }
    if ( !VAR_24 && !VAR_26 )
    {
      VAR_24 = VAR_19;
      if ( FUNC_3( VAR_14 ) )
      {
        VAR_23.Cvar_Set( "r_glDriver", VAR_14 );
        VAR_21->modified = VAR_18;
        VAR_26 = VAR_19;
      }
    }

    if (!VAR_26)
      VAR_23.Error( VAR_3, "GLimp_Init() - could not load OpenGL subsystem\n" );

  }


  VAR_23.Cvar_Set( "r_previousglDriver", VAR_21->string );


  VAR_16.driverType = VAR_4;
  VAR_16.hardwareType = VAR_6;


  FUNC_7( VAR_16.vendor_string, FUNC_10 (VAR_12), sizeof( VAR_16.vendor_string ) );
  FUNC_7( VAR_16.renderer_string, FUNC_10 (VAR_11), sizeof( VAR_16.renderer_string ) );
  if (*VAR_16.renderer_string && VAR_16.renderer_string[FUNC_12(VAR_16.renderer_string) - 1] == '\n')
    VAR_16.renderer_string[FUNC_12(VAR_16.renderer_string) - 1] = 0;
  FUNC_7( VAR_16.version_string, FUNC_10 (VAR_13), sizeof( VAR_16.version_string ) );
  FUNC_7( VAR_16.extensions_string, FUNC_10 (VAR_10), sizeof( VAR_16.extensions_string ) );




  FUNC_11( VAR_27, VAR_16.renderer_string );
  FUNC_13( VAR_27 );






  if ( FUNC_5( VAR_28->string, VAR_16.renderer_string ) )
  {
    VAR_16.hardwareType = VAR_6;

    VAR_23.Cvar_Set( "r_textureMode", "GL_LINEAR_MIPMAP_NEAREST" );


    if ( FUNC_6( VAR_27, "voodoo graphics/1 tmu/2 mb" ) )
    {
      VAR_23.Cvar_Set( "r_picmip", "2" );
      VAR_23.Cvar_Get( "r_picmip", "1", VAR_0 | VAR_1 );
    } else
    {
      VAR_23.Cvar_Set( "r_picmip", "1" );

      if ( FUNC_6( VAR_27, "rage 128" ) || FUNC_6( VAR_27, "rage128" ) )
      {
        VAR_23.Cvar_Set( "r_finish", "0" );
      }

      else if ( FUNC_6( VAR_27, "savage3d" ) || FUNC_6( VAR_27, "s3 savage4" ) )
      {
        VAR_23.Cvar_Set( "r_texturemode", "GL_LINEAR_MIPMAP_LINEAR" );
      }
    }
  }





  if ( FUNC_6( VAR_27, "banshee" ) || FUNC_6( VAR_27, "Voodoo_Graphics" ) )
  {
    VAR_16.hardwareType = VAR_5;
  } else if ( FUNC_6( VAR_27, "rage pro" ) || FUNC_6( VAR_27, "RagePro" ) )
  {
    VAR_16.hardwareType = VAR_8;
  } else if ( FUNC_6( VAR_27, "permedia2" ) )
  {
    VAR_16.hardwareType = VAR_7;
  } else if ( FUNC_6( VAR_27, "riva 128" ) )
  {
    VAR_16.hardwareType = VAR_9;
  } else if ( FUNC_6( VAR_27, "riva tnt " ) )
  {
  }

  VAR_23.Cvar_Set( "r_lastValidRenderer", VAR_16.renderer_string );


  FUNC_1();
  FUNC_2();

  FUNC_4();

  return;
}
