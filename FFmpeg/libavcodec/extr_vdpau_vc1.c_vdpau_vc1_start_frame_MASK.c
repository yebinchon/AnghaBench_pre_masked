
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {int picture_type; int postprocflag; int rangered; int deblockEnable; int pquant; int maxbframes; int syncmarker; int multires; int range_mapuv; int range_mapuv_flag; int range_mapy; int range_mapy_flag; int fastuvmc; int loopfilter; int vstransform; int overlap; int extended_dmv; int extended_mv; int quantizer; int refdist_flag; int panscan_flag; int dquant; int psf; int finterpflag; int tfcntrflag; int interlace; int pulldown; scalar_t__ frame_coding_mode; scalar_t__ slice_count; void* forward_reference; void* backward_reference; } ;
struct TYPE_10__ {TYPE_4__ vc1; } ;
struct vdpau_picture_context {TYPE_1__ info; } ;
typedef void* VdpVideoSurface ;
typedef TYPE_4__ VdpPictureInfoVC1 ;
struct TYPE_12__ {int f; } ;
struct TYPE_11__ {int f; } ;
struct TYPE_16__ {int pict_type; int max_b_frames; int loop_filter; TYPE_3__ last_picture; int last_picture_ptr; TYPE_2__ next_picture; int next_picture_ptr; TYPE_6__* current_picture_ptr; } ;
struct TYPE_14__ {int postprocflag; int rangered; int rangeredfrm; int pq; TYPE_7__ s; int resync_marker; int multires; int range_mapuv; int range_mapuv_flag; int range_mapy; int range_mapy_flag; int fastuvmc; int vstransform; int overlap; int extended_dmv; int extended_mv; int quantizer_mode; int refdist_flag; int panscanflag; int dquant; int psf; int finterpflag; int tfcntrflag; int interlace; int broadcast; scalar_t__ fcm; scalar_t__ bi_type; } ;
typedef TYPE_5__ VC1Context ;
struct TYPE_17__ {TYPE_5__* priv_data; } ;
struct TYPE_15__ {struct vdpau_picture_context* hwaccel_picture_private; } ;
typedef TYPE_6__ Picture ;
typedef TYPE_7__ MpegEncContext ;
typedef TYPE_8__ AVCodecContext ;




 void* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vdpau_picture_context*,int const*,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_1,
                                 const uint8_t *VAR_2, uint32_t VAR_3)
{
    VC1Context * const VAR_4 = VAR_1->priv_data;
    MpegEncContext * const VAR_5 = &VAR_4->s;
    Picture *VAR_6 = VAR_5->current_picture_ptr;
    struct vdpau_picture_context *VAR_7 = VAR_6->hwaccel_picture_private;
    VdpPictureInfoVC1 *VAR_8 = &VAR_7->info.vc1;
    VdpVideoSurface VAR_9;


    VAR_8->forward_reference = VAR_0;
    VAR_8->backward_reference = VAR_0;

    switch (VAR_5->pict_type) {
    case 129:
        if (VAR_5->next_picture_ptr) {
        VAR_9 = FUNC_2(VAR_5->next_picture.f);
        FUNC_0(VAR_9 != VAR_0);
        VAR_8->backward_reference = VAR_9;
        }

    case 128:
        if (VAR_5->last_picture_ptr) {
        VAR_9 = FUNC_2(VAR_5->last_picture.f);
        FUNC_0(VAR_9 != VAR_0);
        VAR_8->forward_reference = VAR_9;
        }
    }

    VAR_8->slice_count = 0;
    if (VAR_4->bi_type)
        VAR_8->picture_type = 4;
    else
        VAR_8->picture_type = VAR_5->pict_type - 1 + VAR_5->pict_type / 3;

    VAR_8->frame_coding_mode = VAR_4->fcm ? (VAR_4->fcm + 1) : 0;
    VAR_8->postprocflag = VAR_4->postprocflag;
    VAR_8->pulldown = VAR_4->broadcast;
    VAR_8->interlace = VAR_4->interlace;
    VAR_8->tfcntrflag = VAR_4->tfcntrflag;
    VAR_8->finterpflag = VAR_4->finterpflag;
    VAR_8->psf = VAR_4->psf;
    VAR_8->dquant = VAR_4->dquant;
    VAR_8->panscan_flag = VAR_4->panscanflag;
    VAR_8->refdist_flag = VAR_4->refdist_flag;
    VAR_8->quantizer = VAR_4->quantizer_mode;
    VAR_8->extended_mv = VAR_4->extended_mv;
    VAR_8->extended_dmv = VAR_4->extended_dmv;
    VAR_8->overlap = VAR_4->overlap;
    VAR_8->vstransform = VAR_4->vstransform;
    VAR_8->loopfilter = VAR_4->s.loop_filter;
    VAR_8->fastuvmc = VAR_4->fastuvmc;
    VAR_8->range_mapy_flag = VAR_4->range_mapy_flag;
    VAR_8->range_mapy = VAR_4->range_mapy;
    VAR_8->range_mapuv_flag = VAR_4->range_mapuv_flag;
    VAR_8->range_mapuv = VAR_4->range_mapuv;

    VAR_8->multires = VAR_4->multires;
    VAR_8->syncmarker = VAR_4->resync_marker;
    VAR_8->rangered = VAR_4->rangered | (VAR_4->rangeredfrm << 1);
    VAR_8->maxbframes = VAR_4->s.max_b_frames;
    VAR_8->deblockEnable = VAR_4->postprocflag & 1;
    VAR_8->pquant = VAR_4->pq;

    return FUNC_1(VAR_7, VAR_2, VAR_3);
}
