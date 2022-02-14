
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(uint8_t *VAR_1, int VAR_2)
{
    unsigned VAR_3 = 1;
    unsigned VAR_4 = VAR_1[0];
    unsigned VAR_5 = VAR_4 >> 3;
    unsigned VAR_6 = VAR_4 & 3;
    unsigned VAR_7 = VAR_5 < 12 ? FUNC_0(480, 960 * (VAR_5 & 3)) :
                          VAR_5 < 16 ? 480 << (VAR_5 & 1) :
                                            120 << (VAR_5 & 3);
    if (VAR_6 == 3) {
        if (VAR_2<2)
            return VAR_0;
        VAR_3 = VAR_1[1] & 0x3F;
    } else if (VAR_6) {
        VAR_3 = 2;
    }

    return VAR_7 * VAR_3;
}
