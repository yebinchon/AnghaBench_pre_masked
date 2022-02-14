
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ PullupField ;



__attribute__((used)) static int FUNC_0(PullupField *VAR_0, PullupField *VAR_1)
{
    PullupField *VAR_2;
    int VAR_3 = 1;

    if (!VAR_0 || !VAR_1)
        return 0;

    for (VAR_2 = VAR_0; VAR_2 != VAR_1; VAR_2 = VAR_2->next)
        VAR_3++;

    return VAR_3;
}
