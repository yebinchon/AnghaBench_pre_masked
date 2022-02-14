
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int temporal_unit_size; int frame_unit_size; int bsf; } ;
typedef TYPE_1__ AnnexBContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    AnnexBContext *VAR_7 = VAR_5->priv_data;
    uint32_t VAR_8;
    int VAR_9, VAR_10;

retry:
    if (FUNC_5(VAR_5->pb)) {
        if (VAR_7->temporal_unit_size || VAR_7->frame_unit_size)
            return FUNC_0(VAR_4);
        FUNC_2(VAR_7->bsf, ((void*)0));
        goto end;
    }

    if (!VAR_7->temporal_unit_size) {
        VAR_10 = FUNC_6(VAR_5->pb, &VAR_7->temporal_unit_size);
        if (VAR_10 < 0) return VAR_1;
    }

    if (!VAR_7->frame_unit_size) {
        VAR_10 = FUNC_6(VAR_5->pb, &VAR_7->frame_unit_size);
        if (VAR_10 < 0 || ((int64_t)VAR_7->frame_unit_size + VAR_10) > VAR_7->temporal_unit_size)
            return VAR_1;
        VAR_7->temporal_unit_size -= VAR_10;
    }

    VAR_10 = FUNC_6(VAR_5->pb, &VAR_8);
    if (VAR_10 < 0 || ((int64_t)VAR_8 + VAR_10) > VAR_7->frame_unit_size)
        return VAR_1;

    VAR_9 = FUNC_3(VAR_5->pb, VAR_6, VAR_8);
    if (VAR_9 < 0)
        return VAR_9;
    if (VAR_9 != VAR_8)
        return FUNC_0(VAR_4);

    VAR_7->temporal_unit_size -= VAR_8 + VAR_10;
    VAR_7->frame_unit_size -= VAR_8 + VAR_10;

    VAR_9 = FUNC_2(VAR_7->bsf, VAR_6);
    if (VAR_9 < 0) {
        FUNC_4(VAR_5, VAR_2, "Failed to send packet to "
                                "av1_frame_merge filter\n");
        return VAR_9;
    }

end:
    VAR_9 = FUNC_1(VAR_7->bsf, VAR_6);
    if (VAR_9 < 0 && VAR_9 != FUNC_0(VAR_3) && VAR_9 != VAR_0)
        FUNC_4(VAR_5, VAR_2, "av1_frame_merge filter failed to "
                                "send output packet\n");

    if (VAR_9 == FUNC_0(VAR_3))
        goto retry;

    return VAR_9;
}
