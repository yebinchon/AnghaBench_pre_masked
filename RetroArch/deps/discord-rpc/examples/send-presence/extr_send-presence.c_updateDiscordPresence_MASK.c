
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int discordPresence ;
struct TYPE_4__ {char* state; char* details; char* largeImageKey; char* smallImageKey; char* partyId; int partySize; int partyMax; char* matchSecret; char* joinSecret; char* spectateSecret; scalar_t__ instance; scalar_t__ endTimestamp; int startTimestamp; } ;
typedef TYPE_1__ DiscordRichPresence ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5()
{
    if (VAR_1) {
        char VAR_3[256];
        DiscordRichPresence VAR_4;
        FUNC_2(&VAR_4, 0, sizeof(VAR_4));
        VAR_4.state = "West of House";
        FUNC_3(VAR_3, "Frustration level: %d", VAR_0);
        VAR_4.details = VAR_3;
        VAR_4.startTimestamp = VAR_2;
        VAR_4.endTimestamp = FUNC_4(0) + 5 * 60;
        VAR_4.largeImageKey = "canary-large";
        VAR_4.smallImageKey = "ptb-small";
        VAR_4.partyId = "party1234";
        VAR_4.partySize = 1;
        VAR_4.partyMax = 6;
        VAR_4.matchSecret = "xyzzy";
        VAR_4.joinSecret = "join";
        VAR_4.spectateSecret = "look";
        VAR_4.instance = 0;
        FUNC_1(&VAR_4);
    }
    else {
        FUNC_0();
    }
}
