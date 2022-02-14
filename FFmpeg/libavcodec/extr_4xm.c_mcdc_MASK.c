
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int*,int const*,int,unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(uint16_t *VAR_0, const uint16_t *VAR_1, int VAR_2,
                        int VAR_3, int VAR_4, int VAR_5, unsigned VAR_6)
{
    int VAR_7;
    VAR_6 *= 0x10001;

    switch (VAR_2) {
    case 0:
        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
            VAR_0[0] = VAR_5 * VAR_1[0] + VAR_6;
            if (VAR_5)
                VAR_1 += VAR_4;
            VAR_0 += VAR_4;
        }
        break;
    case 1:
        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
            FUNC_0(VAR_0, VAR_1, VAR_5, VAR_6);
            if (VAR_5)
                VAR_1 += VAR_4;
            VAR_0 += VAR_4;
        }
        break;
    case 2:
        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
            FUNC_0(VAR_0, VAR_1, VAR_5, VAR_6);
            FUNC_0(VAR_0 + 2, VAR_1 + 2, VAR_5, VAR_6);
            if (VAR_5)
                VAR_1 += VAR_4;
            VAR_0 += VAR_4;
        }
        break;
    case 3:
        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
            FUNC_0(VAR_0, VAR_1, VAR_5, VAR_6);
            FUNC_0(VAR_0 + 2, VAR_1 + 2, VAR_5, VAR_6);
            FUNC_0(VAR_0 + 4, VAR_1 + 4, VAR_5, VAR_6);
            FUNC_0(VAR_0 + 6, VAR_1 + 6, VAR_5, VAR_6);
            if (VAR_5)
                VAR_1 += VAR_4;
            VAR_0 += VAR_4;
        }
        break;
    default:
        FUNC_1(0);
    }
}
