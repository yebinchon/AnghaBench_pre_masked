
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int GetByteContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,int,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2, GetByteContext *VAR_3,
                       uint8_t *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    uint8_t *VAR_8;
    uint16_t VAR_9[8];
    int VAR_10, VAR_11, VAR_12, VAR_13;

    for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12 += 4) {
        for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11 += 4) {
            if (FUNC_3(VAR_3) < 6)
                return 0;

            VAR_10 = FUNC_2(VAR_3);
            VAR_9[0] = FUNC_2(VAR_3);
            VAR_9[1] = FUNC_2(VAR_3);
            if ((VAR_9[0] & 0x8000)) {
                if (FUNC_3(VAR_3) < 12) {
                    FUNC_1(VAR_2, VAR_1, "buffer overflow\n");
                    return VAR_0;
                }
                for (VAR_13 = 2; VAR_13 < 8; VAR_13++)
                    VAR_9[VAR_13] = FUNC_2(VAR_3);
            } else {
                VAR_9[2] = VAR_9[4] = VAR_9[6] = VAR_9[0];
                VAR_9[3] = VAR_9[5] = VAR_9[7] = VAR_9[1];
            }
            VAR_8 = VAR_4 + (VAR_12 + 0) * VAR_7 + VAR_11 * 2; VAR_13 = (VAR_10 & 1 << (0 * 4)) ? 0 : 1; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2; VAR_13 = (VAR_10 & 1 << (0 * 4 + 1)) ? 0 : 1; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2; VAR_13 = (VAR_10 & 1 << (0 * 4 + 2)) ? 2 : 3; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2; VAR_13 = (VAR_10 & 1 << (0 * 4 + 3)) ? 2 : 3; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2;;
            VAR_8 = VAR_4 + (VAR_12 + 1) * VAR_7 + VAR_11 * 2; VAR_13 = (VAR_10 & 1 << (1 * 4)) ? 0 : 1; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2; VAR_13 = (VAR_10 & 1 << (1 * 4 + 1)) ? 0 : 1; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2; VAR_13 = (VAR_10 & 1 << (1 * 4 + 2)) ? 2 : 3; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2; VAR_13 = (VAR_10 & 1 << (1 * 4 + 3)) ? 2 : 3; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2;;
            VAR_8 = VAR_4 + (VAR_12 + 2) * VAR_7 + VAR_11 * 2; VAR_13 = (VAR_10 & 1 << (2 * 4)) ? 4 : 5; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2; VAR_13 = (VAR_10 & 1 << (2 * 4 + 1)) ? 4 : 5; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2; VAR_13 = (VAR_10 & 1 << (2 * 4 + 2)) ? 6 : 7; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2; VAR_13 = (VAR_10 & 1 << (2 * 4 + 3)) ? 6 : 7; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2;;
            VAR_8 = VAR_4 + (VAR_12 + 3) * VAR_7 + VAR_11 * 2; VAR_13 = (VAR_10 & 1 << (3 * 4)) ? 4 : 5; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2; VAR_13 = (VAR_10 & 1 << (3 * 4 + 1)) ? 4 : 5; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2; VAR_13 = (VAR_10 & 1 << (3 * 4 + 2)) ? 6 : 7; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2; VAR_13 = (VAR_10 & 1 << (3 * 4 + 3)) ? 6 : 7; FUNC_0(VAR_8, VAR_9[VAR_13] & 0x7FFF); VAR_8 += 2;;
        }
    }
    return 0;
}
