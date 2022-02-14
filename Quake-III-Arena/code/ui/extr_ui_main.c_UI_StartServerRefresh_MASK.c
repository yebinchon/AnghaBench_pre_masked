
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {size_t tm_mon; int tm_min; int tm_hour; scalar_t__ tm_year; int tm_mday; } ;
typedef TYPE_3__ qtime_t ;
typedef int qboolean ;
struct TYPE_8__ {scalar_t__ realTime; } ;
struct TYPE_7__ {scalar_t__ refreshtime; scalar_t__ numPlayersOnServers; scalar_t__ numDisplayServers; scalar_t__ nextDisplayRefresh; int refreshActive; } ;
struct TYPE_11__ {TYPE_2__ uiDC; TYPE_1__ serverStatus; } ;
struct TYPE_10__ {int integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_5__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 char* FUNC_9 (char*,int,...) ;

__attribute__((used)) static void FUNC_10(qboolean VAR_8)
{
 int VAR_9;
 char *VAR_10;

 qtime_t VAR_11;
 FUNC_8(&VAR_11);
  FUNC_4( FUNC_9("ui_lastServerRefresh_%i", VAR_7.integer), FUNC_9("%s-%i, %i at %i:%i", VAR_4[VAR_11.tm_mon],VAR_11.tm_mday, 1900+VAR_11.tm_year,VAR_11.tm_hour,VAR_11.tm_min));

 if (!VAR_8) {
  FUNC_1();
  return;
 }

 VAR_6.serverStatus.refreshActive = VAR_5;
 VAR_6.serverStatus.nextDisplayRefresh = VAR_6.uiDC.realTime + 1000;

 VAR_6.serverStatus.numDisplayServers = 0;
 VAR_6.serverStatus.numPlayersOnServers = 0;

 FUNC_6(VAR_7.integer, -1, VAR_5);

 FUNC_7(VAR_7.integer);

 if( VAR_7.integer == VAR_1 ) {
  FUNC_3( VAR_3, "localservers\n" );
  VAR_6.serverStatus.refreshtime = VAR_6.uiDC.realTime + 1000;
  return;
 }

 VAR_6.serverStatus.refreshtime = VAR_6.uiDC.realTime + 5000;
 if( VAR_7.integer == VAR_0 || VAR_7.integer == VAR_2 ) {
  if( VAR_7.integer == VAR_0 ) {
   VAR_9 = 0;
  }
  else {
   VAR_9 = 1;
  }

  VAR_10 = FUNC_0("debug_protocol");
  if (FUNC_2(VAR_10)) {
   FUNC_3( VAR_3, FUNC_9( "globalservers %d %s full empty\n", VAR_9, VAR_10));
  }
  else {
   FUNC_3( VAR_3, FUNC_9( "globalservers %d %d full empty\n", VAR_9, (int)FUNC_5( "protocol" ) ) );
  }
 }
}
