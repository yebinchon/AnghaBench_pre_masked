
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int teammates ;
typedef int name ;
typedef int carriername ;
struct TYPE_8__ {int numteammates; int flagcarrier; int client; } ;
typedef TYPE_1__ bot_state_t ;


 int FUNC_0 (TYPE_1__*,char*,char*,char*,...) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 int FUNC_4 (TYPE_1__*,int*,int) ;
 int FUNC_5 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_6(bot_state_t *VAR_6) {
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12[VAR_0];
 char VAR_13[VAR_1], VAR_14[VAR_1];

 VAR_7 = FUNC_3(VAR_6, VAR_12, sizeof(VAR_12));
 FUNC_4(VAR_6, VAR_12, VAR_7);

 switch(VAR_6->numteammates) {
  case 1: break;
  case 2:
  {

   if (VAR_12[0] != VAR_6->flagcarrier) VAR_11 = VAR_12[0];
   else VAR_11 = VAR_12[1];
   FUNC_5(VAR_11, VAR_13, sizeof(VAR_13));
   FUNC_0(VAR_6, "cmd_getflag", VAR_13, ((void*)0));
   FUNC_1(VAR_6, VAR_11);
   FUNC_2(VAR_6, VAR_11, VAR_4);
   break;
  }
  case 3:
  {

   if (VAR_12[0] != VAR_6->flagcarrier) VAR_11 = VAR_12[0];
   else VAR_11 = VAR_12[1];
   FUNC_5(VAR_11, VAR_13, sizeof(VAR_13));
   if ( VAR_6->flagcarrier != -1 ) {
    FUNC_5(VAR_6->flagcarrier, VAR_14, sizeof(VAR_14));
    if (VAR_6->flagcarrier == VAR_6->client) {
     FUNC_0(VAR_6, "cmd_accompanyme", VAR_13, ((void*)0));
     FUNC_2(VAR_6, VAR_11, VAR_3);
    }
    else {
     FUNC_0(VAR_6, "cmd_accompany", VAR_13, VAR_14, ((void*)0));
     FUNC_2(VAR_6, VAR_11, VAR_2);
    }
   }
   else {

    FUNC_0(VAR_6, "cmd_getflag", VAR_13, ((void*)0));
    FUNC_2(VAR_6, VAR_11, VAR_4);
   }
   FUNC_1(VAR_6, VAR_11);

   if (VAR_12[2] != VAR_6->flagcarrier) VAR_11 = VAR_12[2];
   else VAR_11 = VAR_12[1];
   FUNC_5(VAR_11, VAR_13, sizeof(VAR_13));
   FUNC_0(VAR_6, "cmd_getflag", VAR_13, ((void*)0));
   FUNC_1(VAR_6, VAR_11);
   FUNC_2(VAR_6, VAR_11, VAR_5);
   break;
  }
  default:
  {
   VAR_8 = (int) (float) VAR_7 * 0.4 + 0.5;
   if (VAR_8 > 4) VAR_8 = 4;
   VAR_9 = (int) (float) VAR_7 * 0.5 + 0.5;
   if (VAR_9 > 5) VAR_9 = 5;
   if (VAR_6->flagcarrier != -1) {
    FUNC_5(VAR_6->flagcarrier, VAR_14, sizeof(VAR_14));
    for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {

     if (VAR_12[VAR_10] == VAR_6->flagcarrier) {
      continue;
     }

     FUNC_5(VAR_12[VAR_10], VAR_13, sizeof(VAR_13));
     if (VAR_6->flagcarrier == VAR_6->client) {
      FUNC_0(VAR_6, "cmd_accompanyme", VAR_13, ((void*)0));
      FUNC_2(VAR_6, VAR_12[VAR_10], VAR_3);
     }
     else {
      FUNC_0(VAR_6, "cmd_accompany", VAR_13, VAR_14, ((void*)0));
      FUNC_2(VAR_6, VAR_12[VAR_10], VAR_2);
     }
     FUNC_1(VAR_6, VAR_12[VAR_10]);
    }
   }
   else {
    for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {

     if (VAR_12[VAR_10] == VAR_6->flagcarrier) {
      continue;
     }

     FUNC_5(VAR_12[VAR_10], VAR_13, sizeof(VAR_13));
     FUNC_0(VAR_6, "cmd_getflag", VAR_13, ((void*)0));
     FUNC_2(VAR_6, VAR_12[VAR_10], VAR_4);
     FUNC_1(VAR_6, VAR_12[VAR_10]);
    }
   }
   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {

    if (VAR_12[VAR_7 - VAR_10 - 1] == VAR_6->flagcarrier) {
     continue;
    }

    FUNC_5(VAR_12[VAR_7 - VAR_10 - 1], VAR_13, sizeof(VAR_13));
    FUNC_0(VAR_6, "cmd_getflag", VAR_13, ((void*)0));
    FUNC_1(VAR_6, VAR_12[VAR_7 - VAR_10 - 1]);
    FUNC_2(VAR_6, VAR_12[VAR_7 - VAR_10 - 1], VAR_5);
   }

   break;
  }
 }
}
