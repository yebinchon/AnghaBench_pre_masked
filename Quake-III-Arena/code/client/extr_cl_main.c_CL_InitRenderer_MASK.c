
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vidWidth; } ;
struct TYPE_8__ {TYPE_1__ glconfig; int consoleShader; int whiteShader; int charSetShader; } ;
struct TYPE_7__ {int widthInChars; } ;
struct TYPE_6__ {int (* RegisterShader ) (char*) ;int (* BeginRegistration ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

void FUNC_4( void ) {

 VAR_4.BeginRegistration( &VAR_1.glconfig );


 VAR_1.charSetShader = VAR_4.RegisterShader( "gfx/2d/bigchars" );
 VAR_1.whiteShader = VAR_4.RegisterShader( "white" );
 VAR_1.consoleShader = VAR_4.RegisterShader( "console" );
 VAR_3 = VAR_1.glconfig.vidWidth / VAR_0 - 2;
 VAR_2.widthInChars = VAR_3;
}
