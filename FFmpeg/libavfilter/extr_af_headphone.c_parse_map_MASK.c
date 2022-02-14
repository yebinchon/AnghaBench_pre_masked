
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int lfe_channel; int nb_inputs; int* mapping; size_t nb_irs; scalar_t__ hrir_fmt; int map; } ;
typedef TYPE_1__ HeadphoneContext ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int ,char*,char*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char*,char*,char**) ;
 scalar_t__ FUNC_4 (TYPE_1__*,size_t,char**,int*,char*) ;

__attribute__((used)) static void FUNC_5(AVFilterContext *VAR_2)
{
    HeadphoneContext *VAR_3 = VAR_2->priv;
    char *VAR_4, *VAR_5, *VAR_6, *VAR_7 = FUNC_2(VAR_3->map);
    int VAR_8;

    if (!VAR_7)
        return;
    VAR_6 = VAR_7;

    VAR_3->lfe_channel = -1;
    VAR_3->nb_inputs = 1;

    for (VAR_8 = 0; VAR_8 < 64; VAR_8++) {
        VAR_3->mapping[VAR_8] = -1;
    }

    while ((VAR_4 = FUNC_3(VAR_6, "|", &VAR_5))) {
        int VAR_9;
        char VAR_10[8];

        VAR_6 = ((void*)0);
        if (FUNC_4(VAR_3, VAR_3->nb_irs, &VAR_4, &VAR_9, VAR_10)) {
            FUNC_1(VAR_2, VAR_0, "Failed to parse \'%s\' as channel name.\n", VAR_10);
            continue;
        }
        VAR_3->mapping[VAR_3->nb_irs] = VAR_9;
        VAR_3->nb_irs++;
    }

    if (VAR_3->hrir_fmt == VAR_1)
        VAR_3->nb_inputs = 2;
    else
        VAR_3->nb_inputs = VAR_3->nb_irs + 1;

    FUNC_0(VAR_7);
}
