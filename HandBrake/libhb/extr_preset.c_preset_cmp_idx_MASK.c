
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_6(hb_value_t *VAR_5, int VAR_6,
                          const char *VAR_7, int VAR_8)
{
    const char *VAR_9, *VAR_10;
    int VAR_11, VAR_12;

    if (VAR_8 != VAR_0 &&
        VAR_8 != FUNC_1(FUNC_0(VAR_5, "Type")))
    {
        return VAR_1;
    }


    if (VAR_7[0] == '/')
        VAR_7++;


    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
    {
        VAR_9 = FUNC_3(VAR_7, '/');
        if (VAR_9 == ((void*)0))
            return VAR_3;
        VAR_9++;
        VAR_7 = VAR_9;
    }


    VAR_9 = FUNC_3(VAR_7, '/');
    if (VAR_9 != ((void*)0))
        VAR_12 = VAR_9 - VAR_7;
    else
        VAR_12 = FUNC_4(VAR_7);
    if (VAR_12 <= 0)
        return VAR_3;

    VAR_10 = FUNC_2(FUNC_0(VAR_5, "PresetName"));
    if (FUNC_4(VAR_10) > VAR_12)
        VAR_12 = FUNC_4(VAR_10);


    if (!FUNC_5(VAR_7, VAR_10, VAR_12))
    {
        if (VAR_7[VAR_12] == 0)
            return VAR_4;
        else
            return VAR_2;
    }
    return VAR_1;
}
