
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int GetByteContext ;
typedef int AVDictionary ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char const*,int,int) ;
 int FUNC_2 (int *,char**) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (int **,char const*,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

int FUNC_8(int VAR_4, const char *VAR_5, const char *VAR_6,
                             GetByteContext *VAR_7, int VAR_8, AVDictionary **VAR_9)
{
    AVBPrint VAR_10;
    char *VAR_11;
    int VAR_12;

    if (VAR_4 >= VAR_3 / sizeof(int64_t) || VAR_4 <= 0)
        return VAR_0;
    if (FUNC_6(VAR_7) < VAR_4 * sizeof(int64_t))
        return VAR_0;

    FUNC_3(&VAR_10, 10 * VAR_4, 100 * VAR_4);

    for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
        FUNC_4(&VAR_10, "%s%.15g", FUNC_1(VAR_4, VAR_6, VAR_12, 4), FUNC_7(VAR_7, VAR_8));
    }

    if ((VAR_12 = FUNC_2(&VAR_10, &VAR_11))) {
        return VAR_12;
    }
    if (!VAR_11) {
        return FUNC_0(VAR_2);
    }

    FUNC_5(VAR_9, VAR_5, VAR_11, VAR_1);

    return 0;
}
