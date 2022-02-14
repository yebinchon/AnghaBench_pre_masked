
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int mb_y; scalar_t__ pict_type; int mb_width; scalar_t__ mb_x; int gb; } ;
struct TYPE_8__ {int field_mode; int pq; scalar_t__ p_frame_skipped; scalar_t__ bfraction_lut_index; int bi_type; TYPE_2__ s; } ;
typedef TYPE_1__ VC1Context ;
struct TYPE_11__ {scalar_t__ codec_id; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int wVerticalPosition; int dwSliceBitsInBuffer; unsigned int dwSliceDataLocation; int wMBbitOffset; scalar_t__ wBadSliceChopping; int wQuantizerScaleCode; scalar_t__ wNumberMBsInSlice; scalar_t__ bReservedBits; scalar_t__ bStartCodeBitOffset; scalar_t__ wHorizontalPosition; } ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ DXVA_SliceInfo ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_2, DXVA_SliceInfo *VAR_3,
                       unsigned VAR_4, unsigned VAR_5)
{
    const VC1Context *VAR_6 = VAR_2->priv_data;
    const MpegEncContext *VAR_7 = &VAR_6->s;

    FUNC_1(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->wHorizontalPosition = 0;
    VAR_3->wVerticalPosition = VAR_7->mb_y;
    VAR_3->dwSliceBitsInBuffer = 8 * VAR_5;
    VAR_3->dwSliceDataLocation = VAR_4;
    VAR_3->bStartCodeBitOffset = 0;
    VAR_3->bReservedBits = (VAR_7->pict_type == VAR_1 && !VAR_6->bi_type) ? VAR_6->bfraction_lut_index + 9 : 0;
    VAR_3->wMBbitOffset = VAR_6->p_frame_skipped ? 0xffff : FUNC_0(&VAR_7->gb) + (VAR_2->codec_id == VAR_0 ? 32 : 0);

    VAR_3->wNumberMBsInSlice = (VAR_7->mb_y >> VAR_6->field_mode) * VAR_7->mb_width + VAR_7->mb_x;
    VAR_3->wQuantizerScaleCode = VAR_6->pq;
    VAR_3->wBadSliceChopping = 0;
}
