
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {struct TYPE_4__* parent; } ;
typedef TYPE_1__ Jpeg2000TgtNode ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static Jpeg2000TgtNode *FUNC_2(int VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0, VAR_3 = VAR_1;
    Jpeg2000TgtNode *VAR_4, *VAR_5, *VAR_6;
    int32_t VAR_7;

    VAR_7 = FUNC_1(VAR_0, VAR_1);

    VAR_5 = VAR_4 = FUNC_0(VAR_7, sizeof(*VAR_5));
    if (!VAR_4)
        return ((void*)0);

    while (VAR_0 > 1 || VAR_1 > 1) {
        int VAR_8, VAR_9;
        VAR_2 = VAR_0;
        VAR_3 = VAR_1;

        VAR_0 = (VAR_0 + 1) >> 1;
        VAR_1 = (VAR_1 + 1) >> 1;
        VAR_6 = VAR_5 + VAR_2 * VAR_3;

        for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
            for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
                VAR_5[VAR_8 * VAR_2 + VAR_9].parent = &VAR_6[(VAR_8 >> 1) * VAR_0 + (VAR_9 >> 1)];

        VAR_5 = VAR_6;
    }
    VAR_5[0].parent = ((void*)0);
    return VAR_4;
}
