
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int16_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
            int VAR_5, VAR_6;
            int VAR_7 = 0;
            int VAR_8 = 0;
            int VAR_9 = 0;

            for (VAR_6 = FUNC_0(VAR_4 - 1, 0); VAR_6 < FUNC_1(8, VAR_4 + 2); VAR_6++) {
                for (VAR_5= FUNC_0(VAR_3 - 1, 0); VAR_5 < FUNC_1(8, VAR_3 + 2); VAR_5++) {
                    int VAR_10 = VAR_1[VAR_5 + VAR_6 * VAR_2];
                    VAR_7 += VAR_10;
                    VAR_8 += VAR_10 * VAR_10;
                    VAR_9++;
                }
            }
            VAR_0[VAR_3 + 8 * VAR_4]= (36 * FUNC_2(VAR_9 * VAR_8 - VAR_7 * VAR_7)) / VAR_9;
        }
    }
}
