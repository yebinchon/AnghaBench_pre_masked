
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVEscapeMode { ____Placeholder_AVEscapeMode } AVEscapeMode ;
typedef int AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 char* VAR_4 ;
 int FUNC_0 (int *,char const,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char const*,char const) ;

void FUNC_3(AVBPrint *VAR_5, const char *VAR_6, const char *VAR_7,
                      enum AVEscapeMode VAR_8, int VAR_9)
{
    const char *VAR_10 = VAR_6;

    if (VAR_8 == VAR_2)
        VAR_8 = VAR_3;

    switch (VAR_8) {
    case 128:

        FUNC_0(VAR_5, '\'', 1);
        for (; *VAR_6; VAR_6++) {
            if (*VAR_6 == '\'')
                FUNC_1(VAR_5, "'\\''");
            else
                FUNC_0(VAR_5, *VAR_6, 1);
        }
        FUNC_0(VAR_5, '\'', 1);
        break;


    default:

        for (; *VAR_6; VAR_6++) {
            int VAR_11 = VAR_6 == VAR_10 || !*(VAR_6+1);
            int VAR_12 = !!FUNC_2(VAR_4, *VAR_6);
            int VAR_13 = VAR_7 && FUNC_2(VAR_7, *VAR_6);
            int VAR_14 =
                VAR_13 || FUNC_2("'\\", *VAR_6) ||
                (VAR_12 && (VAR_9 & VAR_1));

            if (VAR_13 ||
                (!(VAR_9 & VAR_0) &&
                 (VAR_14 || (VAR_12 && VAR_11))))
                FUNC_0(VAR_5, '\\', 1);
            FUNC_0(VAR_5, *VAR_6, 1);
        }
        break;
    }
}
