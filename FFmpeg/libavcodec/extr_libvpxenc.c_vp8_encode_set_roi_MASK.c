
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int roi_map; } ;
typedef TYPE_1__ vpx_roi_map_t ;
struct TYPE_10__ {int encoder; } ;
typedef TYPE_2__ VPxContext ;
struct TYPE_11__ {TYPE_2__* priv_data; } ;
typedef int AVFrameSideData ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,int const*,int,int,TYPE_1__*,int const,int const) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2, int VAR_3, int VAR_4, const AVFrameSideData *VAR_5)
{
    vpx_roi_map_t VAR_6;
    const int VAR_7 = 4;
    const int VAR_8 = 16;
    VPxContext *VAR_9 = VAR_2->priv_data;

    int VAR_10 = FUNC_2(VAR_2, VAR_5, VAR_3, VAR_4, &VAR_6, VAR_8, VAR_7);
    if (VAR_10) {
        FUNC_1(VAR_2, "Failed to set_roi_map.\n");
        return VAR_10;
    }

    if (FUNC_3(&VAR_9->encoder, VAR_1, &VAR_6)) {
        FUNC_1(VAR_2, "Failed to set VP8E_SET_ROI_MAP codec control.\n");
        VAR_10 = VAR_0;
    }

    FUNC_0(&VAR_6.roi_map);
    return VAR_10;
}
