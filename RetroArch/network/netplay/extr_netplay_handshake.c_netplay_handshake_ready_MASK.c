
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct netplay_connection {char* nick; int addr; } ;
struct TYPE_3__ {int connections; int quirks; int force_send_savestate; int is_connected; scalar_t__ stall; scalar_t__ is_server; } ;
typedef TYPE_1__ netplay_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,char*,...) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned int,char*,char*,int) ;
 int FUNC_3 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_4 (char*,int,char*,char*,char*) ;

__attribute__((used)) static void FUNC_5(netplay_t *VAR_8,
      struct netplay_connection *VAR_9)
{
   char VAR_10[512];
   VAR_10[0] = '\0';

   if (VAR_8->is_server)
   {
      unsigned VAR_11 = (unsigned)(VAR_9 - VAR_8->connections);

      FUNC_2(&VAR_9->addr,
            VAR_11, VAR_9->nick, VAR_10, sizeof(VAR_10));

      FUNC_0("%s %u\n", FUNC_1(VAR_3), VAR_11);


      if (!(VAR_8->quirks &
               (VAR_4|VAR_5)))
         VAR_8->force_send_savestate = 1;
   }
   else
   {
      VAR_8->is_connected = 1;
      FUNC_4(VAR_10, sizeof(VAR_10), "%s: \"%s\"",
            FUNC_1(VAR_2),
            VAR_9->nick);
   }

   FUNC_0("%s\n", VAR_10);
   FUNC_3(VAR_10, 1, 180, 0, ((void*)0), VAR_1, VAR_0);


   if (VAR_8->stall == VAR_7)
       VAR_8->stall = VAR_6;
}
