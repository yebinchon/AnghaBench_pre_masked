
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * needle_frame; int * haystack_frame; } ;
typedef TYPE_1__ FOCContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 float FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static float FUNC_4(FOCContext *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int *VAR_7, int *VAR_8, float VAR_9)
{
    int VAR_10, VAR_11;

    if (VAR_1 + 1 <= VAR_2) {
        int VAR_12, VAR_13;
        FUNC_4(VAR_0, VAR_1+1, VAR_2, VAR_3>>1, (VAR_4+1)>>1, VAR_5>>1, (VAR_6+1)>>1, &VAR_12, &VAR_13, 1.0);
        VAR_3 = FUNC_0(VAR_3, 2*VAR_12 - 4);
        VAR_4 = FUNC_1(VAR_4, 2*VAR_12 + 4);
        VAR_5 = FUNC_0(VAR_5, 2*VAR_13 - 4);
        VAR_6 = FUNC_1(VAR_6, 2*VAR_13 + 4);
    }

    for (VAR_11 = VAR_5; VAR_11 <= VAR_6; VAR_11++) {
        for (VAR_10 = VAR_3; VAR_10 <= VAR_4; VAR_10++) {
            float VAR_14 = FUNC_3(VAR_0->haystack_frame[VAR_1], VAR_0->needle_frame[VAR_1], VAR_10, VAR_11);
            FUNC_2(VAR_14 != 0);
            if (VAR_14 < VAR_9) {
                VAR_9 = VAR_14;
                *VAR_7 = VAR_10;
                *VAR_8 = VAR_11;
            }
        }
    }
    return VAR_9;
}
