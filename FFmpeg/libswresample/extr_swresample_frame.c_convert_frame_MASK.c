
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int nb_samples; int ** extended_data; } ;
typedef int SwrContext ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int *,int **,int,int const**,int) ;

__attribute__((used)) static inline int FUNC_1(SwrContext *VAR_0,
                                AVFrame *VAR_1, const AVFrame *VAR_2)
{
    int VAR_3;
    uint8_t **VAR_4 = ((void*)0);
    const uint8_t **VAR_5 = ((void*)0);
    int VAR_6 = 0, VAR_7 = 0;

    if (VAR_1) {
        VAR_4 = VAR_1->extended_data;
        VAR_6 = VAR_1->nb_samples;
    }

    if (VAR_2) {
        VAR_5 = (const uint8_t **)VAR_2->extended_data;
        VAR_7 = VAR_2->nb_samples;
    }

    VAR_3 = FUNC_0(VAR_0, VAR_4, VAR_6, VAR_5, VAR_7);

    if (VAR_3 < 0) {
        if (VAR_1)
            VAR_1->nb_samples = 0;
        return VAR_3;
    }

    if (VAR_1)
        VAR_1->nb_samples = VAR_3;

    return 0;
}
