
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int PutByteContext ;


 int FUNC_0 (int *,int const) ;

__attribute__((used)) static int FUNC_1(PutByteContext *VAR_0, int VAR_1,
                                     int VAR_2, const uint8_t *VAR_3,
                                     const uint8_t *VAR_4)
{
    int VAR_5, VAR_6 = 0;

    FUNC_0(VAR_0, VAR_1 << 4 | VAR_2);

    for (VAR_5 = 1; VAR_5 <= 16; VAR_5++) {
        VAR_6 += VAR_3[VAR_5];
        FUNC_0(VAR_0, VAR_3[VAR_5]);
    }

    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
        FUNC_0(VAR_0, VAR_4[VAR_5]);
    }
    return VAR_6 + 17;
}
