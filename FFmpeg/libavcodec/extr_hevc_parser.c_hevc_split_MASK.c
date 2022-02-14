
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* FUNC_0 (scalar_t__ const*,scalar_t__ const*,int*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_6, const uint8_t *VAR_7, int VAR_8)
{
    const uint8_t *VAR_9 = VAR_7, *VAR_10 = VAR_7 + VAR_8;
    uint32_t VAR_11 = -1;
    int VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15;

    while (VAR_9 < VAR_10) {
        VAR_9 = FUNC_0(VAR_9, VAR_10, &VAR_11);
        if ((VAR_11 >> 8) != VAR_5)
            break;
        VAR_15 = (VAR_11 >> 1) & 0x3F;
        if (VAR_15 == VAR_4)
            VAR_12 = 1;
        else if (VAR_15 == VAR_3)
            VAR_13 = 1;
        else if (VAR_15 == VAR_1)
            VAR_14 = 1;
        else if ((VAR_15 != VAR_2 || VAR_14) &&
                  VAR_15 != VAR_0) {
            if (VAR_12 && VAR_13) {
                while (VAR_9 - 4 > VAR_7 && VAR_9[-5] == 0)
                    VAR_9--;
                return VAR_9 - 4 - VAR_7;
            }
        }
    }
    return 0;
}
