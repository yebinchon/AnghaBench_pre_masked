
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ test_func; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(int VAR_1, char *VAR_2[])
{
    int VAR_3, VAR_4, VAR_5 = 0;

    for (VAR_3 = 0; VAR_0[VAR_3].test_func; VAR_3++) {
        VAR_4 = FUNC_0(&VAR_0[VAR_3]);
        if (!VAR_5 && VAR_4 < 0)
            VAR_5 = VAR_4;
    }

    return VAR_4;
}
