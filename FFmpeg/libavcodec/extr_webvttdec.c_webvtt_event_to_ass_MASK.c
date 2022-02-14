
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* from; int to; } ;
typedef int AVBPrint ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char const,int) ;
 int FUNC_2 (int *,char*,...) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*,size_t const) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_5(AVBPrint *VAR_1, const char *VAR_2)
{
    int VAR_3, VAR_4 = 0, VAR_5 = 0;

    while (*VAR_2) {

        for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
            const char *VAR_6 = VAR_0[VAR_3].from;
            const size_t VAR_7 = FUNC_3(VAR_6);
            if (!FUNC_4(VAR_2, VAR_6, VAR_7)) {
                FUNC_2(VAR_1, "%s", VAR_0[VAR_3].to);
                VAR_2 += VAR_7;
                VAR_4 = 1;
                break;
            }
        }
        if (!*VAR_2)
            break;

        if (VAR_4) {
            VAR_4 = 0;
            VAR_5 = 0;
            continue;
        }
        if (*VAR_2 == '<')
            VAR_5 = 1;
        else if (*VAR_2 == '>')
            VAR_5 = 0;
        else if (VAR_2[0] == '\n' && VAR_2[1])
            FUNC_2(VAR_1, "\\N");
        else if (!VAR_5 && *VAR_2 != '\r')
            FUNC_1(VAR_1, *VAR_2, 1);
        VAR_2++;
    }
    return 0;
}
