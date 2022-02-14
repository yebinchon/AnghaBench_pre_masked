
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int PutByteContext ;


 int VAR_0 ;
 int const FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 void FUNC_2 (int *,unsigned int) ;
 void FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const*,int,int,int) ;

__attribute__((used)) static int FUNC_6(PutByteContext *VAR_1, const uint8_t *VAR_2,
                          int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8 = FUNC_4(VAR_1);
    void (*VAR_9)(PutByteContext *, unsigned int);

    if (VAR_4 == 1)
        VAR_9 = FUNC_3;
    else
        VAR_9 = FUNC_2;

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += VAR_6) {

        VAR_6 = FUNC_5(VAR_2, VAR_3 - VAR_7, VAR_4, 1);
        if (VAR_6 > 1) {
            if (FUNC_1(VAR_1) < VAR_4 * 2)
                return VAR_0;

            VAR_5 = VAR_4 == 1 ? *VAR_2 : FUNC_0(VAR_2);
            VAR_9(VAR_1, VAR_6);
            VAR_9(VAR_1, VAR_5);
        } else {
            int VAR_10;

            VAR_6 = FUNC_5(VAR_2, VAR_3 - VAR_7, VAR_4, 0);
            if (FUNC_1(VAR_1) < VAR_4 * (VAR_6 + 1))
                return VAR_0;

            VAR_9(VAR_1, VAR_6 + 0x80);
            for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
                VAR_5 = VAR_4 == 1 ? VAR_2[VAR_10] : FUNC_0(VAR_2 + VAR_10 * VAR_4);
                VAR_9(VAR_1, VAR_5);
            }
        }

        VAR_2 += VAR_6 * VAR_4;
    }

    return FUNC_4(VAR_1) - VAR_8;
}
