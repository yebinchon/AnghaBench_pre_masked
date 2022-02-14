
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ping; int gameType; int clients; int mapName; int hostName; } ;
typedef TYPE_1__ serverInfo_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;






__attribute__((used)) static int FUNC_2( int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4 ) {
 int VAR_5;
 serverInfo_t *VAR_6, *VAR_7;

 VAR_6 = FUNC_0(VAR_0, VAR_3);
 VAR_7 = FUNC_0(VAR_0, VAR_4);
 if (!VAR_6 || !VAR_7) {
  return 0;
 }

 VAR_5 = 0;
 switch( VAR_1 ) {
  case 130:
   VAR_5 = FUNC_1( VAR_6->hostName, VAR_7->hostName );
   break;

  case 129:
   VAR_5 = FUNC_1( VAR_6->mapName, VAR_7->mapName );
   break;
  case 132:
   if (VAR_6->clients < VAR_7->clients) {
    VAR_5 = -1;
   }
   else if (VAR_6->clients > VAR_7->clients) {
    VAR_5 = 1;
   }
   else {
    VAR_5 = 0;
   }
   break;
  case 131:
   if (VAR_6->gameType < VAR_7->gameType) {
    VAR_5 = -1;
   }
   else if (VAR_6->gameType > VAR_7->gameType) {
    VAR_5 = 1;
   }
   else {
    VAR_5 = 0;
   }
   break;
  case 128:
   if (VAR_6->ping < VAR_7->ping) {
    VAR_5 = -1;
   }
   else if (VAR_6->ping > VAR_7->ping) {
    VAR_5 = 1;
   }
   else {
    VAR_5 = 0;
   }
   break;
 }

 if (VAR_2) {
  if (VAR_5 < 0)
   return 1;
  if (VAR_5 > 0)
   return -1;
  return 0;
 }
 return VAR_5;
}
