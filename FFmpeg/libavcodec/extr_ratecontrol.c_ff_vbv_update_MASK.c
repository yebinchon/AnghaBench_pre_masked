
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int rc_buffer_size; double const rc_min_rate; double const rc_max_rate; scalar_t__ qmax; int debug; } ;
struct TYPE_7__ {int buffer_index; } ;
struct TYPE_8__ {scalar_t__ qscale; scalar_t__ codec_id; TYPE_3__* avctx; TYPE_1__ rc_context; } ;
typedef TYPE_1__ RateControlContext ;
typedef TYPE_2__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,double const,double const) ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (TYPE_2__*,char*,int const,int,int,double const,double const) ;
 double FUNC_4 (TYPE_3__*) ;

int FUNC_5(MpegEncContext *VAR_4, int VAR_5)
{
    RateControlContext *VAR_6 = &VAR_4->rc_context;
    const double VAR_7 = FUNC_4(VAR_4->avctx);
    const int VAR_8 = VAR_4->avctx->rc_buffer_size;
    const double VAR_9 = VAR_4->avctx->rc_min_rate / VAR_7;
    const double VAR_10 = VAR_4->avctx->rc_max_rate / VAR_7;

    FUNC_3(VAR_4, "%d %f %d %f %f\n",
            VAR_8, VAR_6->buffer_index, VAR_5, VAR_9, VAR_10);

    if (VAR_8) {
        int VAR_11;

        VAR_6->buffer_index -= VAR_5;
        if (VAR_6->buffer_index < 0) {
            FUNC_1(VAR_4->avctx, VAR_2, "rc buffer underflow\n");
            if (VAR_5 > VAR_10 && VAR_4->qscale == VAR_4->avctx->qmax) {
                FUNC_1(VAR_4->avctx, VAR_2, "max bitrate possibly too small or try trellis with large lmax or increase qmax\n");
            }
            VAR_6->buffer_index = 0;
        }

        VAR_11 = VAR_8 - VAR_6->buffer_index - 1;
        VAR_6->buffer_index += FUNC_0(VAR_11, VAR_9, VAR_10);

        if (VAR_6->buffer_index > VAR_8) {
            int VAR_12 = FUNC_2((VAR_6->buffer_index - VAR_8) / 8);

            if (VAR_12 < 4 && VAR_4->codec_id == VAR_0)
                VAR_12 = 4;
            VAR_6->buffer_index -= 8 * VAR_12;

            if (VAR_4->avctx->debug & VAR_3)
                FUNC_1(VAR_4->avctx, VAR_1, "stuffing %d bytes\n", VAR_12);

            return VAR_12;
        }
    }
    return 0;
}
