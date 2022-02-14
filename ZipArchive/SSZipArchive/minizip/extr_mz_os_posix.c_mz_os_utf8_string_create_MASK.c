
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ iconv_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (scalar_t__,char**,size_t*,char**,size_t*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 int FUNC_5 (int *,int ,size_t) ;
 size_t FUNC_6 (char const*) ;

uint8_t *FUNC_7(const char *VAR_5, int32_t VAR_6)
{
    iconv_t VAR_7;
    const char *VAR_8 = ((void*)0);
    size_t VAR_9 = 0;
    size_t VAR_10 = 0;
    size_t VAR_11 = 0;
    uint8_t *VAR_12 = ((void*)0);
    uint8_t *VAR_13 = ((void*)0);

    if (VAR_5 == ((void*)0))
        return ((void*)0);

    if (VAR_6 == VAR_0)
        VAR_8 = "CP437";
    else if (VAR_6 == VAR_1)
        VAR_8 = "CP932";
    else if (VAR_6 == VAR_2)
        VAR_8 = "CP936";
    else if (VAR_6 == VAR_3)
        VAR_8 = "CP950";
    else if (VAR_6 == VAR_4)
        VAR_8 = "UTF-8";
    else
        return ((void*)0);

    VAR_7 = FUNC_4("UTF-8", VAR_8);
    if (VAR_7 == (iconv_t)-1)
        return ((void*)0);

    VAR_10 = FUNC_6(VAR_5);
    VAR_11 = VAR_10 * 2;
    VAR_12 = (uint8_t *)FUNC_0((int32_t)(VAR_11 + 1));
    VAR_13 = VAR_12;

    if (VAR_12)
    {
        FUNC_5(VAR_12, 0, VAR_11 + 1);

        VAR_9 = FUNC_2(VAR_7, (char **)&VAR_5, &VAR_10,
                (char **)&VAR_13, &VAR_11);
    }

    FUNC_3(VAR_7);

    if (VAR_9 == (size_t)-1)
    {
        FUNC_1(VAR_12);
        VAR_12 = ((void*)0);
    }

    return VAR_12;
}
