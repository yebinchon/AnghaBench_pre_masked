
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BigInt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(BigInt *VAR_2, char *VAR_3, int VAR_4, int VAR_5)
{
    if (VAR_4 > 3) {
        VAR_4 /= 2;
        VAR_5 /= 2;
        FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
        FUNC_1(VAR_2, VAR_3 + VAR_4, VAR_4, VAR_5);
        FUNC_1(VAR_2, VAR_3 + VAR_0 * VAR_5, VAR_4, VAR_5);
        FUNC_1(VAR_2, VAR_3 + VAR_0 * VAR_5 + VAR_4, VAR_4, VAR_5);
    } else {
        VAR_4 = FUNC_0(VAR_2, VAR_1);
        if (VAR_4 & 1) VAR_3[0] = 1;
        if (VAR_4 & 2) VAR_3[1] = 1;
        if (VAR_4 & 4) VAR_3[VAR_0] = 1;
        if (VAR_4 & 8) VAR_3[VAR_0 + 1] = 1;
    }
}
