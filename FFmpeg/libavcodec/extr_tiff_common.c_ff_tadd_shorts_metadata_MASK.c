
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef int GetByteContext ;
typedef int AVDictionary ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char const*,int,int) ;
 int FUNC_2 (int *,char**) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int FUNC_5 (int **,char const*,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

int FUNC_8(int VAR_5, const char *VAR_6, const char *VAR_7,
                            GetByteContext *VAR_8, int VAR_9, int VAR_10, AVDictionary **VAR_11)
{
    AVBPrint VAR_12;
    char *VAR_13;
    int VAR_14;

    if (VAR_5 >= VAR_4 / sizeof(int16_t) || VAR_5 <= 0)
        return VAR_0;
    if (FUNC_6(VAR_8) < VAR_5 * sizeof(int16_t))
        return VAR_0;

    FUNC_3(&VAR_12, 10 * VAR_5, VAR_1);

    for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
        int VAR_15 = VAR_10 ? (int16_t)FUNC_7(VAR_8, VAR_9) : FUNC_7(VAR_8, VAR_9);
        FUNC_4(&VAR_12, "%s%5i", FUNC_1(VAR_5, VAR_7, VAR_14, 8), VAR_15);
    }

    if ((VAR_14 = FUNC_2(&VAR_12, &VAR_13))) {
        return VAR_14;
    }
    if (!VAR_13) {
        return FUNC_0(VAR_3);
    }

    FUNC_5(VAR_11, VAR_6, VAR_13, VAR_2);

    return 0;
}
