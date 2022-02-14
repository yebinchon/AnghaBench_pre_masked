
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ direct_spatial_mv_pred; } ;
typedef TYPE_1__ H264SliceContext ;
typedef int H264Context ;


 int FUNC_0 (int const* const,TYPE_1__*,int*) ;
 int FUNC_1 (int const* const,TYPE_1__*,int*) ;

void FUNC_2(const H264Context *const VAR_0, H264SliceContext *VAR_1,
                                int *VAR_2)
{
    if (VAR_1->direct_spatial_mv_pred)
        FUNC_0(VAR_0, VAR_1, VAR_2);
    else
        FUNC_1(VAR_0, VAR_1, VAR_2);
}
