
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int level_idc; } ;
typedef TYPE_1__ H265LevelDescriptor ;


 int FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const* VAR_0 ;

const H265LevelDescriptor *FUNC_1(int VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
        if (VAR_0[VAR_2].level_idc == VAR_1)
            return &VAR_0[VAR_2];
    }

    return ((void*)0);
}
