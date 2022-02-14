
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int mode; int* lsfdeqold; int nsub; } ;
typedef TYPE_1__ ILBCContext ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int ,int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int*,int*,int*,int ,int) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static void FUNC_3(int16_t *VAR_4, int16_t *VAR_5,
                            int16_t *VAR_6, int16_t VAR_7,
                            ILBCContext *VAR_8)
{
    int16_t VAR_9[VAR_0 + 1], *VAR_10;
    int VAR_11, VAR_12, VAR_13;

    VAR_10 = VAR_6 + VAR_7;
    VAR_13 = VAR_7 + 1;

    if (VAR_8->mode == 30) {
        FUNC_1(VAR_9, (*VAR_8).lsfdeqold, VAR_6, VAR_3[0], VAR_7);
        FUNC_2(VAR_4, VAR_9, VAR_13 * 2);
        FUNC_0(VAR_5, VAR_9, VAR_1, VAR_13);

        VAR_12 = VAR_13;
        for (VAR_11 = 1; VAR_11 < 6; VAR_11++) {
            FUNC_1(VAR_9, VAR_6, VAR_10,
                                                 VAR_3[VAR_11],
                                                 VAR_7);
            FUNC_2(VAR_4 + VAR_12, VAR_9, VAR_13 * 2);
            FUNC_0(VAR_5 + VAR_12, VAR_9, VAR_1, VAR_13);
            VAR_12 += VAR_13;
        }
    } else {
        VAR_12 = 0;
        for (VAR_11 = 0; VAR_11 < VAR_8->nsub; VAR_11++) {
            FUNC_1(VAR_9, VAR_8->lsfdeqold, VAR_6,
                                    VAR_2[VAR_11], VAR_7);
            FUNC_2(VAR_4 + VAR_12, VAR_9, VAR_13 * 2);
            FUNC_0(VAR_5 + VAR_12, VAR_9, VAR_1, VAR_13);
            VAR_12 += VAR_13;
        }
    }

    if (VAR_8->mode == 30) {
        FUNC_2(VAR_8->lsfdeqold, VAR_10, VAR_7 * 2);
    } else {
        FUNC_2(VAR_8->lsfdeqold, VAR_6, VAR_7 * 2);
    }
}
