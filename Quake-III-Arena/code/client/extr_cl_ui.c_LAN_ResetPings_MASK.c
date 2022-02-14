
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ping; } ;
typedef TYPE_1__ serverInfo_t ;
struct TYPE_4__ {TYPE_1__* favoriteServers; TYPE_1__* globalServers; TYPE_1__* mplayerServers; TYPE_1__* localServers; } ;






 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_0(int VAR_3) {
 int VAR_4,VAR_5;
 serverInfo_t *VAR_6 = ((void*)0);
 VAR_4 = 0;

 switch (VAR_3) {
  case 129 :
   VAR_6 = &VAR_2.localServers[0];
   VAR_4 = VAR_1;
   break;
  case 128 :
   VAR_6 = &VAR_2.mplayerServers[0];
   VAR_4 = VAR_1;
   break;
  case 130 :
   VAR_6 = &VAR_2.globalServers[0];
   VAR_4 = VAR_0;
   break;
  case 131 :
   VAR_6 = &VAR_2.favoriteServers[0];
   VAR_4 = VAR_1;
   break;
 }
 if (VAR_6) {
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
   VAR_6[VAR_5].ping = -1;
  }
 }
}
