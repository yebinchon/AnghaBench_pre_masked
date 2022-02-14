
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 int * FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

int FUNC_6(char *VAR_0)
{
    int VAR_1 = 0, VAR_2 = 0;
    char *VAR_3 = ":>%$#";

    char *VAR_4 = FUNC_1(FUNC_4(VAR_0) + 1);
    FUNC_2(VAR_4, 0, FUNC_4(VAR_0) + 1);


    char VAR_5 = 0;
    for (VAR_1 = 0; VAR_1 < FUNC_4(VAR_0); VAR_1++)
    {
        if (VAR_0[VAR_1] == '\x1B')
        {
            if (VAR_5 == 0)
                VAR_5 = 1;
        } else if ((VAR_5 == 1) && (FUNC_3("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", VAR_0[VAR_1]) != ((void*)0)))
        {
            VAR_5 = 0;
        } else if (VAR_5 == 0)
        {
            FUNC_5(VAR_4, &(VAR_0[VAR_1]), 1);
        }
    }

    int VAR_6 = FUNC_4(VAR_4);
    for(VAR_1 = 0; VAR_1 < FUNC_4(VAR_3); VAR_1++)
    {
        while(VAR_6 > VAR_2 && (*(VAR_4 + VAR_6 - VAR_2) == 0x00 || *(VAR_4 + VAR_6 - VAR_2) == ' ' || *(VAR_4 + VAR_6 - VAR_2) == '\r' || *(VAR_4 + VAR_6 - VAR_2) == '\n')) VAR_2++;

        if(*(VAR_4 + VAR_6 - VAR_2) == VAR_3[VAR_1])
        {
            FUNC_0(VAR_4);
            return 1;
        }
    }

    FUNC_0(VAR_4);
    return 0;
}
