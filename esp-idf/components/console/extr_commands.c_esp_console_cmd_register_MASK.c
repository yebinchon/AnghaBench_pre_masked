
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_11__ {int func; scalar_t__ argtable; int hint; int help; int * command; } ;
typedef TYPE_1__ esp_console_cmd_t ;
struct TYPE_12__ {char* hint; int func; scalar_t__ argtable; int help; int * command; } ;
typedef TYPE_2__ cmd_item_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,scalar_t__,int *) ;
 int FUNC_5 (char**,char*,int ) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_3 ;
 int * FUNC_9 (char**,size_t*) ;
 int VAR_4 ;
 int * FUNC_10 (int *,char) ;

esp_err_t FUNC_11(const esp_console_cmd_t *VAR_5)
{
    cmd_item_t *VAR_6 = (cmd_item_t *) FUNC_6(1, sizeof(*VAR_6));
    if (VAR_6 == ((void*)0)) {
        return VAR_1;
    }
    if (VAR_5->command == ((void*)0)) {
        FUNC_8(VAR_6);
        return VAR_0;
    }
    if (FUNC_10(VAR_5->command, ' ') != ((void*)0)) {
        FUNC_8(VAR_6);
        return VAR_0;
    }
    VAR_6->command = VAR_5->command;
    VAR_6->help = VAR_5->help;
    if (VAR_5->hint) {



        int VAR_7 __attribute__((unused));
        VAR_7 = FUNC_5(&VAR_6->hint, " %d", VAR_5->hint);
    } else if (VAR_5->argtable) {

        char *VAR_8 = ((void*)0);
        size_t VAR_9 = 0;
        FILE *VAR_10 = FUNC_9(&VAR_8, &VAR_9);
        if (VAR_10 != ((void*)0)) {
            FUNC_4(VAR_10, VAR_5->argtable, ((void*)0));
            FUNC_7(VAR_10);
        }
        VAR_6->hint = VAR_8;
    }
    VAR_6->argtable = VAR_5->argtable;
    VAR_6->func = VAR_5->func;
    cmd_item_t *VAR_11 = FUNC_0(&VAR_4);
    if (VAR_11 == ((void*)0)) {
        FUNC_2(&VAR_4, VAR_6, VAR_3);
    } else {
        cmd_item_t *VAR_12;
        while ((VAR_12 = FUNC_3(VAR_11, VAR_3)) != ((void*)0)) {
            VAR_11 = VAR_12;
        }
        FUNC_1(VAR_11, VAR_6, VAR_3);
    }
    return VAR_2;
}
