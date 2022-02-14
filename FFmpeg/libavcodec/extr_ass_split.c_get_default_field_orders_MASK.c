
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ name; } ;
struct TYPE_4__ {TYPE_3__* fields; } ;
typedef TYPE_1__ ASSSection ;


 int FUNC_0 (TYPE_3__*) ;
 int* FUNC_1 (int,int) ;

__attribute__((used)) static int *FUNC_2(const ASSSection *VAR_0, int *VAR_1)
{
    int VAR_2;
    int *VAR_3 = FUNC_1(FUNC_0(VAR_0->fields), sizeof(*VAR_3));

    if (!VAR_3)
        return ((void*)0);
    for (VAR_2 = 0; VAR_0->fields[VAR_2].name; VAR_2++)
        VAR_3[VAR_2] = VAR_2;
    *VAR_1 = VAR_2;
    while (VAR_2 < FUNC_0(VAR_0->fields))
        VAR_3[VAR_2++] = -1;
    return VAR_3;
}
