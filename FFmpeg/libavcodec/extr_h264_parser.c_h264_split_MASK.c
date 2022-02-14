
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
 scalar_t__* FUNC_0 (scalar_t__ const*,scalar_t__ const*,int*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_5,
                      const uint8_t *VAR_6, int VAR_7)
{
    uint32_t VAR_8 = -1;
    int VAR_9 = 0;
    int VAR_10 = 0;
    const uint8_t *VAR_11 = VAR_6, *VAR_12 = VAR_6 + VAR_7;
    int VAR_13;

    while (VAR_11 < VAR_12) {
        VAR_11 = FUNC_0(VAR_11, VAR_12, &VAR_8);
        if ((VAR_8 & 0xFFFFFF00) != 0x100)
            break;
        VAR_13 = VAR_8 & 0x1F;
        if (VAR_13 == VAR_3) {
            VAR_9 = 1;
        } else if (VAR_13 == VAR_1)
            VAR_10 = 1;





        else if ((VAR_13 != VAR_2 || VAR_10) &&
                  VAR_13 != VAR_0 && VAR_13 != VAR_4 &&
                  VAR_13 != 0x0f) {
            if (VAR_9) {
                while (VAR_11 - 4 > VAR_6 && VAR_11[-5] == 0)
                    VAR_11--;
                return VAR_11 - 4 - VAR_6;
            }
        }
    }

    return 0;
}
