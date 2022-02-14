
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;

int FUNC_4(void *VAR_4)
{
 char VAR_5[VAR_1];
    int VAR_6;
    int VAR_7;
    int VAR_8;

    if (VAR_2 >= VAR_3)
    {
        return 0;
    }

    VAR_6 = FUNC_0();
    for (VAR_7 = VAR_2; VAR_7 < VAR_6;
            VAR_7++)
    {
        FUNC_2(VAR_7, VAR_5);
        VAR_8 = FUNC_1(VAR_5);
        if (!(VAR_8 == 0 || VAR_8 == VAR_0))
        {
            break;
        }

        VAR_2 = VAR_7 + 1;
        FUNC_3(VAR_3);
    }

    return 0;
}
