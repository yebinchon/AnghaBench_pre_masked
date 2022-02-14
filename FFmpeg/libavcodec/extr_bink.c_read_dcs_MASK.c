
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_4__ {int * cur_dec; scalar_t__ data_end; } ;
typedef int GetBitContext ;
typedef TYPE_1__ Bundle ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int ,char*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_2, GetBitContext *VAR_3, Bundle *VAR_4,
                    int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    int16_t *VAR_15 = (int16_t*)VAR_4->cur_dec;
    int16_t *VAR_16 = (int16_t*)VAR_4->data_end;

    FUNC_0(VAR_3, VAR_4, VAR_9);
    if (FUNC_5(VAR_3) < VAR_5 - VAR_6)
        return VAR_0;
    VAR_13 = FUNC_3(VAR_3, VAR_5 - VAR_6);
    if (VAR_13 && VAR_6) {
        VAR_12 = -FUNC_4(VAR_3);
        VAR_13 = (VAR_13 ^ VAR_12) - VAR_12;
    }
    if (VAR_16 - VAR_15 < 1)
        return VAR_0;
    *VAR_15++ = VAR_13;
    VAR_9--;
    for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7 += 8) {
        VAR_10 = FUNC_1(VAR_9 - VAR_7, 8);
        if (VAR_16 - VAR_15 < VAR_10)
            return VAR_0;
        VAR_11 = FUNC_3(VAR_3, 4);
        if (VAR_11) {
            for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
                VAR_14 = FUNC_3(VAR_3, VAR_11);
                if (VAR_14) {
                    VAR_12 = -FUNC_4(VAR_3);
                    VAR_14 = (VAR_14 ^ VAR_12) - VAR_12;
                }
                VAR_13 += VAR_14;
                *VAR_15++ = VAR_13;
                if (VAR_13 < -32768 || VAR_13 > 32767) {
                    FUNC_2(VAR_2, VAR_1, "DC value went out of bounds: %d\n", VAR_13);
                    return VAR_0;
                }
            }
        } else {
            for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
                *VAR_15++ = VAR_13;
        }
    }

    VAR_4->cur_dec = (uint8_t*)VAR_15;
    return 0;
}
