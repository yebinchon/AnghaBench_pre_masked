
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*,char*,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(uint32_t *VAR_6)
{
    FILE *VAR_7 = FUNC_3("/proc/cpuinfo", "r");
    char VAR_8[200];

    if (!VAR_7)
        return -1;

    *VAR_6 = 0;
    while (FUNC_2(VAR_8, sizeof(VAR_8), VAR_7)) {
        if (FUNC_0(VAR_8, "Features", ((void*)0))) {
            if (FUNC_4(VAR_8, " edsp "))
                *VAR_6 |= VAR_0;
            if (FUNC_4(VAR_8, " tls "))
                *VAR_6 |= VAR_3;
            if (FUNC_4(VAR_8, " thumbee "))
                *VAR_6 |= VAR_2;
            if (FUNC_4(VAR_8, " vfp "))
                *VAR_6 |= VAR_4;
            if (FUNC_4(VAR_8, " vfpv3 "))
                *VAR_6 |= VAR_5;
            if (FUNC_4(VAR_8, " neon ") || FUNC_4(VAR_8, " asimd "))
                *VAR_6 |= VAR_1;
            if (FUNC_4(VAR_8, " fp "))
                *VAR_6 |= VAR_4 | VAR_5;
            break;
        }
    }
    FUNC_1(VAR_7);
    return 0;
}
