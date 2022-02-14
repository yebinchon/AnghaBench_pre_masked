
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int width; int height; int** data; size_t* linesize; int format; } ;
typedef TYPE_1__ AVFrame ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__**) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static AVFrame *FUNC_3(AVFrame *VAR_0)
{
    int VAR_1, VAR_2;
    AVFrame *VAR_3 = FUNC_0();
    uint8_t *VAR_4, *VAR_5;
    if (!VAR_3)
        return ((void*)0);

    VAR_3->format = VAR_0->format;
    VAR_3->width = (VAR_0->width + 1) / 2;
    VAR_3->height = (VAR_0->height+ 1) / 2;

    if (FUNC_2(VAR_3, 32) < 0) {
        FUNC_1(&VAR_3);
        return ((void*)0);
    }
    VAR_4 = VAR_0 ->data[0];
    VAR_5 = VAR_3->data[0];

    for(VAR_2 = 0; VAR_2 < VAR_3->height; VAR_2++) {
        for(VAR_1 = 0; VAR_1 < VAR_3->width; VAR_1++) {
            VAR_5[VAR_1] = ( VAR_4[2*VAR_1+0]
                      + VAR_4[2*VAR_1+1]
                      + VAR_4[2*VAR_1+0 + VAR_0->linesize[0]]
                      + VAR_4[2*VAR_1+1 + VAR_0->linesize[0]]
                      + 2) >> 2;
        }
        VAR_4 += 2*VAR_0->linesize[0];
        VAR_5 += VAR_3->linesize[0];
    }
    return VAR_3;
}
