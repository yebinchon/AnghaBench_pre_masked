
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char,char) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int*) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_1, int *VAR_2, int *VAR_3)
{
    static const char * const VAR_4[] = { "false", "true" };
    const char *VAR_5;
    int VAR_6;

    FUNC_2(VAR_1, VAR_2);
    for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
        VAR_5 = VAR_4[VAR_6];
        if (*VAR_2 != *VAR_5)
            continue;
        for (; *VAR_5; VAR_5++, FUNC_1(VAR_1, VAR_2))
            if (*VAR_2 != *VAR_5)
                return VAR_0;
        if (FUNC_0(*VAR_2 | 32, 'a', 'z'))
            return VAR_0;
        *VAR_3 = VAR_6;
        return 0;
    }
    return VAR_0;
}
