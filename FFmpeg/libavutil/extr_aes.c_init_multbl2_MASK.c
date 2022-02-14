
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(uint32_t VAR_0[][256], const int VAR_1[4],
                         const uint8_t *VAR_2, const uint8_t *VAR_3,
                         const uint8_t *VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < 256; VAR_5++) {
        int VAR_6 = VAR_4[VAR_5];
        if (VAR_6) {
            int VAR_7, VAR_8, VAR_9, VAR_10;
            VAR_6 = VAR_2[VAR_6];
            VAR_7 = VAR_3[VAR_6 + VAR_2[VAR_1[0]]];
            VAR_8 = VAR_3[VAR_6 + VAR_2[VAR_1[1]]];
            VAR_9 = VAR_3[VAR_6 + VAR_2[VAR_1[2]]];
            VAR_10 = VAR_3[VAR_6 + VAR_2[VAR_1[3]]];
            VAR_0[0][VAR_5] = FUNC_0(FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10), FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10));

            VAR_0[1][VAR_5] = FUNC_3(VAR_0[0][VAR_5], 8);
            VAR_0[2][VAR_5] = FUNC_3(VAR_0[0][VAR_5], 16);
            VAR_0[3][VAR_5] = FUNC_3(VAR_0[0][VAR_5], 24);

        }
    }
}
