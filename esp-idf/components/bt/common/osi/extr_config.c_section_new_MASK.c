
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int entries; int name; } ;
typedef TYPE_1__ section_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static section_t *FUNC_3(const char *VAR_1)
{
    section_t *VAR_2 = FUNC_1(sizeof(section_t));
    if (!VAR_2) {
        return ((void*)0);
    }

    VAR_2->name = FUNC_2(VAR_1);
    VAR_2->entries = FUNC_0(VAR_0);
    return VAR_2;
}
