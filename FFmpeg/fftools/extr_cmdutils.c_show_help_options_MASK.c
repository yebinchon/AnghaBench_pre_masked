
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int flags; char* argname; char* help; scalar_t__ name; } ;
typedef TYPE_1__ OptionDef ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,scalar_t__,int) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(const OptionDef *VAR_0, const char *VAR_1, int VAR_2,
                       int VAR_3, int VAR_4)
{
    const OptionDef *VAR_5;
    int VAR_6;

    VAR_6 = 1;
    for (VAR_5 = VAR_0; VAR_5->name; VAR_5++) {
        char VAR_7[64];

        if (((VAR_5->flags & VAR_2) != VAR_2) ||
            (VAR_4 && !(VAR_5->flags & VAR_4)) ||
            (VAR_5->flags & VAR_3))
            continue;

        if (VAR_6) {
            FUNC_2("%s\n", VAR_1);
            VAR_6 = 0;
        }
        FUNC_1(VAR_7, VAR_5->name, sizeof(VAR_7));
        if (VAR_5->argname) {
            FUNC_0(VAR_7, " ", sizeof(VAR_7));
            FUNC_0(VAR_7, VAR_5->argname, sizeof(VAR_7));
        }
        FUNC_2("-%-17s  %s\n", VAR_7, VAR_5->help);
    }
    FUNC_2("\n");
}
