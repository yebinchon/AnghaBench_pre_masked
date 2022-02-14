
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ test_desc_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(void)
{
    int VAR_1 = 0;
    for (const test_desc_t *VAR_2 = VAR_0;
            VAR_2 != ((void*)0);
            VAR_2 = VAR_2->next) {
        ++VAR_1;
    }
    return VAR_1;
}
