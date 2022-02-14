
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 char* FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int,int*,char const**) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(void *VAR_0, const char *VAR_1, const char *VAR_2)
{
    int VAR_3 = 0;
    uint64_t VAR_4, VAR_5;
    const char *VAR_6, *VAR_7;

    FUNC_3("Individual channels:\n"
           "NAME           DESCRIPTION\n");
    for (VAR_3 = 0; VAR_3 < 63; VAR_3++) {
        VAR_6 = FUNC_1((uint64_t)1 << VAR_3);
        if (!VAR_6)
            continue;
        VAR_7 = FUNC_0((uint64_t)1 << VAR_3);
        FUNC_3("%-14s %s\n", VAR_6, VAR_7);
    }
    FUNC_3("\nStandard channel layouts:\n"
           "NAME           DECOMPOSITION\n");
    for (VAR_3 = 0; !FUNC_2(VAR_3, &VAR_4, &VAR_6); VAR_3++) {
        if (VAR_6) {
            FUNC_3("%-14s ", VAR_6);
            for (VAR_5 = 1; VAR_5; VAR_5 <<= 1)
                if ((VAR_4 & VAR_5))
                    FUNC_3("%s%s", (VAR_4 & (VAR_5 - 1)) ? "+" : "", FUNC_1(VAR_5));
            FUNC_3("\n");
        }
    }
    return 0;
}
