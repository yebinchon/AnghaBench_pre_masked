
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ping; int adr; scalar_t__ visible; } ;
typedef TYPE_1__ serverInfo_t ;
typedef int qboolean ;
typedef int netadr_t ;
struct TYPE_9__ {int port; } ;
struct TYPE_11__ {TYPE_2__ adr; scalar_t__ time; int start; } ;
struct TYPE_10__ {int pingUpdateSource; int numlocalservers; int nummplayerservers; int numglobalservers; int numfavoriteservers; size_t numGlobalServerAddresses; int * globalServerAddresses; int realtime; TYPE_1__* favoriteServers; TYPE_1__* globalServers; TYPE_1__* mplayerServers; TYPE_1__* localServers; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_2__,int ) ;
 int FUNC_5 (int ,TYPE_2__,char*) ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_6 (TYPE_2__*,int *,int) ;
 int VAR_7 ;
 int VAR_8 ;

qboolean FUNC_7(int VAR_9) {
 int VAR_10, VAR_11;
 char VAR_12[VAR_3];
 int VAR_13;
 int VAR_14;
 qboolean VAR_15 = VAR_7;

 if (VAR_9 < 0 || VAR_9 > 131) {
  return VAR_7;
 }

 VAR_6.pingUpdateSource = VAR_9;

 VAR_10 = FUNC_2();
 if (VAR_10 < VAR_2) {
  serverInfo_t *VAR_16 = ((void*)0);

  VAR_14 = (VAR_9 == 130) ? VAR_0 : VAR_1;
  switch (VAR_9) {
   case 129 :
    VAR_16 = &VAR_6.localServers[0];
    VAR_14 = VAR_6.numlocalservers;
   break;
   case 128 :
    VAR_16 = &VAR_6.mplayerServers[0];
    VAR_14 = VAR_6.nummplayerservers;
   break;
   case 130 :
    VAR_16 = &VAR_6.globalServers[0];
    VAR_14 = VAR_6.numglobalservers;
   break;
   case 131 :
    VAR_16 = &VAR_6.favoriteServers[0];
    VAR_14 = VAR_6.numfavoriteservers;
   break;
  }
  for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++) {
   if (VAR_16[VAR_11].visible) {
    if (VAR_16[VAR_11].ping == -1) {
     int VAR_17;

     if (VAR_10 >= VAR_2) {
      break;
     }
     for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
      if (!VAR_5[VAR_17].adr.port) {
       continue;
      }
      if (FUNC_4( VAR_5[VAR_17].adr, VAR_16[VAR_11].adr)) {

       break;
      }
     }
     if (VAR_17 >= VAR_2) {
      VAR_15 = VAR_8;
      for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
       if (!VAR_5[VAR_17].adr.port) {
        break;
       }
      }
      FUNC_6(&VAR_5[VAR_17].adr, &VAR_16[VAR_11].adr, sizeof(netadr_t));
      VAR_5[VAR_17].start = VAR_6.realtime;
      VAR_5[VAR_17].time = 0;
      FUNC_5( VAR_4, VAR_5[VAR_17].adr, "getinfo xxx" );
      VAR_10++;
     }
    }


    else if (VAR_16[VAR_11].ping == 0) {

     if (VAR_9 == 130) {

      if ( VAR_6.numGlobalServerAddresses > 0 ) {

       VAR_6.numGlobalServerAddresses--;
       FUNC_3(&VAR_16[VAR_11], &VAR_6.globalServerAddresses[VAR_6.numGlobalServerAddresses]);

      }
     }
    }
   }
  }
 }

 if (VAR_10) {
  VAR_15 = VAR_8;
 }
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (!VAR_5[VAR_11].adr.port) {
   continue;
  }
  FUNC_1( VAR_11, VAR_12, VAR_3, &VAR_13 );
  if (VAR_13 != 0) {
   FUNC_0(VAR_11);
   VAR_15 = VAR_8;
  }
 }

 return VAR_15;
}
