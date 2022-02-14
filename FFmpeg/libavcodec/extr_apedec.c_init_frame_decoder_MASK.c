
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t fset; int * filterbuf; int * filters; } ;
typedef TYPE_1__ APEContext ;


 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(APEContext *VAR_2)
{
    int VAR_3, VAR_4;
    if ((VAR_4 = FUNC_0(VAR_2)) < 0)
        return VAR_4;
    FUNC_2(VAR_2);

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        if (!VAR_1[VAR_2->fset][VAR_3])
            break;
        FUNC_1(VAR_2, VAR_2->filters[VAR_3], VAR_2->filterbuf[VAR_3],
                    VAR_1[VAR_2->fset][VAR_3]);
    }
    return 0;
}
