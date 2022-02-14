
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* value; void* key; } ;
typedef TYPE_1__ entry_t ;


 TYPE_1__* FUNC_0 (int) ;
 void* FUNC_1 (char const*) ;

__attribute__((used)) static entry_t *FUNC_2(const char *VAR_0, const char *VAR_1)
{
    entry_t *VAR_2 = FUNC_0(sizeof(entry_t));
    if (!VAR_2) {
        return ((void*)0);
    }

    VAR_2->key = FUNC_1(VAR_0);
    VAR_2->value = FUNC_1(VAR_1);
    return VAR_2;
}
