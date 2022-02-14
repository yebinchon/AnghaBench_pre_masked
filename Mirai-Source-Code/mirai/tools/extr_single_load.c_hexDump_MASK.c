
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void FUNC_1(char *VAR_0, void *VAR_1, int VAR_2)
{
    int VAR_3;
    unsigned char VAR_4[17];
    unsigned char *VAR_5 = (unsigned char*)VAR_1;
    if (VAR_0 != ((void*)0)) FUNC_0 ("%s:\n", VAR_0);
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if ((VAR_3 % 16) == 0)
        {
            if (VAR_3 != 0) FUNC_0 ("  %s\n", VAR_4);
            FUNC_0 ("  %04x ", VAR_3);
        }
        FUNC_0 (" %02x", VAR_5[VAR_3]);
        if ((VAR_5[VAR_3] < 0x20) || (VAR_5[VAR_3] > 0x7e)) VAR_4[VAR_3 % 16] = '.';
        else VAR_4[VAR_3 % 16] = VAR_5[VAR_3];
        VAR_4[(VAR_3 % 16) + 1] = '\0';
    }
    while ((VAR_3 % 16) != 0)
    {
        FUNC_0 ("   ");
        VAR_3++;
    }
    FUNC_0 ("  %s\n", VAR_4);
}
