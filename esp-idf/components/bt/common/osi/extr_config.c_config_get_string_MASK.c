
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* value; } ;
typedef TYPE_1__ entry_t ;
typedef int config_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int const*,char const*,char const*) ;

const char *FUNC_2(const config_t *VAR_0, const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));

    entry_t *VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
    if (!VAR_4) {
        return VAR_3;
    }

    return VAR_4->value;
}
