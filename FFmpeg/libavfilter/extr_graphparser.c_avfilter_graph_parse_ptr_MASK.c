
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nb_inputs; } ;
struct TYPE_8__ {int * filters; scalar_t__ nb_filters; } ;
typedef int AVFilterInOut ;
typedef TYPE_1__ AVFilterGraph ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (void*,int ,char*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (TYPE_2__*,int **,int **,void*) ;
 int FUNC_6 (TYPE_2__**,char const**,TYPE_1__*,int,void*) ;
 int FUNC_7 (char const**,int **,int **,void*) ;
 int FUNC_8 (char const**,int **,int **,int **,void*) ;
 int FUNC_9 (char const**,TYPE_1__*) ;
 int FUNC_10 (char const*,int ) ;

int FUNC_11(AVFilterGraph *VAR_3, const char *VAR_4,
                         AVFilterInOut **VAR_5, AVFilterInOut **VAR_6,
                         void *VAR_7)
{
    int VAR_8 = 0, VAR_9 = 0;
    char VAR_10 = 0;

    AVFilterInOut *VAR_11 = ((void*)0);
    AVFilterInOut *VAR_12 = VAR_5 ? *VAR_5 : ((void*)0);
    AVFilterInOut *VAR_13 = VAR_6 ? *VAR_6 : ((void*)0);

    if ((VAR_9 = FUNC_9(&VAR_4, VAR_3)) < 0)
        goto end;

    do {
        AVFilterContext *VAR_14;
        const char *VAR_15 = VAR_4;
        VAR_4 += FUNC_10(VAR_4, VAR_2);

        if ((VAR_9 = FUNC_7(&VAR_4, &VAR_11, &VAR_13, VAR_7)) < 0)
            goto end;

        if ((VAR_9 = FUNC_6(&VAR_14, &VAR_4, VAR_3, VAR_8, VAR_7)) < 0)
            goto end;

        if (VAR_14->nb_inputs == 1 && !VAR_11 && !VAR_8) {

            const char *VAR_16 = "[in]";
            if ((VAR_9 = FUNC_7(&VAR_16, &VAR_11, &VAR_13, VAR_7)) < 0)
                goto end;
        }

        if ((VAR_9 = FUNC_5(VAR_14, &VAR_11, &VAR_12, VAR_7)) < 0)
            goto end;

        if ((VAR_9 = FUNC_8(&VAR_4, &VAR_11, &VAR_12, &VAR_13,
                                 VAR_7)) < 0)
            goto end;

        VAR_4 += FUNC_10(VAR_4, VAR_2);
        VAR_10 = *VAR_4++;

        if (VAR_10 == ';' && VAR_11) {
            FUNC_2(VAR_7, VAR_0,
                   "Invalid filterchain containing an unlabelled output pad: \"%s\"\n",
                   VAR_15);
            VAR_9 = FUNC_0(VAR_1);
            goto end;
        }
        VAR_8++;
    } while (VAR_10 == ',' || VAR_10 == ';');

    if (VAR_10) {
        FUNC_2(VAR_7, VAR_0,
               "Unable to parse graph description substring: \"%s\"\n",
               VAR_4 - 1);
        VAR_9 = FUNC_0(VAR_1);
        goto end;
    }

    if (VAR_11) {

        const char *VAR_17 = "[out]";
        if ((VAR_9 = FUNC_8(&VAR_17, &VAR_11, &VAR_12, &VAR_13,
                                 VAR_7)) < 0)
            goto end;
    }

end:

    if (VAR_5) *VAR_5 = VAR_12;
    else FUNC_4(&VAR_12);
    if (VAR_6) *VAR_6 = VAR_13;
    else FUNC_4(&VAR_13);
    FUNC_4(&VAR_11);

    if (VAR_9 < 0) {
        while (VAR_3->nb_filters)
            FUNC_3(VAR_3->filters[0]);
        FUNC_1(&VAR_3->filters);
    }
    return VAR_9;
}
