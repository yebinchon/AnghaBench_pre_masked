
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ compress_factor; int channels; scalar_t__ channels_coupled; scalar_t__ dc_correction; } ;
typedef TYPE_1__ DynamicAudioNormalizerContext ;
typedef int AVFrame ;


 scalar_t__ VAR_0 ;
 double const FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int,double const) ;

__attribute__((used)) static void FUNC_4(DynamicAudioNormalizerContext *VAR_1, AVFrame *VAR_2)
{
    if (VAR_1->dc_correction) {
        FUNC_2(VAR_1, VAR_2);
    }

    if (VAR_1->compress_factor > VAR_0) {
        FUNC_1(VAR_1, VAR_2);
    }

    if (VAR_1->channels_coupled) {
        const double VAR_3 = FUNC_0(VAR_1, VAR_2, -1);
        int VAR_4;

        for (VAR_4 = 0; VAR_4 < VAR_1->channels; VAR_4++)
            FUNC_3(VAR_1, VAR_4, VAR_3);
    } else {
        int VAR_5;

        for (VAR_5 = 0; VAR_5 < VAR_1->channels; VAR_5++)
            FUNC_3(VAR_1, VAR_5, FUNC_0(VAR_1, VAR_2, VAR_5));
    }
}
