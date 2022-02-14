
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(int32_t VAR_1[16][2][8],
                                  uint32_t VAR_2[2][8],
                                  int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
            uint32_t VAR_9 = 1 << VAR_0;
            for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
                int32_t VAR_10 = FUNC_0(VAR_1[VAR_8][VAR_6][VAR_7]);
                if (VAR_10 != 0)
                    VAR_9 |= VAR_10 - 1;
            }
            VAR_2[VAR_6][VAR_7] = (31 - VAR_0) - FUNC_1(VAR_9);
        }
    }
}
