
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ch_count; scalar_t__* ch; } ;
struct TYPE_7__ {int filter_length; scalar_t__ index; int felem_size; scalar_t__ phase_count; } ;
typedef TYPE_1__ ResampleContext ;
typedef TYPE_2__ AudioData ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_4(ResampleContext *VAR_1, AudioData *VAR_2, const AudioData *VAR_3,
                                 int VAR_4, int *VAR_5, int *VAR_6)
{
    int VAR_7, VAR_8, VAR_9 = FUNC_1(VAR_4 + *VAR_6, VAR_1->filter_length + 1), VAR_10;

    if (VAR_1->index >= 0)
        return 0;

    if ((VAR_10 = FUNC_3(VAR_2, VAR_1->filter_length * 2 + 1)) < 0)
        return VAR_10;


    for (VAR_7 = *VAR_6; VAR_7 < VAR_9; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < VAR_3->ch_count; VAR_8++) {
            FUNC_2(VAR_2->ch[VAR_8] + ((VAR_1->filter_length + VAR_7) * VAR_1->felem_size),
                   VAR_3->ch[VAR_8] + ((VAR_7 - *VAR_6) * VAR_1->felem_size), VAR_1->felem_size);
        }
    }


    if (VAR_9 < VAR_1->filter_length + 1) {
        *VAR_6 = VAR_9;
        *VAR_5 = VAR_1->filter_length;
        return VAR_0;
    }


    for (VAR_7 = 1; VAR_7 <= VAR_1->filter_length; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < VAR_3->ch_count; VAR_8++) {
            FUNC_2(VAR_2->ch[VAR_8] + ((VAR_1->filter_length - VAR_7) * VAR_1->felem_size),
                   VAR_2->ch[VAR_8] + ((VAR_1->filter_length + VAR_7) * VAR_1->felem_size),
                   VAR_1->felem_size);
        }
    }

    VAR_10 = VAR_9 - *VAR_6;
    *VAR_5 = VAR_1->filter_length;
    while (VAR_1->index < 0) {
        --*VAR_5;
        VAR_1->index += VAR_1->phase_count;
    }
    *VAR_6 = FUNC_0(*VAR_6 + VAR_1->filter_length,
                    1 + VAR_1->filter_length * 2) - *VAR_5;

    return FUNC_0(VAR_10, 0);
}
