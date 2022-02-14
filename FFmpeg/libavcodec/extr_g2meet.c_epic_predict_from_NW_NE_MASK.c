
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint32_t ;
struct TYPE_5__ {int * ne_pred_rung; int * nw_pred_rung; } ;
typedef TYPE_1__ ePICContext ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,int const*,int const) ;
 int FUNC_1 (TYPE_1__*,int const) ;

__attribute__((used)) static int FUNC_2(ePICContext *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                                   int VAR_4, const uint32_t *VAR_5,
                                   const uint32_t *VAR_6, uint32_t *VAR_7)
{
    int VAR_8;


    if (VAR_1 && VAR_2) {
        uint32_t VAR_9 = VAR_6[VAR_1 - 1];
        if (VAR_9 != VAR_5[VAR_1 - 1] && VAR_9 != VAR_6[VAR_1] && !FUNC_1(VAR_0, VAR_9)) {
            if (FUNC_0(VAR_0, &VAR_0->nw_pred_rung[VAR_9 & 0xFF], VAR_7, VAR_9))
                return 1;
        }
    }


    VAR_8 = VAR_1 + VAR_3 - 1;
    if (VAR_8 < VAR_4 - 1 && VAR_2) {
        uint32_t VAR_10 = VAR_6[VAR_8 + 1];
        if (VAR_10 != VAR_6[VAR_8] && !FUNC_1(VAR_0, VAR_10)) {
            if (FUNC_0(VAR_0, &VAR_0->ne_pred_rung[VAR_10 & 0xFF], VAR_7, VAR_10))
                return 1;
        }
    }

    return 0;
}
