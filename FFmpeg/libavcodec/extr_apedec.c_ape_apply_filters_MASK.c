
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {size_t fset; int * filters; } ;
typedef TYPE_1__ APEContext ;


 int VAR_0 ;
 int ** VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int *,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(APEContext *VAR_3, int32_t *VAR_4,
                              int32_t *VAR_5, int VAR_6)
{
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        if (!VAR_2[VAR_3->fset][VAR_7])
            break;
        FUNC_0(VAR_3, VAR_3->filters[VAR_7], VAR_4, VAR_5, VAR_6,
                     VAR_2[VAR_3->fset][VAR_7],
                     VAR_1[VAR_3->fset][VAR_7]);
    }
}
