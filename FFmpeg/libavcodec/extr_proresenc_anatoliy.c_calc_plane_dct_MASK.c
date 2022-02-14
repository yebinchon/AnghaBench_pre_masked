
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;
typedef int FDCTDSPContext ;


 int FUNC_0 (int *,int *,int,int *) ;

__attribute__((used)) static void FUNC_1(FDCTDSPContext *VAR_0, uint8_t *VAR_1, int16_t * VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int16_t *VAR_7;
    int VAR_8;

    VAR_7 = VAR_2;

    if (!VAR_5) {
        for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
            FUNC_0(VAR_0, VAR_1, VAR_3, VAR_7 + (0 << 6));
            FUNC_0(VAR_0, VAR_1 + 16, VAR_3, VAR_7 + (1 << 6));
            FUNC_0(VAR_0, VAR_1 + 8 * VAR_3, VAR_3, VAR_7 + (2 << 6));
            FUNC_0(VAR_0, VAR_1 + 16 + 8 * VAR_3, VAR_3, VAR_7 + (3 << 6));

            VAR_7 += 256;
            VAR_1 += 32;
        }
    } else if (VAR_5 && VAR_6){
        for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
            FUNC_0(VAR_0, VAR_1, VAR_3, VAR_7 + (0 << 6));
            FUNC_0(VAR_0, VAR_1 + 8 * VAR_3, VAR_3, VAR_7 + (1 << 6));
            VAR_7 += (256 >> 1);
            VAR_1 += (32 >> 1);
        }
    } else {
        for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
            FUNC_0(VAR_0, VAR_1, VAR_3, VAR_7 + (0 << 6));
            FUNC_0(VAR_0, VAR_1 + 8 * VAR_3, VAR_3, VAR_7 + (1 << 6));
            FUNC_0(VAR_0, VAR_1 + 16, VAR_3, VAR_7 + (2 << 6));
            FUNC_0(VAR_0, VAR_1 + 16 + 8 * VAR_3, VAR_3, VAR_7 + (3 << 6));

            VAR_7 += 256;
            VAR_1 += 32;
        }
    }
}
