
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bit_depth; } ;
typedef TYPE_1__ x264_api_t ;


 int VAR_0 ;
 TYPE_1__ const* VAR_1 ;

const x264_api_t * FUNC_0(int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
        if (-1 != VAR_1[VAR_3].bit_depth &&
            VAR_2 == VAR_1[VAR_3].bit_depth)
        {
            return &VAR_1[VAR_3];
        }
    }
    return ((void*)0);
}
