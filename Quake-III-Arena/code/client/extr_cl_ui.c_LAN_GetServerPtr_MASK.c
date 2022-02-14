
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int serverInfo_t ;
struct TYPE_2__ {int * favoriteServers; int * globalServers; int * mplayerServers; int * localServers; } ;






 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static serverInfo_t *FUNC_0( int VAR_3, int VAR_4 ) {
 switch (VAR_3) {
  case 129 :
   if (VAR_4 >= 0 && VAR_4 < VAR_1) {
    return &VAR_2.localServers[VAR_4];
   }
   break;
  case 128 :
   if (VAR_4 >= 0 && VAR_4 < VAR_1) {
    return &VAR_2.mplayerServers[VAR_4];
   }
   break;
  case 130 :
   if (VAR_4 >= 0 && VAR_4 < VAR_0) {
    return &VAR_2.globalServers[VAR_4];
   }
   break;
  case 131 :
   if (VAR_4 >= 0 && VAR_4 < VAR_1) {
    return &VAR_2.favoriteServers[VAR_4];
   }
   break;
 }
 return ((void*)0);
}
