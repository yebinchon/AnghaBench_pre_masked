
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    const int VAR_5 = FUNC_0(256/(VAR_2*VAR_3/256), 1);
    int VAR_6, VAR_7, VAR_8 = VAR_4;

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += 16) {
        for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6 += 16) {
            FUNC_1(VAR_0 + VAR_6 + VAR_7*VAR_1, VAR_1, VAR_8, 8, 8);
            VAR_8 += VAR_5;
        }
    }
}
