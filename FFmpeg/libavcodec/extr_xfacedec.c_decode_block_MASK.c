
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BigInt ;




 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(BigInt *VAR_2, char *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    switch (FUNC_1(VAR_2, &VAR_1[VAR_6][0])) {
    case 128:
        return;
    case 129:
        FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
        return;
    default:
        VAR_4 /= 2;
        VAR_5 /= 2;
        VAR_6++;
        FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
        FUNC_2(VAR_2, VAR_3 + VAR_4, VAR_4, VAR_5, VAR_6);
        FUNC_2(VAR_2, VAR_3 + VAR_5 * VAR_0, VAR_4, VAR_5, VAR_6);
        FUNC_2(VAR_2, VAR_3 + VAR_4 + VAR_5 * VAR_0, VAR_4, VAR_5, VAR_6);
        return;
    }
}
