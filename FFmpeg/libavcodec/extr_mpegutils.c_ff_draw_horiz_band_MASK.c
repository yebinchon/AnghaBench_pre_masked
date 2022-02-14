
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int slice_flags; scalar_t__ codec_id; int (* draw_horiz_band ) (TYPE_3__*,TYPE_2__*,int*,int,int,int) ;scalar_t__ height; int pix_fmt; } ;
struct TYPE_11__ {scalar_t__ pict_type; int* linesize; } ;
struct TYPE_10__ {int log2_chroma_h; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int*,int,int,int) ;

void FUNC_4(AVCodecContext *VAR_6,
                        AVFrame *VAR_7, AVFrame *VAR_8,
                        int VAR_9, int VAR_10, int VAR_11,
                        int VAR_12, int VAR_13)
{
    const AVPixFmtDescriptor *VAR_14 = FUNC_1(VAR_6->pix_fmt);
    int VAR_15 = VAR_14->log2_chroma_h;
    const int VAR_16 = VAR_11 != VAR_3;
    if (VAR_16) {
        VAR_10 <<= 1;
        VAR_9 <<= 1;
    }

    VAR_10 = FUNC_0(VAR_10, VAR_6->height - VAR_9);

    if (VAR_16 && VAR_12 &&
        !(VAR_6->slice_flags & VAR_4))
        return;

    if (VAR_6->draw_horiz_band) {
        AVFrame *VAR_17;
        int VAR_18[VAR_1];
        int VAR_19;

        if (VAR_7->pict_type == VAR_2 || VAR_13 ||
           (VAR_6->slice_flags & VAR_5))
            VAR_17 = VAR_7;
        else if (VAR_8)
            VAR_17 = VAR_8;
        else
            return;

        if (VAR_7->pict_type == VAR_2 &&
            VAR_11 == VAR_3 &&
            VAR_6->codec_id != VAR_0) {
            for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++)
                VAR_18[VAR_19] = 0;
        } else {
            VAR_18[0]= VAR_9 * VAR_17->linesize[0];
            VAR_18[1]=
            VAR_18[2]= (VAR_9 >> VAR_15) * VAR_17->linesize[1];
            for (VAR_19 = 3; VAR_19 < VAR_1; VAR_19++)
                VAR_18[VAR_19] = 0;
        }

        FUNC_2();

        VAR_6->draw_horiz_band(VAR_6, VAR_17, VAR_18,
                               VAR_9, VAR_11, VAR_10);
    }
}
