
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int AVCodecContext ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int const*,int const*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_2,
                           const uint8_t *VAR_3, int VAR_4)
{
    uint32_t VAR_5 = -1;
    int VAR_6 = 0;
    const uint8_t *VAR_7 = VAR_3, *VAR_8 = VAR_3 + VAR_4;

    while (VAR_7 < VAR_8) {
        VAR_7 = FUNC_1(VAR_7, VAR_8, &VAR_5);
        if (VAR_5 == VAR_1 || VAR_5 == VAR_0) {
            VAR_6 = 1;
        } else if (VAR_6 && FUNC_0(VAR_5))
            return VAR_7 - 4 - VAR_3;
    }

    return 0;
}
