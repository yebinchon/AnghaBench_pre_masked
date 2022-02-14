
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* vsub; int* hsub; int* pixelstep; } ;
typedef TYPE_1__ FFDrawContext ;



__attribute__((used)) static uint8_t *FUNC_0(FFDrawContext *VAR_0, uint8_t *VAR_1[], int VAR_2[],
                           int VAR_3, int VAR_4, int VAR_5)
{
    return VAR_1[VAR_3] +
           (VAR_5 >> VAR_0->vsub[VAR_3]) * VAR_2[VAR_3] +
           (VAR_4 >> VAR_0->hsub[VAR_3]) * VAR_0->pixelstep[VAR_3];
}
