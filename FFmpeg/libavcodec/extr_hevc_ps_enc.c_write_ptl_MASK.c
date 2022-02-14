
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ level_idc; } ;
struct TYPE_4__ {TYPE_2__* sub_layer_ptl; scalar_t__* sub_layer_level_present_flag; scalar_t__* sub_layer_profile_present_flag; TYPE_2__ general_ptl; } ;
typedef int PutBitContext ;
typedef TYPE_1__ PTL ;


 int FUNC_0 (int *,int,scalar_t__) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(PutBitContext *VAR_0, PTL *VAR_1, int VAR_2)
{
    int VAR_3;

    FUNC_1(VAR_0, &VAR_1->general_ptl);
    FUNC_0(VAR_0, 8, VAR_1->general_ptl.level_idc);

    for (VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++) {
        FUNC_0(VAR_0, 1, VAR_1->sub_layer_profile_present_flag[VAR_3]);
        FUNC_0(VAR_0, 1, VAR_1->sub_layer_level_present_flag[VAR_3]);
    }

    if (VAR_2 > 1)
        for (VAR_3 = VAR_2 - 1; VAR_3 < 8; VAR_3++)
            FUNC_0(VAR_0, 2, 0);

    for (VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++) {
        if (VAR_1->sub_layer_profile_present_flag[VAR_3])
            FUNC_1(VAR_0, &VAR_1->sub_layer_ptl[VAR_3]);
        if (VAR_1->sub_layer_level_present_flag[VAR_3])
            FUNC_0(VAR_0, 8, VAR_1->sub_layer_ptl[VAR_3].level_idc);
    }
}
