
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int level_idc; int constraint_set3_flag; } ;
typedef TYPE_1__ H264LevelDescriptor ;


 int FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const* VAR_0 ;

const H264LevelDescriptor *FUNC_1(int VAR_1,
                                             int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
        if (VAR_0[VAR_3].level_idc == VAR_1 &&
            VAR_0[VAR_3].constraint_set3_flag == VAR_2)
            return &VAR_0[VAR_3];
    }
    return ((void*)0);
}
