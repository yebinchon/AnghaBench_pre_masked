
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct frame_type_desc {scalar_t__ fcb_type; } ;
struct TYPE_3__ {float silence_gain; int gain_pred_err; int frame_cntr; } ;
typedef TYPE_1__ WMAVoiceContext ;
typedef int GetBitContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int,int) ;
 float* VAR_2 ;
 float* VAR_3 ;

__attribute__((used)) static void FUNC_4(WMAVoiceContext *VAR_4, GetBitContext *VAR_5,
                                 int VAR_6, int VAR_7,
                                 const struct frame_type_desc *VAR_8,
                                 float *VAR_9)
{
    float VAR_10;
    int VAR_11, VAR_12;

    FUNC_0(VAR_7 <= VAR_1);


    if (VAR_8->fcb_type == VAR_0) {
        VAR_12 = FUNC_3(VAR_4->frame_cntr, VAR_6, VAR_7);
        VAR_10 = VAR_4->silence_gain;
    } else {
        VAR_12 = FUNC_1(VAR_5, 8);
        VAR_10 = VAR_2[FUNC_1(VAR_5, 6)];
    }


    FUNC_2(VAR_4->gain_pred_err, 0, sizeof(VAR_4->gain_pred_err));


    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
        VAR_9[VAR_11] = VAR_3[VAR_12 + VAR_11] * VAR_10;
}
