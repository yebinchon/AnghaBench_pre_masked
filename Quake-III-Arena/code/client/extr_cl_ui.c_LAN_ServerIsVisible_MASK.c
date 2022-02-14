
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* favoriteServers; TYPE_4__* globalServers; TYPE_3__* mplayerServers; TYPE_2__* localServers; } ;
struct TYPE_9__ {int visible; } ;
struct TYPE_8__ {int visible; } ;
struct TYPE_7__ {int visible; } ;
struct TYPE_6__ {int visible; } ;






 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(int VAR_4, int VAR_5 ) {
 switch (VAR_4) {
  case 129 :
   if (VAR_5 >= 0 && VAR_5 < VAR_1) {
    return VAR_2.localServers[VAR_5].visible;
   }
   break;
  case 128 :
   if (VAR_5 >= 0 && VAR_5 < VAR_1) {
    return VAR_2.mplayerServers[VAR_5].visible;
   }
   break;
  case 130 :
   if (VAR_5 >= 0 && VAR_5 < VAR_0) {
    return VAR_2.globalServers[VAR_5].visible;
   }
   break;
  case 131 :
   if (VAR_5 >= 0 && VAR_5 < VAR_1) {
    return VAR_2.favoriteServers[VAR_5].visible;
   }
   break;
 }
 return VAR_3;
}
