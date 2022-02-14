
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _path ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char const* const) ;
 size_t FUNC_2 (char const* const) ;

int
FUNC_3(const char* const VAR_5)
{

    const size_t VAR_6 = FUNC_2(VAR_5);
    char VAR_7[VAR_2];
    char *VAR_8;

    VAR_4 = 0;


    if (VAR_6 > sizeof(VAR_7)-1) {
        VAR_4 = VAR_1;
        return -1;
    }
    FUNC_1(VAR_7, VAR_5);


    for (VAR_8 = VAR_7 + 1; *VAR_8; VAR_8++) {
        if (*VAR_8 == '/') {

            *VAR_8 = '\0';

            if (FUNC_0(VAR_7, VAR_3) != 0) {
                if (VAR_4 != VAR_0)
                    return -1;
            }

            *VAR_8 = '/';
        }
    }

    if (FUNC_0(VAR_7, VAR_3) != 0) {
        if (VAR_4 != VAR_0)
            return -1;
    }

    return 0;
}
