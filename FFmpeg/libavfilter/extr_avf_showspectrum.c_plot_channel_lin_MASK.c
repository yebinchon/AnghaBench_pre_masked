
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {scalar_t__ orientation; int channel_height; int channel_width; scalar_t__ mode; float** color_buffer; } ;
typedef TYPE_1__ ShowSpectrumContext ;
typedef TYPE_2__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int const,float*,float*,float*) ;
 float FUNC_1 (TYPE_2__*,int const,int) ;
 int FUNC_2 (TYPE_1__*,float,float,float,float,float*) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_2, void *VAR_3, int VAR_4, int VAR_5)
{
    ShowSpectrumContext *VAR_6 = VAR_2->priv;
    const int VAR_7 = VAR_6->orientation == VAR_1 ? VAR_6->channel_height : VAR_6->channel_width;
    const int VAR_8 = VAR_4;
    float VAR_9, VAR_10, VAR_11;
    int VAR_12;


    FUNC_0(VAR_6, VAR_8, &VAR_9, &VAR_10, &VAR_11);


    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
        int VAR_13 = (VAR_6->mode == VAR_0) ? VAR_12 : VAR_8 * VAR_7 + VAR_12;
        float *VAR_14 = &VAR_6->color_buffer[VAR_8][3 * VAR_13];
        float VAR_15 = FUNC_1(VAR_2, VAR_8, VAR_12);

        FUNC_2(VAR_6, VAR_9, VAR_10, VAR_11, VAR_15, VAR_14);
    }

    return 0;
}
