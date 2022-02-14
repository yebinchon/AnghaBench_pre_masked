
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


struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_7__ {size_t number; } ;
struct TYPE_11__ {char* classname; TYPE_1__ s; } ;
struct TYPE_10__ {char* string; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {int startTime; int warmupTime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char**) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 TYPE_6__ VAR_8 ;
 TYPE_5__* VAR_9 ;
 TYPE_4__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 char* FUNC_6 (char*,int) ;

void FUNC_7( void ) {
 char *VAR_13;

 FUNC_2( "classname", "", &VAR_13 );
 if ( FUNC_3( VAR_13, "worldspawn" ) ) {
  FUNC_0( "SP_worldspawn: The first entity isn't 'worldspawn'" );
 }


 FUNC_5( VAR_0, VAR_7 );

 FUNC_5( VAR_1, FUNC_6("%i", VAR_12.startTime ) );

 FUNC_2( "music", "", &VAR_13 );
 FUNC_5( VAR_4, VAR_13 );

 FUNC_2( "message", "", &VAR_13 );
 FUNC_5( VAR_2, VAR_13 );

 FUNC_5( VAR_3, VAR_10.string );

 FUNC_2( "gravity", "800", &VAR_13 );
 FUNC_4( "g_gravity", VAR_13 );

 FUNC_2( "enableDust", "0", &VAR_13 );
 FUNC_4( "g_enableDust", VAR_13 );

 FUNC_2( "enableBreath", "0", &VAR_13 );
 FUNC_4( "g_enableBreath", VAR_13 );

 VAR_9[VAR_6].s.number = VAR_6;
 VAR_9[VAR_6].classname = "worldspawn";


 FUNC_5( VAR_5, "" );
 if ( VAR_11.integer ) {
  FUNC_4( "g_restarted", "0" );
  VAR_12.warmupTime = 0;
 } else if ( VAR_8.integer ) {
  VAR_12.warmupTime = -1;
  FUNC_5( VAR_5, FUNC_6("%i", VAR_12.warmupTime) );
  FUNC_1( "Warmup:\n" );
 }

}
