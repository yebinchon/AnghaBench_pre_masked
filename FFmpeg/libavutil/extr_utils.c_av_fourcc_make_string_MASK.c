
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t,char*,int const) ;
 scalar_t__ FUNC_1 (char*,int const) ;

char *FUNC_2(char *VAR_1, uint32_t VAR_2)
{
    int VAR_3;
    char *VAR_4 = VAR_1;
    size_t VAR_5 = VAR_0;

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        const int VAR_6 = VAR_2 & 0xff;
        const int VAR_7 = (VAR_6 >= '0' && VAR_6 <= '9') ||
                              (VAR_6 >= 'a' && VAR_6 <= 'z') ||
                              (VAR_6 >= 'A' && VAR_6 <= 'Z') ||
                              (VAR_6 && FUNC_1(". -_", VAR_6));
        const int VAR_8 = FUNC_0(VAR_1, VAR_5, VAR_7 ? "%c" : "[%d]", VAR_6);
        if (VAR_8 < 0)
            break;
        VAR_1 += VAR_8;
        VAR_5 = VAR_5 > VAR_8 ? VAR_5 - VAR_8 : 0;
        VAR_2 >>= 8;
    }

    return VAR_4;
}
