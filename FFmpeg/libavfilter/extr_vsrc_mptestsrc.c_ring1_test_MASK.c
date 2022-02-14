
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = 0;

    for (VAR_4 = VAR_2; VAR_4 < 16*16; VAR_4 += 16) {
        for (VAR_3 = VAR_2; VAR_3 < 16*16; VAR_3 += 16) {
            FUNC_0(VAR_0 + VAR_3 + VAR_4*VAR_1, VAR_1, ((VAR_3+VAR_4)&16) ? VAR_5 : -VAR_5, 16, 16);
            VAR_5++;
        }
    }
}
