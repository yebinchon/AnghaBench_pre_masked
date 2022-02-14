
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int (* add_median_pred ) (int*,int*,int*,int,int*,int*) ;int (* add_left_pred ) (int*,int*,int,int ) ;} ;
struct TYPE_5__ {TYPE_1__ llviddsp; } ;
typedef TYPE_2__ LagarithContext ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int*,int*,int,int ) ;
 int FUNC_2 (int*,int*,int*,int,int*,int*) ;

__attribute__((used)) static void FUNC_3(LagarithContext *VAR_0, uint8_t *VAR_1,
                               int VAR_2, int VAR_3, int VAR_4,
                               int VAR_5)
{
    int VAR_6, VAR_7;

    if (!VAR_4) {
        VAR_6= VAR_1[0];
        if (VAR_5)
            VAR_1[0] = 0;
        VAR_0->llviddsp.add_left_pred(VAR_1, VAR_1, VAR_2, 0);
        if (VAR_5)
            VAR_1[0] = VAR_6;
        return;
    }
    if (VAR_4 == 1) {
        const int VAR_8 = VAR_5 ? 4 : 2;
        int VAR_9;

        VAR_6 = VAR_1[VAR_2 - VAR_3 - 1];
        VAR_7 = VAR_1[VAR_8 - VAR_3 - 1];
        for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
            VAR_6 += VAR_1[VAR_9];
            VAR_1[VAR_9] = VAR_6;
        }
        for (; VAR_9 < VAR_2; VAR_9++) {
            VAR_6 = FUNC_0(VAR_6 & 0xFF, VAR_1[VAR_9 - VAR_3], (VAR_6 + VAR_1[VAR_9 - VAR_3] - VAR_7) & 0xFF) + VAR_1[VAR_9];
            VAR_7 = VAR_1[VAR_9 - VAR_3];
            VAR_1[VAR_9] = VAR_6;
        }
    } else {
        VAR_7 = VAR_1[VAR_2 - (2 * VAR_3) - 1];
        VAR_6 = VAR_1[VAR_2 - VAR_3 - 1];
        VAR_0->llviddsp.add_median_pred(VAR_1, VAR_1 - VAR_3, VAR_1, VAR_2, &VAR_6, &VAR_7);
    }
}
