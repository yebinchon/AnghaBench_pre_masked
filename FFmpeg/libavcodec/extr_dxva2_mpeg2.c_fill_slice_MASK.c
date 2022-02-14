
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct MpegEncContext {scalar_t__ picture_structure; int mb_y; int mb_width; scalar_t__ mb_x; } ;
struct TYPE_4__ {int wVerticalPosition; int dwSliceBitsInBuffer; unsigned int dwSliceDataLocation; scalar_t__ wMBbitOffset; int wQuantizerScaleCode; scalar_t__ wBadSliceChopping; scalar_t__ wNumberMBsInSlice; scalar_t__ bReservedBits; scalar_t__ bStartCodeBitOffset; scalar_t__ wHorizontalPosition; } ;
typedef int GetBitContext ;
typedef TYPE_1__ DXVA_SliceInfo ;
typedef int AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(AVCodecContext *VAR_1,
                       const struct MpegEncContext *VAR_2,
                       DXVA_SliceInfo *VAR_3,
                       unsigned VAR_4,
                       const uint8_t *VAR_5, unsigned VAR_6)
{
    int VAR_7 = VAR_2->picture_structure != VAR_0;
    GetBitContext VAR_8;

    FUNC_3(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->wHorizontalPosition = VAR_2->mb_x;
    VAR_3->wVerticalPosition = VAR_2->mb_y >> VAR_7;
    VAR_3->dwSliceBitsInBuffer = 8 * VAR_6;
    VAR_3->dwSliceDataLocation = VAR_4;
    VAR_3->bStartCodeBitOffset = 0;
    VAR_3->bReservedBits = 0;

    VAR_3->wNumberMBsInSlice = (VAR_2->mb_y >> VAR_7) * VAR_2->mb_width + VAR_2->mb_x;
    VAR_3->wBadSliceChopping = 0;

    FUNC_2(&VAR_8, &VAR_5[4], 8 * (VAR_6 - 4));

    VAR_3->wQuantizerScaleCode = FUNC_0(&VAR_8, 5);
    FUNC_4(&VAR_8);

    VAR_3->wMBbitOffset = 4 * 8 + FUNC_1(&VAR_8);
}
