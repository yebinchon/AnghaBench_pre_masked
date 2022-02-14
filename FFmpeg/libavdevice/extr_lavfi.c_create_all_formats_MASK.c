
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int VAR_0 ;
 int* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static int *FUNC_2(int VAR_1)
{
    int VAR_2, VAR_3, *VAR_4, VAR_5 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        const AVPixFmtDescriptor *VAR_6 = FUNC_1(VAR_2);
        if (!(VAR_6->flags & VAR_0))
            VAR_5++;
    }

    if (!(VAR_4 = FUNC_0((VAR_5+1) * sizeof(int))))
        return ((void*)0);
    for (VAR_3 = 0, VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        const AVPixFmtDescriptor *VAR_7 = FUNC_1(VAR_2);
        if (!(VAR_7->flags & VAR_0))
            VAR_4[VAR_3++] = VAR_2;
    }
    VAR_4[VAR_3] = -1;
    return VAR_4;
}
