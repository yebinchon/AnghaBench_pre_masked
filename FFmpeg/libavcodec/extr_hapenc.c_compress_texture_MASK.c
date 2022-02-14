
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int* linesize; int ** data; } ;
struct TYPE_6__ {int tex_size; int (* tex_fun ) (int *,int,int *) ;} ;
typedef TYPE_1__ HapContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1, uint8_t *VAR_2, int VAR_3, const AVFrame *VAR_4)
{
    HapContext *VAR_5 = VAR_1->priv_data;
    int VAR_6, VAR_7;

    if (VAR_5->tex_size > VAR_3)
        return VAR_0;

    for (VAR_7 = 0; VAR_7 < VAR_1->height; VAR_7 += 4) {
        for (VAR_6 = 0; VAR_6 < VAR_1->width; VAR_6 += 4) {
            uint8_t *VAR_8 = VAR_4->data[0] + VAR_6 * 4 + VAR_7 * VAR_4->linesize[0];
            const int VAR_9 = VAR_5->tex_fun(VAR_2, VAR_4->linesize[0], VAR_8);
            VAR_2 += VAR_9;
        }
    }

    return 0;
}
