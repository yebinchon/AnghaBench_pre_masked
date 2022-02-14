
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_1, uint8_t *VAR_2,
                          const uint8_t *VAR_3, int VAR_4,
                          int VAR_5, int VAR_6, ptrdiff_t VAR_7)
{
    const uint8_t *VAR_8 = VAR_3 + VAR_4;
    int VAR_9 = 0, VAR_10 = 0;
    while (VAR_8 - VAR_3 >= 2) {
        uint8_t VAR_11 = *VAR_3++;
        if (VAR_11 > 0 && VAR_11 < 0xC0) {
            do {
                int VAR_12 = FUNC_0(VAR_11, VAR_5 - VAR_9);
                if (VAR_12 <= 0)
                    break;
                FUNC_5(VAR_2 + VAR_10 * VAR_7 + VAR_9, FUNC_3(*VAR_3), VAR_12);
                VAR_9 += VAR_12; if (VAR_9 >= VAR_5) { VAR_10++; if (VAR_10 >= VAR_6) return 0; VAR_9 = 0; };
                VAR_11 -= VAR_12;
            } while (VAR_11 > 0);
            VAR_3++;
        } else if (VAR_11 >= 0xC1) {
            VAR_11 -= 0xC0;
            do {
                int VAR_13 = FUNC_1(VAR_11, VAR_5 - VAR_9, VAR_8 - VAR_3);
                if (VAR_8 - VAR_3 < VAR_13 || VAR_13 <= 0)
                    break;
                FUNC_6(VAR_2 + VAR_10 * VAR_7 + VAR_9, VAR_3, VAR_13);
                VAR_9 += VAR_13; if (VAR_9 >= VAR_5) { VAR_10++; if (VAR_10 >= VAR_6) return 0; VAR_9 = 0; };
                VAR_3 += VAR_13;
                VAR_11 -= VAR_13;
            } while (VAR_11 > 0);
        } else {
            FUNC_4(VAR_1, "opcode %d", VAR_11);
            return VAR_0;
        }
    }
    return 0;
}
