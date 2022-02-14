
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef enum Mode { ____Placeholder_Mode } Mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,scalar_t__ const,int,int) ;
 int FUNC_2 (int*,scalar_t__ const,int,int) ;
 int FUNC_3 (int*,scalar_t__ const,int,int) ;
 int FUNC_4 (int*,int,int,int) ;
 int FUNC_5 (int*,int,int,int) ;
 int FUNC_6 (int*,int,int,int) ;
 int FUNC_7 (float*,int ,int) ;
 int** VAR_1 ;

__attribute__((used)) static void FUNC_8(float *VAR_2, const uint16_t *VAR_3,
                                const uint16_t *VAR_4, const enum Mode VAR_5)
{


    int VAR_6[4][6];
    int VAR_7 = (VAR_5 == 129) ? 2 : 4;
    int VAR_8, VAR_9;

    switch (VAR_5) {
    case 129:
        for (VAR_8 = 0; VAR_8 < 2; VAR_8++)
            FUNC_1(VAR_6[VAR_8], VAR_4[VAR_8], 5, 1);
        break;
    case 128:
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
            FUNC_1(VAR_6[VAR_8], VAR_4[VAR_8], 4, 1);
        break;
    case 136:
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
            FUNC_2(VAR_6[VAR_8], VAR_4[VAR_8], 4, 1);
        break;
    case 135:
        for (VAR_8 = 0; VAR_8 < 2; VAR_8++)
            FUNC_3(VAR_6[VAR_8], VAR_4[VAR_8], 4, 1);
        for (VAR_8 = 2; VAR_8 < 4; VAR_8++)
            FUNC_2(VAR_6[VAR_8], VAR_4[VAR_8], 4, 1);
        break;
    case 134:
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
            FUNC_3(VAR_6[VAR_8], VAR_4[VAR_8], 4, 1);
        break;
    case 133:
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
            FUNC_4(VAR_6[VAR_8], (int) VAR_4[VAR_8] +
                           ((int) VAR_3[VAR_8] << 14), 4, 1);
        break;
    case 132:
        for (VAR_8 = 0; VAR_8 < 2; VAR_8++)
            FUNC_5(VAR_6[VAR_8], (int) VAR_4[VAR_8] +
                           ((int) VAR_3[VAR_8] << 10), 4, 1);
        for (VAR_8 = 2; VAR_8 < 4; VAR_8++)
            FUNC_4(VAR_6[VAR_8], (int) VAR_4[VAR_8] +
                           ((int) VAR_3[VAR_8] << 14), 4, 1);
        break;
    case 131:
    case 130:
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
            FUNC_6(VAR_6[VAR_8], (int) VAR_4[VAR_8] +
                           ((int) VAR_3[VAR_8] << 11), 4, 1);
        break;
    }

    FUNC_7(VAR_2, 0, sizeof(float) * VAR_0);

    for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
        for (VAR_9 = 0; VAR_9 < VAR_1[VAR_5][VAR_8]; VAR_9++) {
            int VAR_10 = (FUNC_0(VAR_6[VAR_8][VAR_9]) - 1) * VAR_7 + VAR_8;

            VAR_2[VAR_10] += VAR_6[VAR_8][VAR_9] < 0 ? -1.0 : 1.0;
        }
}
