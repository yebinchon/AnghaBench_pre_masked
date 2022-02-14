
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* username; char* discriminator; char* userId; } ;
typedef TYPE_1__ DiscordUser ;


 int FUNC_0 (char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_1(const DiscordUser* VAR_0)
{
    FUNC_0("\nDiscord: connected to user %s#%s - %s\n",
           VAR_0->username,
           VAR_0->discriminator,
           VAR_0->userId);
}
