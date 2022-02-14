
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int section_t ;
struct TYPE_4__ {int sections; } ;
typedef TYPE_1__ config_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (TYPE_1__*,char const*) ;

bool FUNC_3(config_t *VAR_0, const char *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));

    section_t *VAR_2 = FUNC_2(VAR_0, VAR_1);
    if (!VAR_2) {
        return 0;
    }

    return FUNC_1(VAR_0->sections, VAR_2);
}
