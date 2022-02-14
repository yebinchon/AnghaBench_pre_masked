
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void** lin_lut; void** delin_lut; TYPE_2__* out_txchr; TYPE_1__* in_txchr; } ;
struct TYPE_6__ {double alpha; double beta; double gamma; double delta; } ;
struct TYPE_5__ {double alpha; double beta; double gamma; double delta; } ;
typedef TYPE_3__ ColorSpaceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 void** FUNC_2 (int) ;
 int FUNC_3 (double) ;
 double FUNC_4 (double,double) ;

__attribute__((used)) static int FUNC_5(ColorSpaceContext *VAR_1)
{
    int VAR_2;
    double VAR_3 = VAR_1->in_txchr->alpha, VAR_4 = VAR_1->in_txchr->beta;
    double VAR_5 = VAR_1->in_txchr->gamma, VAR_6 = VAR_1->in_txchr->delta;
    double VAR_7 = 1.0 / VAR_3, VAR_8 = 1.0 / VAR_5, VAR_9 = 1.0 / VAR_6;
    double VAR_10 = VAR_1->out_txchr->alpha, VAR_11 = VAR_1->out_txchr->beta;
    double VAR_12 = VAR_1->out_txchr->gamma, VAR_13 = VAR_1->out_txchr->delta;

    VAR_1->lin_lut = FUNC_2(sizeof(*VAR_1->lin_lut) * 32768 * 2);
    if (!VAR_1->lin_lut)
        return FUNC_0(VAR_0);
    VAR_1->delin_lut = &VAR_1->lin_lut[32768];
    for (VAR_2 = 0; VAR_2 < 32768; VAR_2++) {
        double VAR_14 = (VAR_2 - 2048.0) / 28672.0, VAR_15, VAR_16;


        if (VAR_14 <= -VAR_11) {
            VAR_15 = -VAR_10 * FUNC_4(-VAR_14, VAR_12) + (VAR_10 - 1.0);
        } else if (VAR_14 < VAR_11) {
            VAR_15 = VAR_13 * VAR_14;
        } else {
            VAR_15 = VAR_10 * FUNC_4(VAR_14, VAR_12) - (VAR_10 - 1.0);
        }
        VAR_1->delin_lut[VAR_2] = FUNC_1(FUNC_3(VAR_15 * 28672.0));


        if (VAR_14 <= -VAR_4 * VAR_6) {
            VAR_16 = -FUNC_4((1.0 - VAR_3 - VAR_14) * VAR_7, VAR_8);
        } else if (VAR_14 < VAR_4 * VAR_6) {
            VAR_16 = VAR_14 * VAR_9;
        } else {
            VAR_16 = FUNC_4((VAR_14 + VAR_3 - 1.0) * VAR_7, VAR_8);
        }
        VAR_1->lin_lut[VAR_2] = FUNC_1(FUNC_3(VAR_16 * 28672.0));
    }

    return 0;
}
