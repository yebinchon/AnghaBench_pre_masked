
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yn ;
struct TYPE_3__ {char* username; char* discriminator; char* userId; } ;
typedef TYPE_1__ DiscordUser ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(const DiscordUser* VAR_2)
{
    int VAR_3 = -1;
    char VAR_4[4];
    FUNC_1("\nDiscord: join request from %s#%s - %s\n",
           VAR_2->username,
           VAR_2->discriminator,
           VAR_2->userId);
    do {
        FUNC_1("Accept? (y/n)");
        if (!FUNC_2(VAR_4, sizeof(VAR_4))) {
            break;
        }

        if (!VAR_4[0]) {
            continue;
        }

        if (VAR_4[0] == 'y') {
            VAR_3 = VAR_1;
            break;
        }

        if (VAR_4[0] == 'n') {
            VAR_3 = VAR_0;
            break;
        }
    } while (1);
    if (VAR_3 != -1) {
        FUNC_0(VAR_2->userId, VAR_3);
    }
}
