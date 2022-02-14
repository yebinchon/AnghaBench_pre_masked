
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* child; int parent; } ;
typedef TYPE_1__ Node ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(const uint8_t *VAR_1, uint32_t *VAR_2)
{
    int VAR_3 = 0, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9[32] = { 0 };
    int VAR_10[8192];
    Node VAR_11[512];
    int VAR_12[1024];
    int VAR_13[512];

    for (int VAR_14 = 0; VAR_14 < 256; VAR_14++) {
        int VAR_15 = VAR_1[VAR_14];
        int VAR_16 = VAR_9[VAR_15];

        VAR_3 += VAR_15 < 1;
        VAR_10[(VAR_15 << 8) + VAR_16] = VAR_14;
        VAR_9[VAR_15]++;
    }

    for (int VAR_17 = 0; VAR_17 < 512; VAR_17++) {
        VAR_11[VAR_17].child[0] = -1;
        VAR_11[VAR_17].child[1] = -1;
    }

    for (int VAR_18 = 0; VAR_18 < 256; VAR_18++) {
        VAR_12[VAR_18] = 257 + VAR_18;
    }

    VAR_4 = 1;
    VAR_12[512] = 256;
    VAR_7 = 255;
    VAR_6 = 1;

    for (VAR_4 = 1; VAR_4 < 32; VAR_4++) {
        if (VAR_9[VAR_4] > 0) {
            int VAR_19 = VAR_3 + VAR_9[VAR_4];

            for (int VAR_20 = 0; VAR_3 < 256 && VAR_3 < VAR_19; VAR_3++, VAR_20++) {
                int VAR_21 = VAR_12[VAR_6 - 1 + 512];
                int VAR_22 = VAR_10[256 * VAR_4 + VAR_20];

                if (VAR_6 <= 0)
                    return VAR_0;

                if (VAR_11[VAR_21].child[0] == -1) {
                    VAR_11[VAR_21].child[0] = VAR_22;
                } else {
                    VAR_11[VAR_21].child[1] = VAR_22;
                    VAR_6--;
                }
                VAR_11[VAR_22].parent = VAR_21;
            }
        }
        VAR_8 = VAR_7 - 1;
        VAR_5 = 0;
        while (VAR_6 > 0) {
            int VAR_23, VAR_24;

            VAR_7 = VAR_8 - VAR_5;
            VAR_23 = VAR_12[VAR_6 - 1 + 512];
            VAR_24 = VAR_12[VAR_7];
            if (VAR_11[VAR_23].child[0] == -1) {
                VAR_11[VAR_23].child[0] = VAR_24;
            } else {
                VAR_11[VAR_23].child[1] = VAR_24;
                VAR_6--;
            }
            VAR_13[VAR_5] = VAR_24;
            VAR_11[VAR_24].parent = VAR_23;
            if (VAR_5 == VAR_8)
                goto next;
            VAR_5++;
            if (VAR_6 <= 0) {
                for (int VAR_25 = 0; VAR_25 < VAR_5; VAR_25++)
                    VAR_12[512 + VAR_25] = VAR_13[VAR_25];
            }
        }
        VAR_6 = VAR_5;
    }

next:

    FUNC_0(VAR_2, VAR_11, 256, 0, 0);
    return 0;
}
