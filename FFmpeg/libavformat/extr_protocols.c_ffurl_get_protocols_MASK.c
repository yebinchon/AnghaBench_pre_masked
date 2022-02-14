
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
typedef TYPE_1__ URLProtocol ;


 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__** FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 TYPE_1__** VAR_0 ;

const URLProtocol **FUNC_3(const char *VAR_1,
                                        const char *VAR_2)
{
    const URLProtocol **VAR_3;
    int VAR_4, VAR_5 = 0;

    VAR_3 = FUNC_1(FUNC_0(VAR_0), sizeof(*VAR_3));
    if (!VAR_3)
        return ((void*)0);

    for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++) {
        const URLProtocol *VAR_6 = VAR_0[VAR_4];

        if (VAR_1 && *VAR_1 && !FUNC_2(VAR_6->name, VAR_1))
            continue;
        if (VAR_2 && *VAR_2 && FUNC_2(VAR_6->name, VAR_2))
            continue;

        VAR_3[VAR_5++] = VAR_6;
    }

    return VAR_3;
}
