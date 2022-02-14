
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int slice_flags; int (* draw_horiz_band ) (TYPE_5__*,TYPE_4__ const*,int*,int,scalar_t__,int) ;scalar_t__ height; int pix_fmt; } ;
struct TYPE_13__ {int* linesize; } ;
struct TYPE_12__ {int log2_chroma_h; } ;
struct TYPE_10__ {TYPE_4__* f; } ;
struct TYPE_11__ {scalar_t__ picture_structure; scalar_t__ first_field; TYPE_1__ cur_pic; TYPE_5__* avctx; } ;
typedef int H264SliceContext ;
typedef TYPE_2__ H264Context ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_5__*,TYPE_4__ const*,int*,int,scalar_t__,int) ;

void FUNC_4(const H264Context *VAR_3, H264SliceContext *VAR_4,
                             int VAR_5, int VAR_6)
{
    AVCodecContext *VAR_7 = VAR_3->avctx;
    const AVFrame *VAR_8 = VAR_3->cur_pic.f;
    const AVPixFmtDescriptor *VAR_9 = FUNC_1(VAR_7->pix_fmt);
    int VAR_10 = VAR_9->log2_chroma_h;
    const int VAR_11 = VAR_3->picture_structure != VAR_1;
    if (VAR_11) {
        VAR_6 <<= 1;
        VAR_5 <<= 1;
    }

    VAR_6 = FUNC_0(VAR_6, VAR_7->height - VAR_5);

    if (VAR_11 && VAR_3->first_field && !(VAR_7->slice_flags & VAR_2))
        return;

    if (VAR_7->draw_horiz_band) {
        int VAR_12[VAR_0];
        int VAR_13;

        VAR_12[0] = VAR_5 * VAR_8->linesize[0];
        VAR_12[1] =
        VAR_12[2] = (VAR_5 >> VAR_10) * VAR_8->linesize[1];
        for (VAR_13 = 3; VAR_13 < VAR_0; VAR_13++)
            VAR_12[VAR_13] = 0;

        FUNC_2();

        VAR_7->draw_horiz_band(VAR_7, VAR_8, VAR_12,
                               VAR_5, VAR_3->picture_structure, VAR_6);
    }
}
