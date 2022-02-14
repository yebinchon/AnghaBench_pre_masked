
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int iso8859 ;
typedef scalar_t__ iconv_t ;


 int FUNC_0 (char**) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int const**,int const*) ;
 int FUNC_3 (scalar_t__,char**,size_t*,char**,size_t*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,int const*,int) ;
 int FUNC_7 (char*,int,char*,int const) ;

__attribute__((used)) static char *FUNC_8(const uint8_t **VAR_0, const uint8_t *VAR_1)
{
    int VAR_2;
    const uint8_t *VAR_3;
    char *VAR_4;

    VAR_3 = *VAR_0;
    VAR_2 = FUNC_2(&VAR_3, VAR_1);
    if (VAR_2 < 0)
        return ((void*)0);
    if (VAR_2 > VAR_1 - VAR_3)
        return ((void*)0);
    VAR_4 = FUNC_1(VAR_2 + 1);
    if (!VAR_4)
        return ((void*)0);
    FUNC_6(VAR_4, VAR_3, VAR_2);
    VAR_4[VAR_2] = '\0';
    VAR_3 += VAR_2;
    *VAR_0 = VAR_3;
    return VAR_4;
}
