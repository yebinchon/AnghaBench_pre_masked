
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_5__ {int ctx; } ;
typedef TYPE_1__ MatroskaDemuxContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*) ;
 int* FUNC_3 (int) ;
 int* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*,int*,int,int*) ;
 int FUNC_6 (TYPE_1__*,int*,int,int*) ;

__attribute__((used)) static int FUNC_7(MatroskaDemuxContext *VAR_4, uint8_t **VAR_5,
                                int *VAR_6, int VAR_7,
                                uint32_t **VAR_8, int *VAR_9)
{
    int VAR_10 = 0, VAR_11, VAR_12 = *VAR_6;
    uint8_t *VAR_13 = *VAR_5;
    uint32_t *VAR_14;

    if (!VAR_7) {
        *VAR_9 = 1;
        *VAR_8 = FUNC_3(sizeof(**VAR_8));
        if (!*VAR_8)
            return FUNC_0(VAR_2);

        *VAR_8[0] = VAR_12;
        return 0;
    }

    FUNC_1(VAR_12 > 0);
    *VAR_9 = *VAR_13 + 1;
    VAR_13 += 1;
    VAR_12 -= 1;
    VAR_14 = FUNC_4(*VAR_9, sizeof(*VAR_14));
    if (!VAR_14)
        return FUNC_0(VAR_2);

    switch (VAR_7) {
    case 0x1:
    {
        uint8_t VAR_15;
        uint32_t VAR_16 = 0;
        for (VAR_11 = 0; VAR_10 == 0 && VAR_11 < *VAR_9 - 1; VAR_11++) {
            VAR_14[VAR_11] = 0;

            while (1) {
                if (VAR_12 <= VAR_16) {
                    VAR_10 = VAR_0;
                    break;
                }
                VAR_15 = *VAR_13;
                VAR_16 += VAR_15;
                VAR_14[VAR_11] += VAR_15;
                VAR_13 += 1;
                VAR_12 -= 1;
                if (VAR_15 != 0xff)
                    break;
            }
        }
        if (VAR_12 <= VAR_16) {
            VAR_10 = VAR_0;
            break;
        }

        VAR_14[VAR_11] = VAR_12 - VAR_16;
        break;
    }

    case 0x2:
        if (VAR_12 % (*VAR_9)) {
            VAR_10 = VAR_0;
            break;
        }
        for (VAR_11 = 0; VAR_11 < *VAR_9; VAR_11++)
            VAR_14[VAR_11] = VAR_12 / *VAR_9;
        break;

    case 0x3:
    {
        uint64_t VAR_17;
        uint64_t VAR_18;
        VAR_11 = FUNC_6(VAR_4, VAR_13, VAR_12, &VAR_17);
        if (VAR_11 < 0 || VAR_17 > VAR_3) {
            FUNC_2(VAR_4->ctx, VAR_1,
                   "EBML block data error\n");
            VAR_10 = VAR_11<0 ? VAR_11 : VAR_0;
            break;
        }
        VAR_13 += VAR_11;
        VAR_12 -= VAR_11;
        VAR_18 = VAR_14[0] = VAR_17;
        for (VAR_11 = 1; VAR_10 == 0 && VAR_11 < *VAR_9 - 1; VAR_11++) {
            int64_t VAR_19;
            int VAR_20;
            VAR_20 = FUNC_5(VAR_4, VAR_13, VAR_12, &VAR_19);
            if (VAR_20 < 0 || VAR_14[VAR_11 - 1] + VAR_19 > (uint64_t)VAR_3) {
                FUNC_2(VAR_4->ctx, VAR_1,
                       "EBML block data error\n");
                VAR_10 = VAR_20<0 ? VAR_20 : VAR_0;
                break;
            }
            VAR_13 += VAR_20;
            VAR_12 -= VAR_20;
            VAR_14[VAR_11] = VAR_14[VAR_11 - 1] + VAR_19;
            VAR_18 += VAR_14[VAR_11];
        }
        if (VAR_12 <= VAR_18) {
            VAR_10 = VAR_0;
            break;
        }
        VAR_14[*VAR_9 - 1] = VAR_12 - VAR_18;
        break;
    }
    }

    *VAR_5 = VAR_13;
    *VAR_8 = VAR_14;
    *VAR_6 = VAR_12;

    return VAR_10;
}
