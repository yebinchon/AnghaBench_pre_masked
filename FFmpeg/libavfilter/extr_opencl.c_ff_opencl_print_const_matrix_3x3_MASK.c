
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVBPrint ;


 int FUNC_0 (int *,char*,...) ;

void FUNC_1(AVBPrint *VAR_0, const char *VAR_1,
                                      double VAR_2[3][3])
{
    int VAR_3, VAR_4;
    FUNC_0(VAR_0, "__constant float %s[9] = {\n", VAR_1);
    for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
            FUNC_0(VAR_0, " %.5ff,", VAR_2[VAR_3][VAR_4]);
        FUNC_0(VAR_0, "\n");
    }
    FUNC_0(VAR_0, "};\n");
}
