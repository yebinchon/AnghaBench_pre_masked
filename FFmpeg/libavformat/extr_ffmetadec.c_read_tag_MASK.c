
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,char*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,int) ;

__attribute__((used)) static int FUNC_5(const uint8_t *VAR_3, AVDictionary **VAR_4)
{
    uint8_t *VAR_5, *VAR_6;
    const uint8_t *VAR_7 = VAR_3;


    while (1) {
        if (*VAR_7 == '=')
            break;
        else if (*VAR_7 == '\\')
            VAR_7++;

        if (*VAR_7++)
            continue;

        return 0;
    }

    if (!(VAR_5 = FUNC_4(VAR_3, VAR_7 - VAR_3)))
        return FUNC_0(VAR_2);
    if (!(VAR_6 = FUNC_4(VAR_7 + 1, FUNC_3(VAR_7 + 1)))) {
        FUNC_2(VAR_5);
        return FUNC_0(VAR_2);
    }

    FUNC_1(VAR_4, VAR_5, VAR_6, VAR_0 | VAR_1);
    return 0;
}
