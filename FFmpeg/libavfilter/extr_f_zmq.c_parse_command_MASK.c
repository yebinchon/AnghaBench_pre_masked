
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* arg; int * command; int * target; } ;
typedef TYPE_1__ Command ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (char const**,int ) ;
 int FUNC_2 (void*,int ,char*,char const*) ;

__attribute__((used)) static int FUNC_3(Command *VAR_3, const char *VAR_4, void *VAR_5)
{
    const char **VAR_6 = &VAR_4;

    VAR_3->target = FUNC_1(VAR_6, VAR_2);
    if (!VAR_3->target || !VAR_3->target[0]) {
        FUNC_2(VAR_5, VAR_0,
               "No target specified in command '%s'\n", VAR_4);
        return FUNC_0(VAR_1);
    }

    VAR_3->command = FUNC_1(VAR_6, VAR_2);
    if (!VAR_3->command || !VAR_3->command[0]) {
        FUNC_2(VAR_5, VAR_0,
               "No command specified in command '%s'\n", VAR_4);
        return FUNC_0(VAR_1);
    }

    VAR_3->arg = FUNC_1(VAR_6, VAR_2);
    return 0;
}
