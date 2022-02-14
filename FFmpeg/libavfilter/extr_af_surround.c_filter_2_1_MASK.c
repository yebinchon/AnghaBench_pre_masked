
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {int buf_size; int (* upmix_2_1 ) (TYPE_3__*,float,float,float,float,float,float,float,float,int) ;int angle; TYPE_1__* input; } ;
struct TYPE_6__ {scalar_t__* extended_data; } ;
typedef TYPE_2__ AudioSurroundContext ;
typedef TYPE_3__ AVFilterContext ;


 float FUNC_0 (float,float) ;
 float VAR_0 ;
 float FUNC_1 (float,float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float,float) ;
 int FUNC_4 (float,float,float*,float*) ;
 int FUNC_5 (float*,float*,int ) ;
 int FUNC_6 (TYPE_3__*,float,float,float,float,float,float,float,float,int) ;

__attribute__((used)) static void FUNC_7(AVFilterContext *VAR_1)
{
    AudioSurroundContext *VAR_2 = VAR_1->priv;
    float *VAR_3, *VAR_4, *VAR_5;
    int VAR_6;

    VAR_3 = (float *)VAR_2->input->extended_data[0];
    VAR_4 = (float *)VAR_2->input->extended_data[1];
    VAR_5 = (float *)VAR_2->input->extended_data[2];

    for (VAR_6 = 0; VAR_6 < VAR_2->buf_size; VAR_6++) {
        float VAR_7 = VAR_3[2 * VAR_6], VAR_8 = VAR_4[2 * VAR_6];
        float VAR_9 = VAR_3[2 * VAR_6 + 1], VAR_10 = VAR_4[2 * VAR_6 + 1];
        float VAR_11 = VAR_5[2 * VAR_6], VAR_12 = VAR_5[2 * VAR_6 + 1];
        float VAR_13 = FUNC_1(VAR_9 + VAR_10, VAR_7 + VAR_8);
        float VAR_14 = FUNC_3(VAR_7, VAR_9);
        float VAR_15 = FUNC_3(VAR_8, VAR_10);
        float VAR_16 = FUNC_1(VAR_9, VAR_7);
        float VAR_17 = FUNC_1(VAR_10, VAR_8);
        float VAR_18 = FUNC_2(VAR_16 - VAR_17);
        float VAR_19 = VAR_14 + VAR_15;
        float VAR_20 = VAR_19 < 0.000001 ? FUNC_0(VAR_14, VAR_15) : (VAR_14 - VAR_15) / VAR_19;
        float VAR_21 = FUNC_3(VAR_14, VAR_15);
        float VAR_22, VAR_23;

        if (VAR_18 > VAR_0)
            VAR_18 = 2 * VAR_0 - VAR_18;

        FUNC_4(VAR_20, VAR_18, &VAR_22, &VAR_23);
        FUNC_5(&VAR_22, &VAR_23, VAR_2->angle);

        VAR_2->upmix_2_1(VAR_1, VAR_16, VAR_17, VAR_13, VAR_21, VAR_11, VAR_12, VAR_22, VAR_23, VAR_6);
    }
}
