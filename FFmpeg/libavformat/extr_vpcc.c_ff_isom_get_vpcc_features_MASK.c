
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int profile; int level; int bitdepth; int chroma_subsampling; int full_range_flag; } ;
typedef TYPE_1__ VPCC ;
struct TYPE_7__ {int profile; int level; int color_range; int chroma_location; int format; } ;
typedef int AVRational ;
typedef int AVFormatContext ;
typedef TYPE_2__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(AVFormatContext *VAR_9, AVCodecParameters *VAR_10,
                              AVRational *VAR_11, VPCC *VAR_12)
{
    int VAR_13 = VAR_10->profile;
    int VAR_14 = VAR_10->level == VAR_1 ?
        FUNC_1(VAR_10, VAR_11) : VAR_10->level;
    int VAR_15 = FUNC_0(VAR_9, VAR_10->format);
    int VAR_16 =
        FUNC_2(VAR_9, VAR_10->format, VAR_10->chroma_location);
    int VAR_17 =
        FUNC_3(VAR_10->color_range);

    if (VAR_15 < 0 || VAR_16 < 0)
        return VAR_0;

    if (VAR_13 == VAR_2) {
        if (VAR_16 == VAR_8 ||
            VAR_16 == VAR_7) {
            VAR_13 = (VAR_15 == 8) ? VAR_3 : VAR_5;
        } else {
            VAR_13 = (VAR_15 == 8) ? VAR_4 : VAR_6;
        }
    }

    VAR_12->profile = VAR_13;
    VAR_12->level = VAR_14;
    VAR_12->bitdepth = VAR_15;
    VAR_12->chroma_subsampling = VAR_16;
    VAR_12->full_range_flag = VAR_17;

    return 0;
}
