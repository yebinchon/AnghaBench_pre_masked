
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* priv_data; } ;
struct TYPE_7__ {TYPE_2__* sps; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;
struct TYPE_8__ {scalar_t__ num_reorder_frames; scalar_t__ ref_frame_count; } ;
typedef TYPE_2__ SPS ;
typedef TYPE_3__ H264Context ;
typedef TYPE_4__ AVCodecContext ;
typedef int AVBufferRef ;


 int FUNC_0 (TYPE_4__*,int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0,
                                   AVBufferRef *VAR_1)
{
    const H264Context *VAR_2 = VAR_0->priv_data;
    const SPS *VAR_3 = VAR_2->ps.sps;
    return FUNC_0(VAR_0, VAR_1, VAR_3->ref_frame_count + VAR_3->num_reorder_frames, 0);
}
