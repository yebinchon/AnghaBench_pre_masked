
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int8_t ;


 int FUNC_0 (int,int,int,int) ;





__attribute__((used)) static void FUNC_1(int VAR_0, int VAR_1,
                                          uint8_t *VAR_2, int VAR_3,
                                    const int8_t *VAR_4, int VAR_5,
                                    const uint16_t *VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;







    for (VAR_9 = 1; VAR_9 < VAR_1 - 1; VAR_9++) {
        VAR_2 += VAR_3;
        VAR_4 += VAR_5;
        VAR_6 += VAR_7;
        for (VAR_8 = 1; VAR_8 < VAR_0 - 1; VAR_8++) {
            switch (VAR_4[VAR_8]) {
            case 130: do { if (VAR_6[VAR_8] > VAR_6[(1)*VAR_7 + VAR_8+(-1)] && VAR_6[VAR_8] > VAR_6[(-1)*VAR_7 + VAR_8+(1)]) VAR_2[VAR_8] = FUNC_0(VAR_6[VAR_8]); } while (0); break;
            case 131: do { if (VAR_6[VAR_8] > VAR_6[(-1)*VAR_7 + VAR_8+(-1)] && VAR_6[VAR_8] > VAR_6[(1)*VAR_7 + VAR_8+(1)]) VAR_2[VAR_8] = FUNC_0(VAR_6[VAR_8]); } while (0); break;
            case 129: do { if (VAR_6[VAR_8] > VAR_6[(0)*VAR_7 + VAR_8+(-1)] && VAR_6[VAR_8] > VAR_6[(0)*VAR_7 + VAR_8+(1)]) VAR_2[VAR_8] = FUNC_0(VAR_6[VAR_8]); } while (0); break;
            case 128: do { if (VAR_6[VAR_8] > VAR_6[(-1)*VAR_7 + VAR_8+(0)] && VAR_6[VAR_8] > VAR_6[(1)*VAR_7 + VAR_8+(0)]) VAR_2[VAR_8] = FUNC_0(VAR_6[VAR_8]); } while (0); break;
            }
        }
    }
}
