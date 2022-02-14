
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_3__ {int * extended_data; int * data; int nb_samples; int * linesize; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int *,int,int ,int,int) ;
 int FUNC_5 (int *,int,int ,int,int) ;

int FUNC_6(AVFrame *VAR_3, int VAR_4,
                             enum AVSampleFormat VAR_5, const uint8_t *VAR_6,
                             int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12 = 0;

    VAR_11 = FUNC_5(((void*)0), VAR_4,
                                             VAR_3->nb_samples, VAR_5,
                                             VAR_8);
    if (VAR_7 < VAR_11)
        return FUNC_0(VAR_1);

    VAR_10 = FUNC_3(VAR_5);
    if (VAR_10 && VAR_4 > VAR_0) {
        if (!(VAR_3->extended_data = FUNC_2(VAR_4,
                                                sizeof(*VAR_3->extended_data))))
            return FUNC_0(VAR_2);
    } else {
        VAR_3->extended_data = VAR_3->data;
    }

    if ((VAR_12 = FUNC_4(VAR_3->extended_data, &VAR_3->linesize[0],
                                      (uint8_t *)(intptr_t)VAR_6, VAR_4, VAR_3->nb_samples,
                                      VAR_5, VAR_8)) < 0) {
        if (VAR_3->extended_data != VAR_3->data)
            FUNC_1(&VAR_3->extended_data);
        return VAR_12;
    }
    if (VAR_3->extended_data != VAR_3->data) {
        for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
            VAR_3->data[VAR_9] = VAR_3->extended_data[VAR_9];
    }

    return VAR_12;
}
