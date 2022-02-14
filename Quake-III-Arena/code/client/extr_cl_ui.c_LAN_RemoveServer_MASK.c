
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int servers ;
struct TYPE_5__ {int adr; } ;
typedef TYPE_1__ serverInfo_t ;
typedef int netadr_t ;
struct TYPE_6__ {int numlocalservers; int nummplayerservers; int numglobalservers; int numfavoriteservers; TYPE_1__* favoriteServers; TYPE_1__* globalServers; TYPE_1__* mplayerServers; TYPE_1__* localServers; } ;






 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,int *) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_3(int VAR_1, const char *VAR_2) {
 int *VAR_3, VAR_4;
 serverInfo_t *VAR_5 = ((void*)0);
 VAR_3 = 0;
 switch (VAR_1) {
  case 129 :
   VAR_3 = &VAR_0.numlocalservers;
   VAR_5 = &VAR_0.localServers[0];
   break;
  case 128 :
   VAR_3 = &VAR_0.nummplayerservers;
   VAR_5 = &VAR_0.mplayerServers[0];
   break;
  case 130 :
   VAR_3 = &VAR_0.numglobalservers;
   VAR_5 = &VAR_0.globalServers[0];
   break;
  case 131 :
   VAR_3 = &VAR_0.numfavoriteservers;
   VAR_5 = &VAR_0.favoriteServers[0];
   break;
 }
 if (VAR_5) {
  netadr_t VAR_6;
  FUNC_2( VAR_2, &VAR_6 );
  for (VAR_4 = 0; VAR_4 < *VAR_3; VAR_4++) {
   if (FUNC_1( VAR_6, VAR_5[VAR_4].adr)) {
    int VAR_7 = VAR_4;
    while (VAR_7 < *VAR_3 - 1) {
     FUNC_0(&VAR_5[VAR_7], &VAR_5[VAR_7+1], sizeof(VAR_5[VAR_7]));
     VAR_7++;
    }
    (*VAR_3)--;
    break;
   }
  }
 }
}
