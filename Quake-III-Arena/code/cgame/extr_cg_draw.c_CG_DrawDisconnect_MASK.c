
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ serverTime; } ;
typedef TYPE_3__ usercmd_t ;
struct TYPE_9__ {scalar_t__ time; TYPE_2__* snap; } ;
struct TYPE_6__ {scalar_t__ commandTime; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,char const*,float) ;
 int FUNC_1 (float,float,int,int,int ) ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int,TYPE_3__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6( void ) {
 float VAR_3, VAR_4;
 int VAR_5;
 usercmd_t VAR_6;
 const char *VAR_7;
 int VAR_8;


 VAR_5 = FUNC_3() - VAR_1 + 1;
 FUNC_4( VAR_5, &VAR_6 );
 if ( VAR_6.serverTime <= VAR_2.snap->ps.commandTime
  || VAR_6.serverTime > VAR_2.time ) {
  return;
 }


 VAR_7 = "Connection Interrupted";
 VAR_8 = FUNC_2( VAR_7 ) * VAR_0;
 FUNC_0( 320 - VAR_8/2, 100, VAR_7, 1.0F);


 if ( ( VAR_2.time >> 9 ) & 1 ) {
  return;
 }

 VAR_3 = 640 - 48;
 VAR_4 = 480 - 48;

 FUNC_1( VAR_3, VAR_4, 48, 48, FUNC_5("gfx/2d/net.tga" ) );
}
