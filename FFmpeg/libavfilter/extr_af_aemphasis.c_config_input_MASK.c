
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {double a0; double a1; double a2; double b1; double b2; } ;
struct TYPE_16__ {int use_brickw; int brickw; TYPE_5__ r1; } ;
struct TYPE_14__ {TYPE_2__* priv; } ;
struct TYPE_13__ {double sample_rate; int channels; TYPE_4__* dst; } ;
struct TYPE_12__ {int type; scalar_t__ mode; TYPE_6__* rc; } ;
struct TYPE_11__ {double a0; double a1; double a2; double b1; double b2; } ;
typedef int RIAACurve ;
typedef TYPE_1__ BiquadCoeffs ;
typedef TYPE_2__ AudioEmphasisContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 double FUNC_1 (double,int) ;
 int VAR_1 ;
 TYPE_6__* FUNC_2 (int,int) ;
 double FUNC_3 (TYPE_1__*,double,double) ;
 int FUNC_4 (TYPE_6__*,TYPE_6__*,int) ;
 double FUNC_5 (double,double) ;
 int FUNC_6 (TYPE_5__*,double,double,double,double) ;
 int FUNC_7 (int *,double,double,double,int) ;
 double FUNC_8 (double) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_2)
{
    double VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    double VAR_16, VAR_17, VAR_18, VAR_19 = VAR_2->sample_rate;
    AVFilterContext *VAR_20 = VAR_2->dst;
    AudioEmphasisContext *VAR_21 = VAR_20->priv;
    BiquadCoeffs VAR_22;
    int VAR_23;

    VAR_21->rc = FUNC_2(VAR_2->channels, sizeof(*VAR_21->rc));
    if (!VAR_21->rc)
        return FUNC_0(VAR_0);

    switch (VAR_21->type) {
    case 0:
        VAR_3 = 100.;
        VAR_4 = 500.;
        VAR_5 = 1590.;
        break;
    case 1:
        VAR_3 = 70.;
        VAR_4 = 500.;
        VAR_5 = 2500.;
        break;
    case 2:
        VAR_3 = 50.;
        VAR_4 = 353.;
        VAR_5 = 3180.;
        break;
    case 3:
    default:
        VAR_13 = 0.003180;
        VAR_14 = 0.000318;
        VAR_15 = 0.000075;
        VAR_3 = 1. / (2. * VAR_1 * VAR_13);
        VAR_4 = 1. / (2. * VAR_1 * VAR_14);
        VAR_5 = 1. / (2. * VAR_1 * VAR_15);
        break;
    case 4:
        VAR_13 = 0.000050;
        VAR_14 = 0.000015;
        VAR_15 = 0.0000001;
        VAR_3 = 1. / (2. * VAR_1 * VAR_13);
        VAR_4 = 1. / (2. * VAR_1 * VAR_14);
        VAR_5 = 1. / (2. * VAR_1 * VAR_15);
        break;
    case 5:
        VAR_13 = 0.000050;
        VAR_14 = VAR_13 / 20;
        VAR_15 = VAR_13 / 50;
        VAR_3 = 1. / (2. * VAR_1 * VAR_13);
        VAR_4 = 1. / (2. * VAR_1 * VAR_14);
        VAR_5 = 1. / (2. * VAR_1 * VAR_15);
        break;
    case 6:
        VAR_13 = 0.000075;
        VAR_14 = VAR_13 / 20;
        VAR_15 = VAR_13 / 50;
        VAR_3 = 1. / (2. * VAR_1 * VAR_13);
        VAR_4 = 1. / (2. * VAR_1 * VAR_14);
        VAR_5 = 1. / (2. * VAR_1 * VAR_15);
        break;
    }

    VAR_3 *= 2 * VAR_1;
    VAR_4 *= 2 * VAR_1;
    VAR_5 *= 2 * VAR_1;

    VAR_7 = 1. / VAR_19;


    if (VAR_21->type == 7 || VAR_21->type == 8) {
        double VAR_24 = (VAR_21->type == 7 ? 0.000050 : 0.000075);
        double VAR_25 = 1.0 / (2 * VAR_1 * VAR_24);
        double VAR_26 = VAR_19 * 0.5;
        double VAR_27 = FUNC_8(1.0 + VAR_26 * VAR_26 / (VAR_25 * VAR_25));
        double VAR_28 = FUNC_8((VAR_27 - 1.0) * VAR_25 * VAR_25);
        double VAR_29 = 1.0;

        if (VAR_21->type == 8)
            VAR_29 = FUNC_5((VAR_19 / 3269.0) + 19.5, -0.25);
        if (VAR_21->type == 7)
            VAR_29 = FUNC_5((VAR_19 / 4750.0) + 19.5, -0.25);
        if (VAR_21->mode == 0)
            FUNC_6(&VAR_21->rc[0].r1, VAR_28, VAR_29, 1. / VAR_27, VAR_19);
        else
            FUNC_6(&VAR_21->rc[0].r1, VAR_28, VAR_29, VAR_27, VAR_19);
        VAR_21->rc[0].use_brickw = 0;
    } else {
        VAR_21->rc[0].use_brickw = 1;
        if (VAR_21->mode == 0) {
            VAR_6 = 1. / (4.+2.*VAR_3*VAR_7+2.*VAR_5*VAR_7+VAR_3*VAR_5*VAR_7*VAR_7);
            VAR_8 = (2.*VAR_7+VAR_4*VAR_7*VAR_7)*VAR_6;
            VAR_9 = (2.*VAR_4*VAR_7*VAR_7)*VAR_6;
            VAR_10 = (-2.*VAR_7+VAR_4*VAR_7*VAR_7)*VAR_6;
            VAR_11 = (-8.+2.*VAR_3*VAR_5*VAR_7*VAR_7)*VAR_6;
            VAR_12 = (4.-2.*VAR_3*VAR_7-2.*VAR_5*VAR_7+VAR_3*VAR_5*VAR_7*VAR_7)*VAR_6;
        } else {
            VAR_6 = 1. / (2.*VAR_7+VAR_4*VAR_7*VAR_7);
            VAR_8 = (4.+2.*VAR_3*VAR_7+2.*VAR_5*VAR_7+VAR_3*VAR_5*VAR_7*VAR_7)*VAR_6;
            VAR_9 = (-8.+2.*VAR_3*VAR_5*VAR_7*VAR_7)*VAR_6;
            VAR_10 = (4.-2.*VAR_3*VAR_7-2.*VAR_5*VAR_7+VAR_3*VAR_5*VAR_7*VAR_7)*VAR_6;
            VAR_11 = (2.*VAR_4*VAR_7*VAR_7)*VAR_6;
            VAR_12 = (-2.*VAR_7+VAR_4*VAR_7*VAR_7)*VAR_6;
        }

        VAR_22.a0 = VAR_8;
        VAR_22.a1 = VAR_9;
        VAR_22.a2 = VAR_10;
        VAR_22.b1 = VAR_11;
        VAR_22.b2 = VAR_12;




        VAR_17 = FUNC_3(&VAR_22, 1000.0, VAR_19);

        VAR_18 = 1.0 / VAR_17;
        VAR_21->rc[0].r1.a0 = VAR_22.a0 * VAR_18;
        VAR_21->rc[0].r1.a1 = VAR_22.a1 * VAR_18;
        VAR_21->rc[0].r1.a2 = VAR_22.a2 * VAR_18;
        VAR_21->rc[0].r1.b1 = VAR_22.b1;
        VAR_21->rc[0].r1.b2 = VAR_22.b2;
    }

    VAR_16 = FUNC_1(0.45 * VAR_19, 21000.);
    FUNC_7(&VAR_21->rc[0].brickw, VAR_16, 0.707, VAR_19, 1.);

    for (VAR_23 = 1; VAR_23 < VAR_2->channels; VAR_23++) {
        FUNC_4(&VAR_21->rc[VAR_23], &VAR_21->rc[0], sizeof(RIAACurve));
    }

    return 0;
}
