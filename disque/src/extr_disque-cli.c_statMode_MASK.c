
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; char* str; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_6__ {int interval; } ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,long) ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,...) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (char*,char*,long,...) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void) {
    redisReply *VAR_3;
    long VAR_4, VAR_5 = 0;
    int VAR_6 = 0;

    while(1) {
        char VAR_7[64];
        int VAR_8;

        VAR_3 = FUNC_5();
        if (VAR_3->type == VAR_1) {
            FUNC_4("ERROR: %s\n", VAR_3->str);
            FUNC_1(1);
        }

        if ((VAR_6++ % 20) == 0) {
            FUNC_4(
"------- data ------ --------------------- load -------------------- - child -\n"
"keys       mem      clients blocked requests            connections          \n");
        }


        VAR_4 = 0;
        for (VAR_8 = 0; VAR_8 < 20; VAR_8++) {
            long VAR_9;

            FUNC_6(VAR_7,"db%d:keys",VAR_8);
            VAR_9 = FUNC_3(VAR_3->str,VAR_7);
            if (VAR_9 == VAR_0) continue;
            VAR_4 += VAR_9;
        }
        FUNC_6(VAR_7,"%ld",VAR_4);
        FUNC_4("%-11s",VAR_7);


        VAR_4 = FUNC_3(VAR_3->str,"used_memory");
        FUNC_0(VAR_7,VAR_4);
        FUNC_4("%-8s",VAR_7);


        VAR_4 = FUNC_3(VAR_3->str,"connected_clients");
        FUNC_6(VAR_7,"%ld",VAR_4);
        FUNC_4(" %-8s",VAR_7);


        VAR_4 = FUNC_3(VAR_3->str,"blocked_clients");
        FUNC_6(VAR_7,"%ld",VAR_4);
        FUNC_4("%-8s",VAR_7);


        VAR_4 = FUNC_3(VAR_3->str,"total_commands_processed");
        FUNC_6(VAR_7,"%ld (+%ld)",VAR_4,VAR_5 == 0 ? 0 : VAR_4-VAR_5);
        FUNC_4("%-19s",VAR_7);
        VAR_5 = VAR_4;


        VAR_4 = FUNC_3(VAR_3->str,"total_connections_received");
        FUNC_6(VAR_7,"%ld",VAR_4);
        FUNC_4(" %-12s",VAR_7);


        VAR_4 = FUNC_3(VAR_3->str,"bgsave_in_progress");
        VAR_4 |= FUNC_3(VAR_3->str,"aof_rewrite_in_progress") << 1;
        switch(VAR_4) {
        case 0: break;
        case 1:
            FUNC_4("SAVE");
            break;
        case 2:
            FUNC_4("AOF");
            break;
        case 3:
            FUNC_4("SAVE+AOF");
            break;
        }

        FUNC_4("\n");
        FUNC_2(VAR_3);
        FUNC_7(VAR_2.interval);
    }
}
