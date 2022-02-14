
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_5__ {int zoom; unsigned int h; unsigned int w; unsigned int* contrast; TYPE_1__* outpicref; } ;
struct TYPE_4__ {int* linesize; unsigned int** data; } ;
typedef TYPE_2__ AudioVectorScopeContext ;


 unsigned int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static void FUNC_1(AudioVectorScopeContext *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    const int VAR_3 = VAR_0->outpicref->linesize[0];
    uint8_t *VAR_4;

    if (VAR_0->zoom > 1) {
        if (VAR_2 >= VAR_0->h || VAR_1 >= VAR_0->w)
            return;
    } else {
        VAR_2 = FUNC_0(VAR_2, VAR_0->h - 1);
        VAR_1 = FUNC_0(VAR_1, VAR_0->w - 1);
    }

    VAR_4 = &VAR_0->outpicref->data[0][VAR_2 * VAR_3 + VAR_1 * 4];
    VAR_4[0] = FUNC_0(VAR_4[0] + VAR_0->contrast[0], 255);
    VAR_4[1] = FUNC_0(VAR_4[1] + VAR_0->contrast[1], 255);
    VAR_4[2] = FUNC_0(VAR_4[2] + VAR_0->contrast[2], 255);
    VAR_4[3] = FUNC_0(VAR_4[3] + VAR_0->contrast[3], 255);
}
