
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* cmd; int argc; int argv; } ;
typedef TYPE_2__ client ;
struct TYPE_9__ {int stat_numcommands; int monitors; int loading; } ;
struct TYPE_7__ {int flags; long long microseconds; int calls; int (* proc ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,long long) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 TYPE_4__ VAR_4 ;
 int FUNC_3 (int ,int ,long long) ;
 int FUNC_4 (TYPE_2__*) ;
 long long FUNC_5 () ;

void FUNC_6(client *VAR_5, int VAR_6) {
    long long VAR_7, VAR_8;



    if (FUNC_1(VAR_4.monitors) &&
        !VAR_4.loading &&
        !(VAR_5->cmd->flags & VAR_3))
    {
        FUNC_2(VAR_5,VAR_4.monitors,VAR_5->argv,VAR_5->argc);
    }


    VAR_7 = FUNC_5();
    VAR_5->cmd->proc(VAR_5);
    VAR_8 = FUNC_5()-VAR_7;



    if (VAR_6 & VAR_0) {
        char *VAR_9 = (VAR_5->cmd->flags & VAR_2) ?
                              "fast-command" : "command";
        FUNC_0(VAR_9,VAR_8/1000);
        FUNC_3(VAR_5->argv,VAR_5->argc,VAR_8);
    }
    if (VAR_6 & VAR_1) {
        VAR_5->cmd->microseconds += VAR_8;
        VAR_5->cmd->calls++;
    }
    VAR_4.stat_numcommands++;
}
