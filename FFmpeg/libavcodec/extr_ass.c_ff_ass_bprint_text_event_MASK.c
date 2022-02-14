
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVBPrint ;


 int FUNC_0 (int *,char const,int) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (char const*,char const) ;

void FUNC_3(AVBPrint *VAR_0, const char *VAR_1, int VAR_2,
                             const char *VAR_3, int VAR_4)
{
    const char *VAR_5 = VAR_1 + VAR_2;

    for (; VAR_1 < VAR_5 && *VAR_1; VAR_1++) {


        if (VAR_3 && FUNC_2(VAR_3, *VAR_1)) {
            FUNC_1(VAR_0, "\\N");



        } else if (!VAR_4 && FUNC_2("{}\\", *VAR_1)) {
            FUNC_1(VAR_0, "\\%c", *VAR_1);







        } else if (VAR_1[0] == '\n') {

            if (VAR_1 < VAR_5 - 1)
                FUNC_1(VAR_0, "\\N");
        } else if (VAR_1[0] == '\r' && VAR_1 < VAR_5 - 1 && VAR_1[1] == '\n') {


            continue;


        } else {
            FUNC_0(VAR_0, *VAR_1, 1);
        }
    }
}
