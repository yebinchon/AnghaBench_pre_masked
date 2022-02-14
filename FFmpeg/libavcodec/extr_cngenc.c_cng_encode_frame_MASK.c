
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef double int16_t ;
struct TYPE_14__ {TYPE_1__* priv_data; } ;
struct TYPE_13__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_12__ {int* data; int size; } ;
struct TYPE_11__ {int order; double* samples32; int* ref_coef; int lpc; } ;
typedef TYPE_1__ CNGContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*,int,int) ;
 int FUNC_4 (int *,double*,int,int*) ;
 int FUNC_5 (double) ;
 int FUNC_6 (double) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_1, AVPacket *VAR_2,
                            const AVFrame *VAR_3, int *VAR_4)
{
    CNGContext *VAR_5 = VAR_1->priv_data;
    int VAR_6, VAR_7;
    double VAR_8 = 0;
    int VAR_9;
    int16_t *VAR_10 = (int16_t*) VAR_3->data[0];

    if ((VAR_6 = FUNC_3(VAR_1, VAR_2, 1 + VAR_5->order, 1 + VAR_5->order))) {
        FUNC_2(VAR_1, VAR_0, "Error getting output packet\n");
        return VAR_6;
    }

    for (VAR_7 = 0; VAR_7 < VAR_3->nb_samples; VAR_7++) {
        VAR_5->samples32[VAR_7] = VAR_10[VAR_7];
        VAR_8 += VAR_10[VAR_7] * VAR_10[VAR_7];
    }
    VAR_8 /= VAR_3->nb_samples;
    if (VAR_8 > 0) {
        double VAR_11 = 10 * FUNC_6(VAR_8 / 1081109975);
        VAR_9 = FUNC_1(-FUNC_5(VAR_11), 7);
    } else {
        VAR_9 = 127;
    }
    FUNC_4(&VAR_5->lpc, VAR_5->samples32, VAR_5->order, VAR_5->ref_coef);
    VAR_2->data[0] = VAR_9;
    for (VAR_7 = 0; VAR_7 < VAR_5->order; VAR_7++)
        VAR_2->data[1 + VAR_7] = VAR_5->ref_coef[VAR_7] * 127 + 127;

    *VAR_4 = 1;
    FUNC_0(VAR_2->size == 1 + VAR_5->order);

    return 0;
}
