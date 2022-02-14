
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int const) ;

__attribute__((used)) static unsigned int FUNC_1(const uint8_t *VAR_0, const uint8_t *VAR_1)
{
    unsigned int VAR_2=0,VAR_3;
    for (VAR_3 = 0; VAR_3 < 28; VAR_3 += 4) {
        VAR_2 += FUNC_0( (VAR_0[VAR_3] & VAR_1[VAR_3] ) << 24 |
                            (VAR_0[VAR_3+1] & VAR_1[VAR_3+1]) << 16 |
                            (VAR_0[VAR_3+2] & VAR_1[VAR_3+2]) << 8 |
                            (VAR_0[VAR_3+3] & VAR_1[VAR_3+3]) );
    }
    VAR_2 += FUNC_0( (VAR_0[28] & VAR_1[28]) << 16 |
                        (VAR_0[29] & VAR_1[29]) << 8 |
                        (VAR_0[30] & VAR_1[30]) );
    return VAR_2;
}
