
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int* linesize; scalar_t__** data; } ;
struct TYPE_6__ {size_t buf_idx; int h; int w; scalar_t__** buf; } ;
typedef TYPE_1__ LifeContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(AVFilterContext *VAR_1, AVFrame *VAR_2)
{
    LifeContext *VAR_3 = VAR_1->priv;
    uint8_t *VAR_4 = VAR_3->buf[VAR_3->buf_idx];
    int VAR_5, VAR_6, VAR_7;


    for (VAR_5 = 0; VAR_5 < VAR_3->h; VAR_5++) {
        uint8_t VAR_8 = 0;
        uint8_t *VAR_9 = VAR_2->data[0] + VAR_5 * VAR_2->linesize[0];
        for (VAR_7 = 0, VAR_6 = 0; VAR_6 < VAR_3->w; VAR_6++) {
            VAR_8 |= (VAR_4[VAR_5*VAR_3->w+VAR_6] == VAR_0)<<(7-VAR_7++);
            if (VAR_7==8 || VAR_6 == VAR_3->w-1) {
                VAR_7 = 0;
                *VAR_9++ = VAR_8;
                VAR_8 = 0;
            }
        }
    }
}
