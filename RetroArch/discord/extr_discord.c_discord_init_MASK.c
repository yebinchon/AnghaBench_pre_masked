
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int discord_app_id; } ;
struct TYPE_8__ {TYPE_1__ arrays; } ;
typedef TYPE_2__ settings_t ;
typedef int handlers ;
typedef int full_path ;
typedef int command ;
struct TYPE_9__ {int joinRequest; int spectateGame; int joinGame; int errored; int disconnected; int ready; } ;
typedef TYPE_3__ DiscordEventHandlers ;


 int FUNC_0 (int ,TYPE_3__*,int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,...) ;
 TYPE_2__* FUNC_4 () ;
 int VAR_1 ;
 char* FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,char*,char*,...) ;
 int VAR_8 ;
 int FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (int ) ;

void FUNC_12(void)
{
   char VAR_9[VAR_0];
   char VAR_10[VAR_0];
   settings_t *VAR_11 = FUNC_4();

   DiscordEventHandlers VAR_12;

   FUNC_3("[discord] initializing ..\n");
   VAR_8 = FUNC_11(0);

   FUNC_6(&VAR_12, 0, sizeof(VAR_12));
   VAR_12.ready = VAR_6;
   VAR_12.disconnected = VAR_2;
   VAR_12.errored = VAR_3;
   VAR_12.joinGame = VAR_4;
   VAR_12.spectateGame = VAR_7;
   VAR_12.joinRequest = VAR_5;

   FUNC_0(VAR_11->arrays.discord_app_id, &VAR_12, 0, ((void*)0));
   FUNC_8(VAR_10, sizeof(VAR_10), "sh -c %s",
         FUNC_5());

   FUNC_3("[discord] registering startup command: %s\n", VAR_10);
   FUNC_1(VAR_11->arrays.discord_app_id, VAR_10);
   VAR_1 = 1;
}
