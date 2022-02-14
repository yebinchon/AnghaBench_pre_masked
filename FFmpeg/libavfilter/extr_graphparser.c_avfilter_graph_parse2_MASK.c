
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * filters; scalar_t__ nb_filters; } ;
typedef int AVFilterInOut ;
typedef TYPE_1__ AVFilterGraph ;
typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,int **) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_1__*,int ,char*,char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,int **,int **,TYPE_1__*) ;
 int FUNC_7 (int **,char const**,TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_8 (char const**,int **,int **,TYPE_1__*) ;
 int FUNC_9 (char const**,int **,int **,int **,TYPE_1__*) ;
 int FUNC_10 (char const**,TYPE_1__*) ;
 int FUNC_11 (char const*,int ) ;

int FUNC_12(AVFilterGraph *VAR_3, const char *VAR_4,
                          AVFilterInOut **VAR_5,
                          AVFilterInOut **VAR_6)
{
    int VAR_7 = 0, VAR_8 = 0;
    char VAR_9 = 0;

    AVFilterInOut *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

    VAR_4 += FUNC_11(VAR_4, VAR_2);

    if ((VAR_8 = FUNC_10(&VAR_4, VAR_3)) < 0)
        goto fail;

    do {
        AVFilterContext *VAR_13;
        VAR_4 += FUNC_11(VAR_4, VAR_2);

        if ((VAR_8 = FUNC_8(&VAR_4, &VAR_10, &VAR_12, VAR_3)) < 0)
            goto end;
        if ((VAR_8 = FUNC_7(&VAR_13, &VAR_4, VAR_3, VAR_7, VAR_3)) < 0)
            goto end;


        if ((VAR_8 = FUNC_6(VAR_13, &VAR_10, &VAR_11, VAR_3)) < 0)
            goto end;

        if ((VAR_8 = FUNC_9(&VAR_4, &VAR_10, &VAR_11, &VAR_12,
                                 VAR_3)) < 0)
            goto end;

        VAR_4 += FUNC_11(VAR_4, VAR_2);
        VAR_9 = *VAR_4++;

        if (VAR_9 == ';' && VAR_10)
            FUNC_1(&VAR_12, &VAR_10);
        VAR_7++;
    } while (VAR_9 == ',' || VAR_9 == ';');

    if (VAR_9) {
        FUNC_3(VAR_3, VAR_0,
               "Unable to parse graph description substring: \"%s\"\n",
               VAR_4 - 1);
        VAR_8 = FUNC_0(VAR_1);
        goto end;
    }

    FUNC_1(&VAR_12, &VAR_10);


    *VAR_5 = VAR_11;
    *VAR_6 = VAR_12;
    return 0;

 fail:end:
    while (VAR_3->nb_filters)
        FUNC_4(VAR_3->filters[0]);
    FUNC_2(&VAR_3->filters);
    FUNC_5(&VAR_11);
    FUNC_5(&VAR_12);
    FUNC_5(&VAR_10);

    *VAR_5 = ((void*)0);
    *VAR_6 = ((void*)0);

    return VAR_8;
}
