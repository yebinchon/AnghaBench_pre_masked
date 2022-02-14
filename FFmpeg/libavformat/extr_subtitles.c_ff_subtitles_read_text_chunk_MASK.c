
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int eol_buf ;
typedef int FFTextReader ;
typedef int AVBPrint ;


 int FUNC_0 (int *,char,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*) ;
 char FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char) ;

void FUNC_5(FFTextReader *VAR_0, AVBPrint *VAR_1)
{
    char VAR_2[5], VAR_3 = 0;
    int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;

    FUNC_1(VAR_1);

    for (;;) {
        char VAR_7 = FUNC_3(VAR_0);

        if (!VAR_7)
            break;


        if (VAR_4 == 0 && FUNC_4(VAR_7))
            continue;


        if (FUNC_4(VAR_7)) {
            VAR_6 += VAR_7 == '\n' || VAR_3;
            if (VAR_6 == 2)
                break;
            VAR_2[VAR_5++] = VAR_7;
            if (VAR_5 == sizeof(VAR_2) - 1)
                break;
            VAR_3 = VAR_7 == '\r';
            continue;
        }



        if (VAR_5) {
            VAR_2[VAR_5] = 0;
            FUNC_2(VAR_1, "%s", VAR_2);
            VAR_5 = VAR_6 = 0;
        }

        FUNC_0(VAR_1, VAR_7, 1);
        VAR_4++;
    }
}
