
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int occ ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 double FUNC_2 (int) ;
 int FUNC_3 (double*,double*,int) ;

__attribute__((used)) static void FUNC_4(uint8_t VAR_0[256][256],
                            const uint8_t VAR_1[256])
{
    int VAR_2, VAR_3, VAR_4, VAR_5;
    double VAR_6[256];

    for (VAR_2 = 1; VAR_2 < 256; VAR_2++)
        VAR_6[VAR_2] = FUNC_2(VAR_2 / 256.0);

    for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
        double VAR_7[256];
        double VAR_8 = VAR_2 / 256.0;

        for (VAR_3 = 0; VAR_3 < 256; VAR_3++)
            VAR_7[VAR_3] = 1 << 30;

        for (VAR_3 = FUNC_0(VAR_2 - 10, 1); VAR_3 < FUNC_1(VAR_2 + 11, 256); VAR_3++) {
            double VAR_9[256] = { 0 };
            double VAR_10 = 0;
            VAR_9[VAR_3] = 1.0;

            if (!VAR_1[VAR_3])
                continue;

            for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
                double VAR_11[256] = { 0 };
                for (VAR_5 = 1; VAR_5 < 256; VAR_5++)
                    if (VAR_9[VAR_5]) {
                        VAR_10 -=VAR_9[VAR_5]*( VAR_8 *VAR_6[ VAR_5]
                                      + (1-VAR_8)*VAR_6[256-VAR_5]);
                    }
                if (VAR_10 < VAR_7[VAR_4]) {
                    VAR_7[VAR_4] = VAR_10;
                    VAR_0[VAR_2][VAR_4] = VAR_3;
                }
                for (VAR_5 = 1; VAR_5 < 256; VAR_5++)
                    if (VAR_9[VAR_5]) {
                        VAR_11[ VAR_1[ VAR_5]] += VAR_9[VAR_5] * VAR_8;
                        VAR_11[256 - VAR_1[256 - VAR_5]] += VAR_9[VAR_5] * (1 - VAR_8);
                    }
                FUNC_3(VAR_9, VAR_11, sizeof(VAR_9));
            }
        }
    }
}
