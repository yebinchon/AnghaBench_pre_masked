
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_5__ {int bit_depth; int chroma_format_idc; int pixel_shift; int * vshift; int * hshift; int pix_fmt; } ;
typedef TYPE_1__ HEVCSPS ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *,int ,char*,int,int) ;
 TYPE_2__* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_19, HEVCSPS *VAR_20)
{
    const AVPixFmtDescriptor *VAR_21;
    switch (VAR_20->bit_depth) {
    case 8:
        if (VAR_20->chroma_format_idc == 0) VAR_20->pix_fmt = VAR_4;
        if (VAR_20->chroma_format_idc == 1) VAR_20->pix_fmt = VAR_6;
        if (VAR_20->chroma_format_idc == 2) VAR_20->pix_fmt = VAR_10;
        if (VAR_20->chroma_format_idc == 3) VAR_20->pix_fmt = VAR_14;
       break;
    case 9:
        if (VAR_20->chroma_format_idc == 0) VAR_20->pix_fmt = VAR_5;
        if (VAR_20->chroma_format_idc == 1) VAR_20->pix_fmt = VAR_9;
        if (VAR_20->chroma_format_idc == 2) VAR_20->pix_fmt = VAR_13;
        if (VAR_20->chroma_format_idc == 3) VAR_20->pix_fmt = VAR_17;
        break;
    case 10:
        if (VAR_20->chroma_format_idc == 0) VAR_20->pix_fmt = VAR_2;
        if (VAR_20->chroma_format_idc == 1) VAR_20->pix_fmt = VAR_7;
        if (VAR_20->chroma_format_idc == 2) VAR_20->pix_fmt = VAR_11;
        if (VAR_20->chroma_format_idc == 3) VAR_20->pix_fmt = VAR_15;
        break;
    case 12:
        if (VAR_20->chroma_format_idc == 0) VAR_20->pix_fmt = VAR_3;
        if (VAR_20->chroma_format_idc == 1) VAR_20->pix_fmt = VAR_8;
        if (VAR_20->chroma_format_idc == 2) VAR_20->pix_fmt = VAR_12;
        if (VAR_20->chroma_format_idc == 3) VAR_20->pix_fmt = VAR_16;
        break;
    default:
        FUNC_1(VAR_19, VAR_1,
               "The following bit-depths are currently specified: 8, 9, 10 and 12 bits, "
               "chroma_format_idc is %d, depth is %d\n",
               VAR_20->chroma_format_idc, VAR_20->bit_depth);
        return VAR_0;
    }

    VAR_21 = FUNC_2(VAR_20->pix_fmt);
    if (!VAR_21)
        return FUNC_0(VAR_18);

    VAR_20->hshift[0] = VAR_20->vshift[0] = 0;
    VAR_20->hshift[2] = VAR_20->hshift[1] = VAR_21->log2_chroma_w;
    VAR_20->vshift[2] = VAR_20->vshift[1] = VAR_21->log2_chroma_h;

    VAR_20->pixel_shift = VAR_20->bit_depth > 8;

    return 0;
}
