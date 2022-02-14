
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pools; } ;
typedef TYPE_1__ FFFramePool ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__**) ;

void FUNC_2(FFFramePool **VAR_0)
{
    int VAR_1;

    if (!VAR_0 || !*VAR_0)
        return;

    for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
        FUNC_0(&(*VAR_0)->pools[VAR_1]);
    }

    FUNC_1(VAR_0);
}
