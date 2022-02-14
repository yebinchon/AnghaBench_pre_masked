
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int** data; int* linesize; } ;
struct TYPE_6__ {int** buf; size_t buf_idx; int h; int w; int mold; int* mold_color; int* death_color; int* life_color; } ;
typedef TYPE_1__ LifeContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int*,int const) ;
 void* FUNC_1 (int const) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(AVFilterContext *VAR_1, AVFrame *VAR_2)
{
    LifeContext *VAR_3 = VAR_1->priv;
    uint8_t *VAR_4 = VAR_3->buf[VAR_3->buf_idx];
    int VAR_5, VAR_6;


    for (VAR_5 = 0; VAR_5 < VAR_3->h; VAR_5++) {
        uint8_t *VAR_7 = VAR_2->data[0] + VAR_5 * VAR_2->linesize[0];
        for (VAR_6 = 0; VAR_6 < VAR_3->w; VAR_6++) {
            uint8_t VAR_8 = VAR_4[VAR_5*VAR_3->w + VAR_6];
            if (VAR_3->mold && VAR_8 != VAR_0) {
                const uint8_t *VAR_9 = VAR_3-> mold_color;
                const uint8_t *VAR_10 = VAR_3->death_color;
                int VAR_11 = FUNC_2((0xff - VAR_8) * VAR_3->mold, 0xff);
                *VAR_7++ = FUNC_1((VAR_10[0] << 8) + ((int)VAR_9[0] - (int)VAR_10[0]) * VAR_11);
                *VAR_7++ = FUNC_1((VAR_10[1] << 8) + ((int)VAR_9[1] - (int)VAR_10[1]) * VAR_11);
                *VAR_7++ = FUNC_1((VAR_10[2] << 8) + ((int)VAR_9[2] - (int)VAR_10[2]) * VAR_11);
            } else {
                const uint8_t *VAR_12 = VAR_8 == VAR_0 ? VAR_3->life_color : VAR_3->death_color;
                FUNC_0(VAR_7, VAR_12[0]<<16 | VAR_12[1]<<8 | VAR_12[2]);
                VAR_7 += 3;
            }
        }
    }
}
