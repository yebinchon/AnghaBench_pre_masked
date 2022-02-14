
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int teammates ;
typedef int name ;
struct TYPE_8__ {int ctfstrategy; int numteammates; } ;
typedef TYPE_1__ bot_state_t ;


 int FUNC_0 (TYPE_1__*,char*,char*,int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 int FUNC_4 (TYPE_1__*,int*,int) ;
 int VAR_0 ;
 int FUNC_5 (int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_6(bot_state_t *VAR_5) {
 int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10[VAR_1];
 char VAR_11[VAR_2];

 VAR_6 = FUNC_3(VAR_5, VAR_10, sizeof(VAR_10));
 FUNC_4(VAR_5, VAR_10, VAR_6);

 if (!(VAR_5->ctfstrategy & VAR_0)) {

  switch(VAR_5->numteammates) {
   case 1: break;
   case 2:
   {

    FUNC_5(VAR_10[0], VAR_11, sizeof(VAR_11));
    FUNC_0(VAR_5, "cmd_defendbase", VAR_11, ((void*)0));
    FUNC_1(VAR_5, VAR_10[0]);
    FUNC_2(VAR_5, VAR_10[0], VAR_4);

    FUNC_5(VAR_10[1], VAR_11, sizeof(VAR_11));
    FUNC_0(VAR_5, "cmd_getflag", VAR_11, ((void*)0));
    FUNC_1(VAR_5, VAR_10[1]);
    FUNC_2(VAR_5, VAR_10[1], VAR_4);
    break;
   }
   case 3:
   {

    FUNC_5(VAR_10[0], VAR_11, sizeof(VAR_11));
    FUNC_0(VAR_5, "cmd_defendbase", VAR_11, ((void*)0));
    FUNC_1(VAR_5, VAR_10[0]);
    FUNC_2(VAR_5, VAR_10[0], VAR_3);

    FUNC_5(VAR_10[1], VAR_11, sizeof(VAR_11));
    FUNC_0(VAR_5, "cmd_getflag", VAR_11, ((void*)0));
    FUNC_1(VAR_5, VAR_10[1]);
    FUNC_2(VAR_5, VAR_10[1], VAR_4);

    FUNC_5(VAR_10[2], VAR_11, sizeof(VAR_11));
    FUNC_0(VAR_5, "cmd_getflag", VAR_11, ((void*)0));
    FUNC_1(VAR_5, VAR_10[2]);
    FUNC_2(VAR_5, VAR_10[2], VAR_4);
    break;
   }
   default:
   {

    VAR_7 = (int) (float) VAR_6 * 0.3 + 0.5;
    if (VAR_7 > 3) VAR_7 = 3;
    VAR_8 = (int) (float) VAR_6 * 0.7 + 0.5;
    if (VAR_8 > 6) VAR_8 = 6;
    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {

     FUNC_5(VAR_10[VAR_9], VAR_11, sizeof(VAR_11));
     FUNC_0(VAR_5, "cmd_defendbase", VAR_11, ((void*)0));
     FUNC_1(VAR_5, VAR_10[VAR_9]);
     FUNC_2(VAR_5, VAR_10[VAR_9], VAR_3);
    }
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {

     FUNC_5(VAR_10[VAR_6 - VAR_9 - 1], VAR_11, sizeof(VAR_11));
     FUNC_0(VAR_5, "cmd_getflag", VAR_11, ((void*)0));
     FUNC_1(VAR_5, VAR_10[VAR_6 - VAR_9 - 1]);
     FUNC_2(VAR_5, VAR_10[0], VAR_4);
    }

    break;
   }
  }
 }
 else {

  switch(VAR_5->numteammates) {
   case 1: break;
   case 2:
   {

    FUNC_5(VAR_10[0], VAR_11, sizeof(VAR_11));
    FUNC_0(VAR_5, "cmd_getflag", VAR_11, ((void*)0));
    FUNC_1(VAR_5, VAR_10[0]);
    FUNC_2(VAR_5, VAR_10[0], VAR_4);

    FUNC_5(VAR_10[1], VAR_11, sizeof(VAR_11));
    FUNC_0(VAR_5, "cmd_getflag", VAR_11, ((void*)0));
    FUNC_1(VAR_5, VAR_10[1]);
    FUNC_2(VAR_5, VAR_10[1], VAR_4);
    break;
   }
   case 3:
   {

    FUNC_5(VAR_10[0], VAR_11, sizeof(VAR_11));
    FUNC_0(VAR_5, "cmd_defendbase", VAR_11, ((void*)0));
    FUNC_1(VAR_5, VAR_10[0]);
    FUNC_2(VAR_5, VAR_10[0], VAR_4);

    FUNC_5(VAR_10[1], VAR_11, sizeof(VAR_11));
    FUNC_0(VAR_5, "cmd_getflag", VAR_11, ((void*)0));
    FUNC_1(VAR_5, VAR_10[1]);
    FUNC_2(VAR_5, VAR_10[1], VAR_4);

    FUNC_5(VAR_10[2], VAR_11, sizeof(VAR_11));
    FUNC_0(VAR_5, "cmd_getflag", VAR_11, ((void*)0));
    FUNC_1(VAR_5, VAR_10[2]);
    FUNC_2(VAR_5, VAR_10[2], VAR_4);
    break;
   }
   default:
   {

    VAR_7 = (int) (float) VAR_6 * 0.2 + 0.5;
    if (VAR_7 > 2) VAR_7 = 2;
    VAR_8 = (int) (float) VAR_6 * 0.7 + 0.5;
    if (VAR_8 > 7) VAR_8 = 7;
    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {

     FUNC_5(VAR_10[VAR_9], VAR_11, sizeof(VAR_11));
     FUNC_0(VAR_5, "cmd_defendbase", VAR_11, ((void*)0));
     FUNC_1(VAR_5, VAR_10[VAR_9]);
     FUNC_2(VAR_5, VAR_10[VAR_9], VAR_3);
    }
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {

     FUNC_5(VAR_10[VAR_6 - VAR_9 - 1], VAR_11, sizeof(VAR_11));
     FUNC_0(VAR_5, "cmd_getflag", VAR_11, ((void*)0));
     FUNC_1(VAR_5, VAR_10[VAR_6 - VAR_9 - 1]);
     FUNC_2(VAR_5, VAR_10[VAR_6 - VAR_9 - 1], VAR_4);
    }

    break;
   }
  }
 }
}
