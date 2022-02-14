
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
typedef TYPE_1__ entry_t ;
typedef int config_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int const*,char const*,char const*) ;
 int FUNC_2 (int ,char**,int ) ;

int FUNC_3(const config_t *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));

    entry_t *VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
    if (!VAR_4) {
        return VAR_3;
    }

    char *VAR_5;
    int VAR_6 = FUNC_2(VAR_4->value, &VAR_5, 0);
    return (*VAR_5 == '\0') ? VAR_6 : VAR_3;
}
