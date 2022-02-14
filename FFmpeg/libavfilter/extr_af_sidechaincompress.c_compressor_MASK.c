
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int channels; } ;
struct TYPE_6__ {double makeup; double mix; int link; double lin_slope; double attack_coeff; double release_coeff; double adj_knee_stop; double lin_knee_stop; double adj_knee_start; double lin_knee_start; scalar_t__ mode; scalar_t__ detection; int compressed_knee_stop; int compressed_knee_start; int knee_stop; int knee_start; int knee; int thres; int ratio; } ;
typedef TYPE_1__ SidechainCompressContext ;
typedef TYPE_2__ AVFilterLink ;


 double FUNC_0 (double,double) ;
 double FUNC_1 (double const) ;
 double FUNC_2 (double,int ,int ,int ,int ,int ,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(SidechainCompressContext *VAR_0,
                       const double *VAR_1, double *VAR_2, const double *VAR_3, int VAR_4,
                       double VAR_5, double VAR_6,
                       AVFilterLink *VAR_7, AVFilterLink *VAR_8)
{
    const double VAR_9 = VAR_0->makeup;
    const double VAR_10 = VAR_0->mix;
    int VAR_11, VAR_12;

    for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
        double VAR_13, VAR_14 = 1.0;
        double VAR_15;
        int VAR_16;

        VAR_13 = FUNC_1(VAR_3[0] * VAR_6);

        if (VAR_0->link == 1) {
            for (VAR_12 = 1; VAR_12 < VAR_8->channels; VAR_12++)
                VAR_13 = FUNC_0(FUNC_1(VAR_3[VAR_12] * VAR_6), VAR_13);
        } else {
            for (VAR_12 = 1; VAR_12 < VAR_8->channels; VAR_12++)
                VAR_13 += FUNC_1(VAR_3[VAR_12] * VAR_6);

            VAR_13 /= VAR_8->channels;
        }

        if (VAR_0->detection)
            VAR_13 *= VAR_13;

        VAR_0->lin_slope += (VAR_13 - VAR_0->lin_slope) * (VAR_13 > VAR_0->lin_slope ? VAR_0->attack_coeff : VAR_0->release_coeff);

        if (VAR_0->mode) {
            VAR_15 = (VAR_0->detection ? VAR_0->adj_knee_stop : VAR_0->lin_knee_stop);
            VAR_16 = VAR_0->lin_slope < VAR_15;
        } else {
            VAR_15 = (VAR_0->detection ? VAR_0->adj_knee_start : VAR_0->lin_knee_start);
            VAR_16 = VAR_0->lin_slope > VAR_15;
        }

        if (VAR_0->lin_slope > 0.0 && VAR_16)
            VAR_14 = FUNC_2(VAR_0->lin_slope, VAR_0->ratio, VAR_0->thres, VAR_0->knee,
                               VAR_0->knee_start, VAR_0->knee_stop,
                               VAR_0->compressed_knee_start,
                               VAR_0->compressed_knee_stop,
                               VAR_0->detection, VAR_0->mode);

        for (VAR_12 = 0; VAR_12 < VAR_7->channels; VAR_12++)
            VAR_2[VAR_12] = VAR_1[VAR_12] * VAR_5 * (VAR_14 * VAR_9 * VAR_10 + (1. - VAR_10));

        VAR_1 += VAR_7->channels;
        VAR_2 += VAR_7->channels;
        VAR_3 += VAR_8->channels;
    }
}
