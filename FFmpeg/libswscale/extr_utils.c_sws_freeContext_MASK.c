
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int inv_gamma; int gamma; int * cascaded1_tmp; int * cascaded_tmp; struct TYPE_8__** cascaded_context; int formatConvBuffer; int yuvTable; struct TYPE_8__* chrMmxextFilterCode; struct TYPE_8__* lumMmxextFilterCode; int chrMmxextFilterCodeSize; int lumMmxextFilterCodeSize; int hChrFilterPos; int hLumFilterPos; int vChrFilterPos; int vLumFilterPos; int vCCoeffsBank; int vYCoeffsBank; int hChrFilter; int hLumFilter; int vChrFilter; int vLumFilter; int * dither_error; } ;
typedef TYPE_1__ SwsContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;

void FUNC_6(SwsContext *VAR_1)
{
    int VAR_2;
    if (!VAR_1)
        return;

    for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
        FUNC_2(&VAR_1->dither_error[VAR_2]);

    FUNC_2(&VAR_1->vLumFilter);
    FUNC_2(&VAR_1->vChrFilter);
    FUNC_2(&VAR_1->hLumFilter);
    FUNC_2(&VAR_1->hChrFilter);





    FUNC_2(&VAR_1->vLumFilterPos);
    FUNC_2(&VAR_1->vChrFilterPos);
    FUNC_2(&VAR_1->hLumFilterPos);
    FUNC_2(&VAR_1->hChrFilterPos);
    FUNC_2(&VAR_1->yuvTable);
    FUNC_2(&VAR_1->formatConvBuffer);

    FUNC_6(VAR_1->cascaded_context[0]);
    FUNC_6(VAR_1->cascaded_context[1]);
    FUNC_6(VAR_1->cascaded_context[2]);
    FUNC_4(VAR_1->cascaded_context, 0, sizeof(VAR_1->cascaded_context));
    FUNC_2(&VAR_1->cascaded_tmp[0]);
    FUNC_2(&VAR_1->cascaded1_tmp[0]);

    FUNC_2(&VAR_1->gamma);
    FUNC_2(&VAR_1->inv_gamma);

    FUNC_3(VAR_1);

    FUNC_1(VAR_1);
}
