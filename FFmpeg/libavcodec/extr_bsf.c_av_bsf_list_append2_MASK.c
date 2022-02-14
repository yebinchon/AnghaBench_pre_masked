
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVDictionary ;
typedef int AVBitStreamFilter ;
typedef int AVBSFList ;
typedef int AVBSFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int **) ;
 int FUNC_1 (int **) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int **,int ) ;

int FUNC_5(AVBSFList *VAR_2, const char *VAR_3, AVDictionary ** VAR_4)
{
    int VAR_5;
    const AVBitStreamFilter *VAR_6;
    AVBSFContext *VAR_7;

    VAR_6 = FUNC_2(VAR_3);
    if (!VAR_6)
        return VAR_0;

    VAR_5 = FUNC_0(VAR_6, &VAR_7);
    if (VAR_5 < 0)
        return VAR_5;

    if (VAR_4) {
        VAR_5 = FUNC_4(VAR_7, VAR_4, VAR_1);
        if (VAR_5 < 0)
            goto end;
    }

    VAR_5 = FUNC_3(VAR_2, VAR_7);

end:
    if (VAR_5 < 0)
        FUNC_1(&VAR_7);

    return VAR_5;
}
