
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetByteContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,char const*,char*,int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;

int FUNC_5(int VAR_3, const char *VAR_4,
                            GetByteContext *VAR_5, int VAR_6, AVDictionary **VAR_7)
{
    char *VAR_8;

    if (FUNC_4(VAR_5) < VAR_3 || VAR_3 < 0)
        return VAR_0;

    VAR_8 = FUNC_2(VAR_3 + 1);
    if (!VAR_8)
        return FUNC_0(VAR_2);

    FUNC_3(VAR_5, VAR_8, VAR_3);
    VAR_8[VAR_3] = 0;

    FUNC_1(VAR_7, VAR_4, VAR_8, VAR_1);
    return 0;
}
