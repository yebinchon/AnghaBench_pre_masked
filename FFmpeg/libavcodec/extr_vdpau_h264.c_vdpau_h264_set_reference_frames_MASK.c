
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* referenceFrames; } ;
struct TYPE_13__ {TYPE_4__ h264; } ;
struct vdpau_picture_context {TYPE_2__ info; } ;
typedef scalar_t__ VdpVideoSurface ;
struct TYPE_14__ {scalar_t__ surface; scalar_t__ is_long_term; int frame_idx; int bottom_is_reference; int top_is_reference; } ;
typedef TYPE_3__ VdpReferenceFrameH264 ;
typedef TYPE_4__ VdpPictureInfoH264 ;
struct TYPE_18__ {TYPE_6__* priv_data; } ;
struct TYPE_17__ {int short_ref_count; TYPE_5__** short_ref; TYPE_5__** long_ref; TYPE_1__* cur_pic_ptr; } ;
struct TYPE_16__ {int reference; scalar_t__ long_ref; int pic_id; int frame_num; int f; } ;
struct TYPE_12__ {struct vdpau_picture_context* hwaccel_picture_private; } ;
typedef TYPE_5__ H264Picture ;
typedef TYPE_6__ H264Context ;
typedef TYPE_7__ AVCodecContext ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_5)
{
    H264Context * const VAR_6 = VAR_5->priv_data;
    struct vdpau_picture_context *VAR_7 = VAR_6->cur_pic_ptr->hwaccel_picture_private;
    VdpPictureInfoH264 *VAR_8 = &VAR_7->info.h264;
    int VAR_9;

    VdpReferenceFrameH264 *VAR_10 = &VAR_8->referenceFrames[0];


    for (VAR_9 = 0; VAR_9 < 2; ++VAR_9) {
        H264Picture **VAR_11 = VAR_9 ? VAR_6->long_ref : VAR_6->short_ref;
        int VAR_12, VAR_13 = VAR_9 ? 16 : VAR_6->short_ref_count;

        for (VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12) {
            H264Picture *VAR_14 = VAR_11[VAR_12];
            VdpReferenceFrameH264 *VAR_15;
            VdpVideoSurface VAR_16;
            int VAR_17;

            if (!VAR_14 || !VAR_14->reference)
                continue;
            VAR_17 = VAR_14->long_ref ? VAR_14->pic_id : VAR_14->frame_num;
            VAR_16 = FUNC_0(VAR_14->f);

            VAR_15 = &VAR_8->referenceFrames[0];
            while (VAR_15 != VAR_10) {
                if ((VAR_15->surface == VAR_16) &&
                    (VAR_15->is_long_term == VAR_14->long_ref) &&
                    (VAR_15->frame_idx == VAR_17))
                    break;
                ++VAR_15;
            }
            if (VAR_15 != VAR_10) {
                VAR_15->top_is_reference |= (VAR_14->reference & VAR_2) ? VAR_4 : VAR_3;
                VAR_15->bottom_is_reference |= (VAR_14->reference & VAR_1) ? VAR_4 : VAR_3;
                continue;
            }

            if (VAR_10 >= &VAR_8->referenceFrames[FUNC_0(VAR_8->referenceFrames)])
                continue;

            FUNC_2(VAR_10, VAR_14, VAR_14->reference);
            ++VAR_10;
        }
    }

    for (; VAR_10 < &VAR_8->referenceFrames[FUNC_0(VAR_8->referenceFrames)]; ++VAR_10)
        FUNC_1(VAR_10);
}
