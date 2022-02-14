
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_8__ {TYPE_2__* invert_quantize; int * dither; int * quantize; TYPE_1__* prediction; int qmf; } ;
struct TYPE_7__ {int quantization_factor; } ;
struct TYPE_6__ {scalar_t__ predicted_sample; } ;
typedef TYPE_3__ Channel ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int ** VAR_1 ;

__attribute__((used)) static void FUNC_4(Channel *VAR_2, int32_t VAR_3[4], int VAR_4)
{
    int32_t VAR_5[4];
    int VAR_6;
    FUNC_1(&VAR_2->qmf, VAR_3, VAR_5);
    FUNC_0(VAR_2);
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        int32_t VAR_7 = FUNC_3(VAR_5[VAR_6] - VAR_2->prediction[VAR_6].predicted_sample, 23);
        FUNC_2(&VAR_2->quantize[VAR_6], VAR_7,
                                 VAR_2->dither[VAR_6],
                                 VAR_2->invert_quantize[VAR_6].quantization_factor,
                                 &VAR_1[VAR_4][VAR_6]);
    }
}
