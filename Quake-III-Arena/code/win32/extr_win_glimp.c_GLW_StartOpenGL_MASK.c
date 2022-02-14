
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* qboolean ;
struct TYPE_4__ {void* modified; int string; } ;
struct TYPE_3__ {int (* Error ) (int ,char*) ;int (* Cvar_Set ) (char*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void FUNC_8( void )
{
 qboolean VAR_7 = VAR_3;
 qboolean VAR_8 = VAR_3;




 if ( !FUNC_0( VAR_5->string ) )
 {
  if ( !FUNC_1( VAR_5->string, VAR_1 ) )
  {
   VAR_7 = VAR_4;
  }
  else if ( !FUNC_1( VAR_5->string, VAR_2 ) )
  {
   VAR_8 = VAR_4;
  }

  if ( !VAR_8 )
  {
   VAR_8 = VAR_4;
   if ( FUNC_0( VAR_2 ) )
   {
    VAR_6.Cvar_Set( "r_glDriver", VAR_2 );
    VAR_5->modified = VAR_3;
   }
   else
   {
    if ( !VAR_7 )
    {
     if ( !FUNC_0( VAR_1 ) )
     {
      VAR_6.Error( VAR_0, "GLW_StartOpenGL() - could not load OpenGL subsystem\n" );
     }
     VAR_6.Cvar_Set( "r_glDriver", VAR_1 );
     VAR_5->modified = VAR_3;
    }
    else
    {
     VAR_6.Error( VAR_0, "GLW_StartOpenGL() - could not load OpenGL subsystem\n" );
    }
   }
  }
  else if ( !VAR_7 )
  {
   VAR_7 = VAR_4;
   if ( FUNC_0( VAR_1 ) )
   {
    VAR_6.Cvar_Set( "r_glDriver", VAR_1 );
    VAR_5->modified = VAR_3;
   }
   else
   {
    VAR_6.Error( VAR_0, "GLW_StartOpenGL() - could not load OpenGL subsystem\n" );
   }
  }
 }
}
