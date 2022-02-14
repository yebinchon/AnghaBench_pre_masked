
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct TYPE_20__ {TYPE_1__* priv; TYPE_2__** inputs; } ;
struct TYPE_16__ {int den; int num; } ;
struct TYPE_19__ {int w; scalar_t__ format; int sample_rate; int time_base; TYPE_13__ frame_rate; int sample_aspect_ratio; int h; TYPE_3__* src; } ;
struct TYPE_17__ {int num; int den; } ;
struct TYPE_18__ {int width; scalar_t__ format; int cqt_len; int fcount; int fft_bits; int timeclamp; int fft_len; int remaining_fill_max; double attack; double* attack_data; int cqt_align; int remaining_fill; int count; int step; TYPE_14__ step_frac; TYPE_13__ rate; scalar_t__ remaining_frac; scalar_t__ sono_idx; scalar_t__ next_pts; scalar_t__ sono_count; void* c_buf; void* rcp_h_buf; void* h_buf; int sono_frame; scalar_t__ sono_h; scalar_t__ axisfile; int axis; scalar_t__ axis_h; int update_sono; int draw_axis; int draw_bar; int draw_sono; int * permute_coeffs; int cqt_calc; void* cqt_result; void* fft_result; void* fft_data; int fft_ctx; int endfreq; int basefreq; int freq; int bar_h; int height; } ;
typedef TYPE_1__ ShowCQTContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__,int,scalar_t__) ;
 void* FUNC_4 (int,int) ;
 TYPE_14__ FUNC_5 (int ,TYPE_13__) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_13__) ;
 int FUNC_9 (TYPE_3__*,int ,char*,...) ;
 int FUNC_10 (int,int) ;
 void* FUNC_11 (int,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (TYPE_1__*) ;
 double FUNC_15 (int) ;
 int VAR_9 ;
 int FUNC_16 (int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 scalar_t__ FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (int) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_24(AVFilterLink *VAR_17)
{
    AVFilterContext *VAR_18 = VAR_17->src;
    AVFilterLink *VAR_19 = VAR_18->inputs[0];
    ShowCQTContext *VAR_20 = VAR_18->priv;
    int VAR_21;

    FUNC_14(VAR_20);

    VAR_17->w = VAR_20->width;
    VAR_17->h = VAR_20->height;
    VAR_20->format = VAR_17->format;
    VAR_17->sample_aspect_ratio = FUNC_10(1, 1);
    VAR_17->frame_rate = VAR_20->rate;
    VAR_17->time_base = FUNC_12(FUNC_8(VAR_20->rate), FUNC_10(1, VAR_8));
    FUNC_9(VAR_18, VAR_1, "video: %dx%d %s %d/%d fps, bar_h = %d, axis_h = %d, sono_h = %d.\n",
           VAR_20->width, VAR_20->height, FUNC_7(VAR_20->format), VAR_20->rate.num, VAR_20->rate.den,
           VAR_20->bar_h, VAR_20->axis_h, VAR_20->sono_h);

    VAR_20->cqt_len = VAR_20->width * VAR_20->fcount;
    if (!(VAR_20->freq = FUNC_16(VAR_20->basefreq, VAR_20->endfreq, VAR_20->cqt_len)))
        return FUNC_0(VAR_6);

    if ((VAR_21 = FUNC_22(VAR_20)) < 0)
        return VAR_21;

    VAR_20->fft_bits = FUNC_1(FUNC_13(FUNC_23(VAR_19->sample_rate * VAR_20->timeclamp)), 4);
    VAR_20->fft_len = 1 << VAR_20->fft_bits;
    FUNC_9(VAR_18, VAR_1, "fft_len = %d, cqt_len = %d.\n", VAR_20->fft_len, VAR_20->cqt_len);

    VAR_20->fft_ctx = FUNC_6(VAR_20->fft_bits, 0);
    VAR_20->fft_data = FUNC_4(VAR_20->fft_len, sizeof(*VAR_20->fft_data));
    VAR_20->fft_result = FUNC_4(VAR_20->fft_len + 64, sizeof(*VAR_20->fft_result));
    VAR_20->cqt_result = FUNC_11(VAR_20->cqt_len, sizeof(*VAR_20->cqt_result));
    if (!VAR_20->fft_ctx || !VAR_20->fft_data || !VAR_20->fft_result || !VAR_20->cqt_result)
        return FUNC_0(VAR_6);

    VAR_20->remaining_fill_max = VAR_20->fft_len / 2;
    if (VAR_20->attack > 0.0) {
        int VAR_22;

        VAR_20->remaining_fill_max = FUNC_2(VAR_20->remaining_fill_max, FUNC_13(VAR_19->sample_rate * VAR_20->attack));
        VAR_20->attack_data = FUNC_11(VAR_20->remaining_fill_max, sizeof(*VAR_20->attack_data));
        if (!VAR_20->attack_data)
            return FUNC_0(VAR_6);

        for (VAR_22 = 0; VAR_22 < VAR_20->remaining_fill_max; VAR_22++) {
            double VAR_23 = VAR_7 * VAR_22 / (VAR_19->sample_rate * VAR_20->attack);
            VAR_20->attack_data[VAR_22] = 0.355768 + 0.487396 * FUNC_15(VAR_23) + 0.144232 * FUNC_15(2*VAR_23) + 0.012604 * FUNC_15(3*VAR_23);
        }
    }

    VAR_20->cqt_align = 1;
    VAR_20->cqt_calc = VAR_9;
    VAR_20->permute_coeffs = ((void*)0);
    VAR_20->draw_sono = VAR_14;
    if (VAR_20->format == VAR_3) {
        VAR_20->draw_bar = VAR_12;
        VAR_20->draw_axis = VAR_10;
        VAR_20->update_sono = VAR_15;
    } else {
        VAR_20->draw_bar = VAR_13;
        VAR_20->draw_axis = VAR_11;
        VAR_20->update_sono = VAR_16;
    }

    if (VAR_0)
        FUNC_17(VAR_20);

    if ((VAR_21 = FUNC_21(VAR_20)) < 0)
        return VAR_21;

    if (VAR_20->axis_h) {
        if (!VAR_20->axis) {
            if ((VAR_21 = FUNC_18(VAR_20)) < 0)
                return VAR_21;
        } else if (VAR_20->axisfile) {
            if (FUNC_19(VAR_20) < 0) {
                FUNC_9(VAR_18, VAR_2, "loading axis image failed, fallback to font rendering.\n");
                if (FUNC_20(VAR_20) < 0) {
                    FUNC_9(VAR_18, VAR_2, "loading axis font failed, disable text drawing.\n");
                    if ((VAR_21 = FUNC_18(VAR_20)) < 0)
                        return VAR_21;
                }
            }
        } else {
            if (FUNC_20(VAR_20) < 0) {
                FUNC_9(VAR_18, VAR_2, "loading axis font failed, disable text drawing.\n");
                if ((VAR_21 = FUNC_18(VAR_20)) < 0)
                    return VAR_21;
            }
        }
    }

    if (VAR_20->sono_h) {
        VAR_20->sono_frame = FUNC_3((VAR_17->format == VAR_4) ?
                        VAR_5 : VAR_17->format, VAR_20->width, VAR_20->sono_h);
        if (!VAR_20->sono_frame)
            return FUNC_0(VAR_6);
    }

    VAR_20->h_buf = FUNC_11(VAR_20->cqt_len, sizeof (*VAR_20->h_buf));
    VAR_20->rcp_h_buf = FUNC_11(VAR_20->width, sizeof(*VAR_20->rcp_h_buf));
    VAR_20->c_buf = FUNC_11(VAR_20->width, sizeof(*VAR_20->c_buf));
    if (!VAR_20->h_buf || !VAR_20->rcp_h_buf || !VAR_20->c_buf)
        return FUNC_0(VAR_6);

    VAR_20->sono_count = 0;
    VAR_20->next_pts = 0;
    VAR_20->sono_idx = 0;
    VAR_20->remaining_fill = VAR_20->remaining_fill_max;
    VAR_20->remaining_frac = 0;
    VAR_20->step_frac = FUNC_5(FUNC_10(VAR_19->sample_rate, VAR_20->count) , VAR_20->rate);
    VAR_20->step = (int)(VAR_20->step_frac.num / VAR_20->step_frac.den);
    VAR_20->step_frac.num %= VAR_20->step_frac.den;
    if (VAR_20->step_frac.num) {
        FUNC_9(VAR_18, VAR_1, "audio: %d Hz, step = %d + %d/%d.\n",
               VAR_19->sample_rate, VAR_20->step, VAR_20->step_frac.num, VAR_20->step_frac.den);
        FUNC_9(VAR_18, VAR_2, "fractional step.\n");
    } else {
        FUNC_9(VAR_18, VAR_1, "audio: %d Hz, step = %d.\n",
               VAR_19->sample_rate, VAR_20->step);
    }

    return 0;
}
