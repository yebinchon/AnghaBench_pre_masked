
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int,int,int,int ,int*) ;

__attribute__((used)) static void FUNC_2(const uint8_t *VAR_0, int VAR_1,
                                     uint8_t *VAR_2, int VAR_3,
                                     int VAR_4, int VAR_5,
                                     int *VAR_6)
{
    int VAR_7, VAR_8;



    for (VAR_8 = 0; VAR_8 < VAR_5/2; VAR_8++) {
        for (VAR_7 = 0; VAR_7 < VAR_4/2; VAR_7++) {


            VAR_2[(VAR_8 * VAR_3) + VAR_7] =
                VAR_0[((VAR_8 << 1) * VAR_1) + (VAR_7 << 1)] ||
                VAR_0[((VAR_8 << 1) * VAR_1) + (VAR_7 << 1) + 1] ||
                VAR_0[(((VAR_8 << 1) + 1) * VAR_1) + (VAR_7 << 1)] ||
                VAR_0[(((VAR_8 << 1) + 1) * VAR_1) + (VAR_7 << 1) + 1];
            VAR_2[(VAR_8 * VAR_3) + VAR_7] = FUNC_0(1, VAR_2[(VAR_8 * VAR_3) + VAR_7]);
        }
    }

    FUNC_1(VAR_2, VAR_3,
                                  VAR_4/2, VAR_5/2, 0, VAR_6);
}
