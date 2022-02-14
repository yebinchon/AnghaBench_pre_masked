
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bits; int table; } ;
typedef int GetBitContext ;


 int* VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_3(GetBitContext *VAR_4, int VAR_5,
                                       int VAR_6, int *VAR_7,
                                       int VAR_8)
{
    int VAR_9, VAR_10, VAR_11;

    if (VAR_5 == 1)
        VAR_8 /= 2;

    if (VAR_6 != 0) {

        int VAR_12 = VAR_0[VAR_5];

        if (VAR_5 > 1) {
            for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                if (VAR_12)
                    VAR_10 = FUNC_1(VAR_4, VAR_12);
                else
                    VAR_10 = 0;
                VAR_7[VAR_9] = VAR_10;
            }
        } else {
            for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                if (VAR_12)
                    VAR_10 = FUNC_0(VAR_4, VAR_12);
                else
                    VAR_10 = 0;
                VAR_7[VAR_9 * 2 ] = VAR_1[VAR_10 >> 2];
                VAR_7[VAR_9 * 2 + 1] = VAR_1[VAR_10 & 3];
            }
        }
    } else {

        if (VAR_5 != 1) {
            for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                VAR_11 = FUNC_2(VAR_4, VAR_3[VAR_5-1].table,
                                     VAR_3[VAR_5-1].bits, 3);
                VAR_11 += 1;
                VAR_10 = VAR_11 >> 1;
                if (VAR_11 & 1)
                    VAR_10 = -VAR_10;
                VAR_7[VAR_9] = VAR_10;
            }
        } else {
            for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                VAR_11 = FUNC_2(VAR_4, VAR_3[VAR_5 - 1].table,
                                     VAR_3[VAR_5 - 1].bits, 3);
                VAR_7[VAR_9 * 2 ] = VAR_2[VAR_11 * 2 ];
                VAR_7[VAR_9 * 2 + 1] = VAR_2[VAR_11 * 2 + 1];
            }
        }
    }
}
