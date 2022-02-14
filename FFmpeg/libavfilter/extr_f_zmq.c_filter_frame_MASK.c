
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int cmd_buf ;
struct TYPE_10__ {int command_count; int responder; } ;
typedef TYPE_1__ ZMQContext ;
struct TYPE_13__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_12__ {int graph; TYPE_4__* dst; } ;
struct TYPE_11__ {char* target; char* command; char* arg; int member_0; } ;
typedef TYPE_2__ Command ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (char*,int,int ,char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (TYPE_4__*,int ,char*,int ,...) ;
 int FUNC_5 (int ,char*,char*,char*,char*,int,int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*,char*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,char**,int*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,int ,int ) ;
 char* FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_4, AVFrame *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_4->dst;
    ZMQContext *VAR_7 = VAR_6->priv;

    while (1) {
        char VAR_8[1024];
        char *VAR_9, *VAR_10;
        int VAR_11;
        Command VAR_12 = {0};
        int VAR_13;


        if (FUNC_8(VAR_6, &VAR_9, &VAR_11) < 0)
            break;
        VAR_7->command_count++;


        if (FUNC_7(&VAR_12, VAR_9, VAR_6) < 0) {
            FUNC_4(VAR_6, VAR_1, "Could not parse command #%d\n", VAR_7->command_count);
            goto end;
        }


        FUNC_4(VAR_6, VAR_2,
               "Processing command #%d target:%s command:%s arg:%s\n",
               VAR_7->command_count, VAR_12.target, VAR_12.command, VAR_12.arg);
        VAR_13 = FUNC_5(VAR_4->graph,
                                          VAR_12.target, VAR_12.command, VAR_12.arg,
                                          VAR_8, sizeof(VAR_8),
                                          VAR_0);
        VAR_10 = FUNC_1("%d %s%s%s",
                               -VAR_13, FUNC_2(VAR_13), VAR_8[0] ? "\n" : "", VAR_8);
        if (!VAR_10) {
            VAR_13 = FUNC_0(VAR_3);
            goto end;
        }
        FUNC_4(VAR_6, VAR_2,
               "Sending command reply for command #%d:\n%s\n",
               VAR_7->command_count, VAR_10);
        if (FUNC_10(VAR_7->responder, VAR_10, FUNC_9(VAR_10), 0) == -1)
            FUNC_4(VAR_6, VAR_1, "Failed to send reply for command #%d: %s\n",
                   VAR_7->command_count, FUNC_11(VAR_13));

    end:
        FUNC_3(&VAR_10);
        FUNC_3(&VAR_9);
        VAR_11 = 0;
        FUNC_3(&VAR_12.target);
        FUNC_3(&VAR_12.command);
        FUNC_3(&VAR_12.arg);
    }

    return FUNC_6(VAR_6->outputs[0], VAR_5);
}
