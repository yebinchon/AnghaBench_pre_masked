
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* favoriteServers; TYPE_3__* globalServers; TYPE_2__* mplayerServers; TYPE_1__* localServers; } ;
struct TYPE_9__ {int adr; } ;
struct TYPE_8__ {int adr; } ;
struct TYPE_7__ {int adr; } ;
struct TYPE_6__ {int adr; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 TYPE_5__ VAR_2 ;

__attribute__((used)) static void FUNC_2( int VAR_3, int VAR_4, char *VAR_5, int VAR_6 ) {
 switch (VAR_3) {
  case 129 :
   if (VAR_4 >= 0 && VAR_4 < VAR_1) {
    FUNC_1(VAR_5, FUNC_0( VAR_2.localServers[VAR_4].adr) , VAR_6 );
    return;
   }
   break;
  case 128 :
   if (VAR_4 >= 0 && VAR_4 < VAR_1) {
    FUNC_1(VAR_5, FUNC_0( VAR_2.mplayerServers[VAR_4].adr) , VAR_6 );
    return;
   }
   break;
  case 130 :
   if (VAR_4 >= 0 && VAR_4 < VAR_0) {
    FUNC_1(VAR_5, FUNC_0( VAR_2.globalServers[VAR_4].adr) , VAR_6 );
    return;
   }
   break;
  case 131 :
   if (VAR_4 >= 0 && VAR_4 < VAR_1) {
    FUNC_1(VAR_5, FUNC_0( VAR_2.favoriteServers[VAR_4].adr) , VAR_6 );
    return;
   }
   break;
 }
 VAR_5[0] = '\0';
}
