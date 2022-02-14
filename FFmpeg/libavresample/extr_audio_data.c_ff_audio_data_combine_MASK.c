
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sample_fmt; scalar_t__ channels; int nb_samples; int planes; int stride; scalar_t__* data; scalar_t__ read_only; } ;
typedef TYPE_1__ AudioData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;

int FUNC_5(AudioData *VAR_2, int VAR_3, AudioData *VAR_4,
                          int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10;


    if (VAR_2->sample_fmt != VAR_4->sample_fmt || VAR_2->channels != VAR_4->channels) {
        FUNC_1(VAR_4, VAR_0, "sample format mismatch\n");
        return FUNC_0(VAR_1);
    }


    if (VAR_3 < 0 || VAR_3 > VAR_2->nb_samples ||
        VAR_5 < 0 || VAR_5 > VAR_4->nb_samples) {
        FUNC_1(VAR_4, VAR_0, "offset out-of-bounds: src=%d dst=%d\n",
               VAR_5, VAR_3);
        return FUNC_0(VAR_1);
    }


    if (VAR_6 > VAR_4->nb_samples - VAR_5)
        VAR_6 = VAR_4->nb_samples - VAR_5;
    if (VAR_6 <= 0)
        return 0;


    if (VAR_2->read_only) {
        FUNC_1(VAR_2, VAR_0, "dst is read-only\n");
        return FUNC_0(VAR_1);
    }


    VAR_7 = FUNC_2(VAR_2, VAR_2->nb_samples + VAR_6);
    if (VAR_7 < 0) {
        FUNC_1(VAR_2, VAR_0, "error reallocating dst\n");
        return VAR_7;
    }

    VAR_9 = VAR_3 + VAR_6;
    VAR_10 = VAR_2->nb_samples - VAR_3;

    for (VAR_8 = 0; VAR_8 < VAR_4->planes; VAR_8++) {
        if (VAR_10 > 0) {
            FUNC_4(VAR_2->data[VAR_8] + VAR_9 * VAR_2->stride,
                    VAR_2->data[VAR_8] + VAR_3 * VAR_2->stride,
                    VAR_10 * VAR_2->stride);
        }
        FUNC_3(VAR_2->data[VAR_8] + VAR_3 * VAR_2->stride,
               VAR_4->data[VAR_8] + VAR_5 * VAR_4->stride,
               VAR_6 * VAR_4->stride);
    }
    VAR_2->nb_samples += VAR_6;

    return 0;
}
