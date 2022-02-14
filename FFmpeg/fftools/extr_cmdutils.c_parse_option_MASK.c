
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ name; } ;
typedef TYPE_1__ OptionDef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,char*,char const*) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*,char const*) ;
 int FUNC_3 (void*,TYPE_1__ const*,char const*,char const*) ;

int FUNC_4(void *VAR_4, const char *VAR_5, const char *VAR_6,
                 const OptionDef *VAR_7)
{
    const OptionDef *VAR_8;
    int VAR_9;

    VAR_8 = FUNC_2(VAR_7, VAR_5);
    if (!VAR_8->name && VAR_5[0] == 'n' && VAR_5[1] == 'o') {

        VAR_8 = FUNC_2(VAR_7, VAR_5 + 2);
        if ((VAR_8->name && (VAR_8->flags & VAR_3)))
            VAR_6 = "0";
    } else if (VAR_8->flags & VAR_3)
        VAR_6 = "1";

    if (!VAR_8->name)
        VAR_8 = FUNC_2(VAR_7, "default");
    if (!VAR_8->name) {
        FUNC_1(((void*)0), VAR_0, "Unrecognized option '%s'\n", VAR_5);
        return FUNC_0(VAR_1);
    }
    if (VAR_8->flags & VAR_2 && !VAR_6) {
        FUNC_1(((void*)0), VAR_0, "Missing argument for option '%s'\n", VAR_5);
        return FUNC_0(VAR_1);
    }

    VAR_9 = FUNC_3(VAR_4, VAR_8, VAR_5, VAR_6);
    if (VAR_9 < 0)
        return VAR_9;

    return !!(VAR_8->flags & VAR_2);
}
