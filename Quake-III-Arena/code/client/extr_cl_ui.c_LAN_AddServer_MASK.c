
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int visible; int hostName; int adr; } ;
typedef TYPE_1__ serverInfo_t ;
typedef int netadr_t ;
struct TYPE_4__ {int numlocalservers; int nummplayerservers; int numglobalservers; int numfavoriteservers; TYPE_1__* favoriteServers; TYPE_1__* globalServers; TYPE_1__* mplayerServers; TYPE_1__* localServers; } ;






 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (int ,char const*,int) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(int VAR_4, const char *VAR_5, const char *VAR_6) {
 int VAR_7, *VAR_8, VAR_9;
 netadr_t VAR_10;
 serverInfo_t *VAR_11 = ((void*)0);
 VAR_7 = VAR_1;
 VAR_8 = 0;

 switch (VAR_4) {
  case 129 :
   VAR_8 = &VAR_2.numlocalservers;
   VAR_11 = &VAR_2.localServers[0];
   break;
  case 128 :
   VAR_8 = &VAR_2.nummplayerservers;
   VAR_11 = &VAR_2.mplayerServers[0];
   break;
  case 130 :
   VAR_7 = VAR_0;
   VAR_8 = &VAR_2.numglobalservers;
   VAR_11 = &VAR_2.globalServers[0];
   break;
  case 131 :
   VAR_8 = &VAR_2.numfavoriteservers;
   VAR_11 = &VAR_2.favoriteServers[0];
   break;
 }
 if (VAR_11 && *VAR_8 < VAR_7) {
  FUNC_1( VAR_6, &VAR_10 );
  for ( VAR_9 = 0; VAR_9 < *VAR_8; VAR_9++ ) {
   if (FUNC_0(VAR_11[VAR_9].adr, VAR_10)) {
    break;
   }
  }
  if (VAR_9 >= *VAR_8) {
   VAR_11[*VAR_8].adr = VAR_10;
   FUNC_2(VAR_11[*VAR_8].hostName, VAR_5, sizeof(VAR_11[*VAR_8].hostName));
   VAR_11[*VAR_8].visible = VAR_3;
   (*VAR_8)++;
   return 1;
  }
  return 0;
 }
 return -1;
}
