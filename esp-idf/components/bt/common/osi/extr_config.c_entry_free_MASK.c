
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* value; struct TYPE_3__* key; } ;
typedef TYPE_1__ entry_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
    if (!VAR_0) {
        return;
    }

    entry_t *VAR_1 = VAR_0;
    FUNC_0(VAR_1->key);
    FUNC_0(VAR_1->value);
    FUNC_0(VAR_1);
}
