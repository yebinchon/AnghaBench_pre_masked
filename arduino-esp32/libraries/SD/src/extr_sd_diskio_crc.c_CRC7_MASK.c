
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

char FUNC_0(const char* VAR_1, int VAR_2)
{
    char VAR_3 = 0;
    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_3 = VAR_0[(VAR_3 << 1) ^ VAR_1[VAR_4]];
    }
    return VAR_3;
}
