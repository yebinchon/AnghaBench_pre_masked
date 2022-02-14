
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int buffer ;
struct TYPE_12__ {scalar_t__ driverType; scalar_t__ isFullscreen; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {int (* Printf ) (int ,char*,char const*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*,int,int,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int) ;
 char* VAR_4 ;
 int FUNC_5 (char*) ;
 TYPE_6__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_5__* VAR_8 ;
 TYPE_4__* VAR_9 ;
 TYPE_3__* VAR_10 ;
 TYPE_2__* VAR_11 ;
 TYPE_1__ VAR_12 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,char const*) ;

__attribute__((used)) static qboolean FUNC_8( const char *VAR_13 )
{
 char VAR_14[1024];
 qboolean VAR_15;

 FUNC_4( VAR_14, VAR_13, sizeof(VAR_14) );
 FUNC_3(VAR_14);




 if ( FUNC_6( VAR_14, "opengl32" ) != 0 || VAR_10->integer )
 {
  VAR_5.driverType = VAR_0;
 }
 else
 {
  VAR_5.driverType = VAR_1;

  VAR_12.Printf( VAR_3, "...assuming '%s' is a standalone driver\n", VAR_13 );

  if ( FUNC_6( VAR_14, VAR_4 ) )
  {
   VAR_5.driverType = VAR_2;
  }
 }


 FUNC_5("FX_GLIDE_NO_SPLASH=0");




 if ( FUNC_1( VAR_14 ) )
 {
  VAR_15 = VAR_9->integer;


  if ( !FUNC_0( VAR_13, VAR_11->integer, VAR_8->integer, VAR_15 ) )
  {


   if ( VAR_5.driverType == VAR_0 )
   {
    if ( VAR_8->integer != 16 ||
      VAR_15 != VAR_7 ||
      VAR_11->integer != 3 )
    {
     if ( !FUNC_0( VAR_13, 3, 16, VAR_7 ) )
     {
      goto fail;
     }
    }
   }
   else
   {
    goto fail;
   }
  }

  if ( VAR_5.driverType == VAR_2 )
  {
   VAR_5.isFullscreen = VAR_7;
  }

  return VAR_7;
 }
fail:

 FUNC_2();

 return VAR_6;
}
