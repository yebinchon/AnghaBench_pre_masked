
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, const unsigned char *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6 = 0;
    int VAR_7 = VAR_4;
    const uint16_t *VAR_8 = (const uint16_t *)VAR_2;

    switch (VAR_5) {
    case 1:
        while (VAR_4 >= 8) {
            VAR_6 += VAR_2[ 0] + VAR_2[ VAR_3] + VAR_2[2*VAR_3] + VAR_2[3*VAR_3]
                  + VAR_2[4*VAR_3] + VAR_2[5*VAR_3] + VAR_2[6*VAR_3] + VAR_2[7*VAR_3];
            VAR_2 += 8*VAR_3;
            VAR_4 -= 8;
        }
        while (--VAR_4 >= 0) {
            VAR_6 += VAR_2[0];
            VAR_2 += VAR_3;
        }
        break;
    case 2:
        VAR_3 >>= 1;
        while (VAR_4 >= 8) {
            VAR_6 += VAR_8[ 0] + VAR_8[ VAR_3] + VAR_8[2*VAR_3] + VAR_8[3*VAR_3]
                  + VAR_8[4*VAR_3] + VAR_8[5*VAR_3] + VAR_8[6*VAR_3] + VAR_8[7*VAR_3];
            VAR_8 += 8*VAR_3;
            VAR_4 -= 8;
        }
        while (--VAR_4 >= 0) {
            VAR_6 += VAR_8[0];
            VAR_8 += VAR_3;
        }
        break;
    case 3:
    case 4:
        while (VAR_4 >= 4) {
            VAR_6 += VAR_2[0] + VAR_2[1 ] + VAR_2[2 ]
                  + VAR_2[ VAR_3] + VAR_2[1+ VAR_3] + VAR_2[2+ VAR_3]
                  + VAR_2[2*VAR_3] + VAR_2[1+2*VAR_3] + VAR_2[2+2*VAR_3]
                  + VAR_2[3*VAR_3] + VAR_2[1+3*VAR_3] + VAR_2[2+3*VAR_3];
            VAR_2 += 4*VAR_3;
            VAR_4 -= 4;
        }
        while (--VAR_4 >= 0) {
            VAR_6 += VAR_2[0] + VAR_2[1] + VAR_2[2];
            VAR_2 += VAR_3;
        }
        VAR_7 *= 3;
        break;
    }
    VAR_6 /= VAR_7;

    FUNC_0(VAR_1, VAR_0, "total:%d\n", VAR_6);
    return VAR_6;
}
