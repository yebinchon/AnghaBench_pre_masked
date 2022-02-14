
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int argc; int * argv; TYPE_1__* cmd; } ;
typedef TYPE_2__ client ;
struct TYPE_10__ {int pong; } ;
struct TYPE_8__ {int name; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 TYPE_3__ VAR_0 ;

void FUNC_3(client *VAR_1) {

    if (VAR_1->argc > 2) {
        FUNC_2(VAR_1,"wrong number of arguments for '%s' command",
            VAR_1->cmd->name);
        return;
    }

    if (VAR_1->argc == 1)
        FUNC_0(VAR_1,VAR_0.pong);
    else
        FUNC_1(VAR_1,VAR_1->argv[1]);
}
