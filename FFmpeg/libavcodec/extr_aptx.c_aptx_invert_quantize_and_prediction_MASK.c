
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * dither; TYPE_1__* quantize; int * prediction; int * invert_quantize; } ;
struct TYPE_4__ {int quantized_sample; } ;
typedef TYPE_2__ Channel ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ,int *) ;
 int ** VAR_1 ;

__attribute__((used)) static void FUNC_1(Channel *VAR_2, int VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        FUNC_0(&VAR_2->invert_quantize[VAR_4],
                             &VAR_2->prediction[VAR_4],
                             VAR_2->quantize[VAR_4].quantized_sample,
                             VAR_2->dither[VAR_4],
                             &VAR_1[VAR_3][VAR_4]);
}
