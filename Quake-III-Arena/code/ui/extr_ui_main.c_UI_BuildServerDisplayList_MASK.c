
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int qboolean ;
struct TYPE_14__ {scalar_t__ realTime; } ;
struct TYPE_13__ {scalar_t__ nextDisplayRefresh; int motdLen; int motdWidth; scalar_t__ refreshtime; scalar_t__ numPlayersOnServers; scalar_t__ numDisplayServers; int motd; } ;
struct TYPE_20__ {TYPE_3__ uiDC; TYPE_2__ serverStatus; TYPE_1__* joinGameTypes; } ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {size_t integer; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {size_t integer; } ;
struct TYPE_12__ {int gtEnum; } ;
struct TYPE_11__ {int basedir; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_10__* VAR_6 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int,char*,int) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__,int,int) ;
 int FUNC_13 (scalar_t__,int) ;
 TYPE_9__ VAR_7 ;
 TYPE_8__ VAR_8 ;
 TYPE_7__ VAR_9 ;
 TYPE_6__ VAR_10 ;
 TYPE_5__ VAR_11 ;
 TYPE_4__ VAR_12 ;

__attribute__((used)) static void FUNC_14(qboolean VAR_13) {
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 char VAR_22[VAR_3];

 static int VAR_23;

 if (!(VAR_13 || VAR_7.uiDC.realTime > VAR_7.serverStatus.nextDisplayRefresh)) {
  return;
 }

 if ( VAR_13 == 2 ) {
  VAR_13 = 0;
 }


 FUNC_8( "cl_motdString", VAR_7.serverStatus.motd, sizeof(VAR_7.serverStatus.motd) );
 VAR_20 = FUNC_7(VAR_7.serverStatus.motd);
 if (VAR_20 == 0) {
  FUNC_6(VAR_7.serverStatus.motd, "Welcome to Team Arena!");
  VAR_20 = FUNC_7(VAR_7.serverStatus.motd);
 }
 if (VAR_20 != VAR_7.serverStatus.motdLen) {
  VAR_7.serverStatus.motdLen = VAR_20;
  VAR_7.serverStatus.motdWidth = -1;
 }

 if (VAR_13) {
  VAR_23 = 0;

  VAR_7.serverStatus.numDisplayServers = 0;
  VAR_7.serverStatus.numPlayersOnServers = 0;

  FUNC_1(((void*)0), VAR_2, 0, ((void*)0));

  FUNC_12(VAR_11.integer, -1, VAR_5);
 }


 VAR_15 = FUNC_9(VAR_11.integer);
 if (VAR_15 == -1 || (VAR_11.integer == VAR_1 && VAR_15 == 0) ) {

  VAR_7.serverStatus.numDisplayServers = 0;
  VAR_7.serverStatus.numPlayersOnServers = 0;
  VAR_7.serverStatus.nextDisplayRefresh = VAR_7.uiDC.realTime + 500;
  return;
 }

 VAR_21 = VAR_4;
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {

  if (!FUNC_13(VAR_11.integer, VAR_14)) {
   continue;
  }
  VAR_21 = VAR_5;

  VAR_18 = FUNC_11(VAR_11.integer, VAR_14);
  if (VAR_18 > 0 || VAR_11.integer == VAR_0) {

   FUNC_10(VAR_11.integer, VAR_14, VAR_22, VAR_3);

   VAR_16 = FUNC_5(FUNC_0(VAR_22, "clients"));
   VAR_7.serverStatus.numPlayersOnServers += VAR_16;

   if (VAR_8.integer == 0) {
    if (VAR_16 == 0) {
     FUNC_12(VAR_11.integer, VAR_14, VAR_4);
     continue;
    }
   }

   if (VAR_9.integer == 0) {
    VAR_17 = FUNC_5(FUNC_0(VAR_22, "sv_maxclients"));
    if (VAR_16 == VAR_17) {
     FUNC_12(VAR_11.integer, VAR_14, VAR_4);
     continue;
    }
   }

   if (VAR_7.joinGameTypes[VAR_10.integer].gtEnum != -1) {
    VAR_19 = FUNC_5(FUNC_0(VAR_22, "gametype"));
    if (VAR_19 != VAR_7.joinGameTypes[VAR_10.integer].gtEnum) {
     FUNC_12(VAR_11.integer, VAR_14, VAR_4);
     continue;
    }
   }

   if (VAR_12.integer > 0) {
    if (FUNC_2(FUNC_0(VAR_22, "game"), VAR_6[VAR_12.integer].basedir) != 0) {
     FUNC_12(VAR_11.integer, VAR_14, VAR_4);
     continue;
    }
   }

   if (VAR_11.integer == VAR_0) {
    FUNC_4(VAR_14);
   }

   FUNC_3(VAR_14);

   if (VAR_18 > 0) {
    FUNC_12(VAR_11.integer, VAR_14, VAR_4);
    VAR_23++;
   }
  }
 }

 VAR_7.serverStatus.refreshtime = VAR_7.uiDC.realTime;


 if (!VAR_21) {


 }
}
