
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int min; int max; } ;
typedef TYPE_1__ AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,int ,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_2, const AVOption *VAR_3, const char *VAR_4, int *VAR_5)
{
    int VAR_6;

    if (!VAR_4)
        return 0;

    if (!FUNC_3(VAR_4, "auto")) {
        VAR_6 = -1;
    } else if (FUNC_2(VAR_4, "true,y,yes,enable,enabled,on")) {
        VAR_6 = 1;
    } else if (FUNC_2(VAR_4, "false,n,no,disable,disabled,off")) {
        VAR_6 = 0;
    } else {
        char *VAR_7 = ((void*)0);
        VAR_6 = FUNC_5(VAR_4, &VAR_7, 10);
        if (VAR_4 + FUNC_4(VAR_4) != VAR_7)
            goto fail;
    }

    if (VAR_6 < VAR_3->min || VAR_6 > VAR_3->max)
        goto fail;

    *VAR_5 = VAR_6;
    return 0;

fail:
    FUNC_1(VAR_2, VAR_0, "Unable to parse option value \"%s\" as boolean\n", VAR_4);
    return FUNC_0(VAR_1);
}
