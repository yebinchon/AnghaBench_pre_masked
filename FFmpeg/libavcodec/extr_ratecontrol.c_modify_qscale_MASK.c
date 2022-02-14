
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {double rc_buffer_size; double const rc_min_rate; double const rc_max_rate; double const rc_min_vbv_overflow_use; int debug; double const rc_max_available_vbv_use; } ;
struct TYPE_12__ {double buffer_index; } ;
struct TYPE_13__ {int rc_qmod_freq; double rc_qmod_amp; double rc_buffer_aggressivity; double rc_qsquish; TYPE_7__* avctx; TYPE_2__ rc_context; } ;
struct TYPE_11__ {int new_pict_type; } ;
typedef TYPE_1__ RateControlEntry ;
typedef TYPE_2__ RateControlContext ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (double const,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_7__*,int ,char*,double,double) ;
 double FUNC_2 (TYPE_1__*,int ) ;
 double FUNC_3 (double) ;
 int FUNC_4 (TYPE_3__*,char*,double,double const,double const,double const,double const,double) ;
 double FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int*,int*,TYPE_3__*,int const) ;
 double FUNC_7 (double) ;
 double FUNC_8 (double,double) ;

__attribute__((used)) static double FUNC_9(MpegEncContext *VAR_3, RateControlEntry *VAR_4,
                            double VAR_5, int VAR_6)
{
    RateControlContext *VAR_7 = &VAR_3->rc_context;
    const double VAR_8 = VAR_3->avctx->rc_buffer_size;
    const double VAR_9 = FUNC_5(VAR_3->avctx);
    const double VAR_10 = VAR_3->avctx->rc_min_rate / VAR_9;
    const double VAR_11 = VAR_3->avctx->rc_max_rate / VAR_9;
    const int VAR_12 = VAR_4->new_pict_type;
    int VAR_13, VAR_14;

    FUNC_6(&VAR_13, &VAR_14, VAR_3, VAR_12);


    if (VAR_3->rc_qmod_freq &&
        VAR_6 % VAR_3->rc_qmod_freq == 0 &&
        VAR_12 == VAR_1)
        VAR_5 *= VAR_3->rc_qmod_amp;


    if (VAR_8) {
        double VAR_15 = VAR_7->buffer_index;
        double VAR_16;

        if (VAR_10) {
            double VAR_17 = 2 * (VAR_8 - VAR_15) / VAR_8;
            if (VAR_17 > 1.0)
                VAR_17 = 1.0;
            else if (VAR_17 < 0.0001)
                VAR_17 = 0.0001;
            VAR_5 *= FUNC_8(VAR_17, 1.0 / VAR_3->rc_buffer_aggressivity);

            VAR_16 = FUNC_2(VAR_4,
                              FUNC_0((VAR_10 - VAR_8 + VAR_7->buffer_index) *
                                    VAR_3->avctx->rc_min_vbv_overflow_use, 1));

            if (VAR_5 > VAR_16) {
                if (VAR_3->avctx->debug & VAR_2)
                    FUNC_1(VAR_3->avctx, VAR_0,
                           "limiting QP %f -> %f\n", VAR_5, VAR_16);
                VAR_5 = VAR_16;
            }
        }

        if (VAR_11) {
            double VAR_18 = 2 * VAR_15 / VAR_8;
            if (VAR_18 > 1.0)
                VAR_18 = 1.0;
            else if (VAR_18 < 0.0001)
                VAR_18 = 0.0001;
            VAR_5 /= FUNC_8(VAR_18, 1.0 / VAR_3->rc_buffer_aggressivity);

            VAR_16 = FUNC_2(VAR_4,
                              FUNC_0(VAR_7->buffer_index *
                                    VAR_3->avctx->rc_max_available_vbv_use,
                                    1));
            if (VAR_5 < VAR_16) {
                if (VAR_3->avctx->debug & VAR_2)
                    FUNC_1(VAR_3->avctx, VAR_0,
                           "limiting QP %f -> %f\n", VAR_5, VAR_16);
                VAR_5 = VAR_16;
            }
        }
    }
    FUNC_4(VAR_3, "q:%f max:%f min:%f size:%f index:%f agr:%f\n",
            VAR_5, VAR_11, VAR_10, VAR_8, VAR_7->buffer_index,
            VAR_3->rc_buffer_aggressivity);
    if (VAR_3->rc_qsquish == 0.0 || VAR_13 == VAR_14) {
        if (VAR_5 < VAR_13)
            VAR_5 = VAR_13;
        else if (VAR_5 > VAR_14)
            VAR_5 = VAR_14;
    } else {
        double VAR_19 = FUNC_7(VAR_13);
        double VAR_20 = FUNC_7(VAR_14);

        VAR_5 = FUNC_7(VAR_5);
        VAR_5 = (VAR_5 - VAR_19) / (VAR_20 - VAR_19) - 0.5;
        VAR_5 *= -4.0;
        VAR_5 = 1.0 / (1.0 + FUNC_3(VAR_5));
        VAR_5 = VAR_5 * (VAR_20 - VAR_19) + VAR_19;

        VAR_5 = FUNC_3(VAR_5);
    }

    return VAR_5;
}
