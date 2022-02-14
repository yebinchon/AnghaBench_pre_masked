
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char const*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (size_t,size_t const) ;
 int VAR_4 ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,size_t) ;

esp_err_t FUNC_7(const char *VAR_5, const char *VAR_6, char *VAR_7, size_t VAR_8)
{
    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
        return VAR_1;
    }

    const char *VAR_9 = VAR_5;
    const size_t VAR_10 = VAR_8;

    while (FUNC_5(VAR_9)) {


        const char *VAR_11 = FUNC_3(VAR_9, '=');
        if (!VAR_11) {
            break;
        }
        size_t VAR_12 = VAR_11 - VAR_9;




        if ((VAR_12 != FUNC_5(VAR_6)) ||
            (FUNC_6(VAR_9, VAR_6, VAR_12))) {


            VAR_9 = FUNC_3(VAR_11, '&');
            if (!VAR_9) {
                break;
            }
            VAR_9++;
            continue;
        }


        VAR_9 = FUNC_3(++VAR_11, '&');


        if (!VAR_9) {
            VAR_9 = VAR_11 + FUNC_5(VAR_11);
        }


        VAR_8 = VAR_9 - VAR_11 + 1;


        FUNC_4(VAR_7, VAR_11, FUNC_2(VAR_8, VAR_10));


        if (VAR_10 < VAR_8) {
            return VAR_0;
        }
        return VAR_3;
    }
    FUNC_0(VAR_4, FUNC_1("key %s not found"), VAR_6);
    return VAR_2;
}
