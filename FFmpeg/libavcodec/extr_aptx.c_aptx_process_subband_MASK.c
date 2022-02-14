
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_12__ {int prediction_order; } ;
struct TYPE_11__ {int reconstructed_difference; } ;
struct TYPE_10__ {int* prev_sign; int* s_weight; int predicted_difference; } ;
typedef TYPE_1__ Prediction ;
typedef TYPE_2__ InvertQuantize ;
typedef TYPE_3__ ConstTables ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int,int,TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(InvertQuantize *VAR_0,
                                 Prediction *VAR_1,
                                 int32_t VAR_2, int32_t VAR_3,
                                 ConstTables *VAR_4)
{
    int32_t VAR_5, VAR_6[2], VAR_7[2], VAR_8, VAR_9;

    FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4);

    VAR_5 = FUNC_0(VAR_0->reconstructed_difference,
                      -VAR_1->predicted_difference);
    VAR_6[0] = VAR_5 * VAR_1->prev_sign[0];
    VAR_6[1] = VAR_5 * VAR_1->prev_sign[1];
    VAR_1->prev_sign[0] = VAR_1->prev_sign[1];
    VAR_1->prev_sign[1] = VAR_5 | 1;

    VAR_9 = 0x100000;
    VAR_8 = FUNC_4(-VAR_6[1] * VAR_1->s_weight[1], 1);
    VAR_8 = (FUNC_3(VAR_8, -VAR_9, VAR_9) & ~0xF) * 16;

    VAR_9 = 0x300000;
    VAR_7[0] = 254 * VAR_1->s_weight[0] + 0x800000*VAR_6[0] + VAR_8;
    VAR_1->s_weight[0] = FUNC_3(FUNC_4(VAR_7[0], 8), -VAR_9, VAR_9);

    VAR_9 = 0x3C0000 - VAR_1->s_weight[0];
    VAR_7[1] = 255 * VAR_1->s_weight[1] + 0xC00000*VAR_6[1];
    VAR_1->s_weight[1] = FUNC_3(FUNC_4(VAR_7[1], 8), -VAR_9, VAR_9);

    FUNC_2(VAR_1,
                              VAR_0->reconstructed_difference,
                              VAR_4->prediction_order);
}
