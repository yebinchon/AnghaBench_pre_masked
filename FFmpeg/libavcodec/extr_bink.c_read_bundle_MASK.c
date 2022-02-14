
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* bundle; scalar_t__ col_lastval; int * col_high; } ;
struct TYPE_4__ {int data; int cur_ptr; int cur_dec; int tree; } ;
typedef int GetBitContext ;
typedef TYPE_2__ BinkContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(GetBitContext *VAR_3, BinkContext *VAR_4, int VAR_5)
{
    int VAR_6;

    if (VAR_5 == VAR_0) {
        for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
            int VAR_7 = FUNC_0(VAR_3, &VAR_4->col_high[VAR_6]);
            if (VAR_7 < 0)
                return VAR_7;
        }
        VAR_4->col_lastval = 0;
    }
    if (VAR_5 != VAR_2 && VAR_5 != VAR_1) {
        int VAR_8 = FUNC_0(VAR_3, &VAR_4->bundle[VAR_5].tree);
        if (VAR_8 < 0)
            return VAR_8;
    }
    VAR_4->bundle[VAR_5].cur_dec =
    VAR_4->bundle[VAR_5].cur_ptr = VAR_4->bundle[VAR_5].data;

    return 0;
}
