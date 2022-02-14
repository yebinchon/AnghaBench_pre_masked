
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entries; } ;
typedef TYPE_1__ section_t ;
typedef int entry_t ;
typedef int config_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int *,char const*) ;

bool FUNC_4(config_t *VAR_0, const char *VAR_1, const char *VAR_2)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));

    section_t *VAR_3 = FUNC_3(VAR_0, VAR_1);
    entry_t *VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
    if (!VAR_3 || !VAR_4) {
        return 0;
    }

    return FUNC_2(VAR_3->entries, VAR_4);
}
