
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int height; int* linesize; int width; int ** data; } ;
struct TYPE_7__ {int* rgba_map; scalar_t__ is_packed_rgb; } ;
typedef TYPE_1__ AlphaMergeContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 size_t VAR_0 ;
 int FUNC_0 (int const,int const) ;
 size_t VAR_1 ;
 int FUNC_1 (int *,int const,int *,int const,int ,int) ;

__attribute__((used)) static void FUNC_2(AVFilterContext *VAR_2,
                       AVFrame *VAR_3,
                       AVFrame *VAR_4)
{
    AlphaMergeContext *VAR_5 = VAR_2->priv;
    int VAR_6 = VAR_3->height;

    if (VAR_5->is_packed_rgb) {
        int VAR_7, VAR_8;
        uint8_t *VAR_9, *VAR_10;
        for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
            VAR_9 = VAR_4->data[0] + VAR_8 * VAR_4->linesize[0];
            VAR_10 = VAR_3->data[0] + VAR_8 * VAR_3->linesize[0] + VAR_5->rgba_map[VAR_0];
            for (VAR_7 = 0; VAR_7 < VAR_3->width; VAR_7++) {
                *VAR_10 = *VAR_9;
                VAR_9 += 1;
                VAR_10 += 4;
            }
        }
    } else {
        const int VAR_11 = VAR_3->linesize[VAR_0];
        const int VAR_12 = VAR_4->linesize[VAR_1];
        FUNC_1(VAR_3->data[VAR_0], VAR_11,
                            VAR_4->data[VAR_1], VAR_12,
                            FUNC_0(VAR_11, VAR_12), VAR_4->height);
    }
}
