
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int profile; int level; int bitdepth; int chroma_subsampling; int full_range_flag; } ;
typedef TYPE_1__ VPCC ;
struct TYPE_7__ {int color_primaries; int color_trc; int color_space; } ;
typedef int AVIOContext ;
typedef int AVFormatContext ;
typedef TYPE_2__ AVCodecParameters ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int *,TYPE_1__*) ;

int FUNC_3(AVFormatContext *VAR_0, AVIOContext *VAR_1,
                       AVCodecParameters *VAR_2)
{
    VPCC VAR_3;
    int VAR_4;

    VAR_4 = FUNC_2(VAR_0, VAR_2, ((void*)0), &VAR_3);
    if (VAR_4 < 0)
        return VAR_4;

    FUNC_0(VAR_1, VAR_3.profile);
    FUNC_0(VAR_1, VAR_3.level);
    FUNC_0(VAR_1, (VAR_3.bitdepth << 4) | (VAR_3.chroma_subsampling << 1) | VAR_3.full_range_flag);
    FUNC_0(VAR_1, VAR_2->color_primaries);
    FUNC_0(VAR_1, VAR_2->color_trc);
    FUNC_0(VAR_1, VAR_2->color_space);


    FUNC_1(VAR_1, 0);
    return 0;
}
