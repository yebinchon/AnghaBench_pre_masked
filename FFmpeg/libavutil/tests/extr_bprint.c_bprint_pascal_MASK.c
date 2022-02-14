
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVBPrint ;


 unsigned int FUNC_0 (unsigned int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static void FUNC_3(AVBPrint *VAR_0, unsigned VAR_1)
{
    unsigned VAR_2, VAR_3;
    unsigned VAR_4[42];

    FUNC_1(VAR_1 < FUNC_0(VAR_4));

    VAR_4[0] = 1;
    FUNC_2(VAR_0, "%8d\n", 1);
    for (VAR_2 = 1; VAR_2 <= VAR_1; VAR_2++) {
        VAR_4[VAR_2] = 1;
        for (VAR_3 = VAR_2 - 1; VAR_3 > 0; VAR_3--)
            VAR_4[VAR_3] = VAR_4[VAR_3] + VAR_4[VAR_3 - 1];
        for (VAR_3 = 0; VAR_3 <= VAR_2; VAR_3++)
            FUNC_2(VAR_0, "%8d", VAR_4[VAR_3]);
        FUNC_2(VAR_0, "\n");
    }
}
