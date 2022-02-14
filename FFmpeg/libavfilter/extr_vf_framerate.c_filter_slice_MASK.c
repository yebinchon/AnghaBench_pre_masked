
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {int src2_factor; int src1_factor; TYPE_3__* copy_src2; TYPE_3__* copy_src1; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int const* linesize; int ** data; } ;
struct TYPE_7__ {int* height; int blend_factor_max; int * line_size; int (* blend ) (int *,int const,int *,int const,int *,int const,int ,int const,int ,int ,int) ;TYPE_3__* work; } ;
typedef TYPE_2__ FrameRateContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int *,int const,int *,int const,int *,int const,int ,int const,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    FrameRateContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_4->work;
    AVFrame *VAR_7 = VAR_5->copy_src1;
    AVFrame *VAR_8 = VAR_5->copy_src2;
    uint16_t VAR_9 = VAR_5->src1_factor;
    uint16_t VAR_10 = VAR_5->src2_factor;
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < 4 && VAR_7->data[VAR_11] && VAR_8->data[VAR_11]; VAR_11++) {
        const int VAR_12 = (VAR_4->height[VAR_11] * VAR_2 ) / VAR_3;
        const int VAR_13 = (VAR_4->height[VAR_11] * (VAR_2+1)) / VAR_3;
        uint8_t *VAR_14 = VAR_7->data[VAR_11] + VAR_12 * VAR_7->linesize[VAR_11];
        uint8_t *VAR_15 = VAR_8->data[VAR_11] + VAR_12 * VAR_8->linesize[VAR_11];
        uint8_t *VAR_16 = VAR_6->data[VAR_11] + VAR_12 * VAR_6->linesize[VAR_11];

        VAR_4->blend(VAR_14, VAR_7->linesize[VAR_11], VAR_15, VAR_8->linesize[VAR_11],
                 VAR_16, VAR_6->linesize[VAR_11], VAR_4->line_size[VAR_11], VAR_13 - VAR_12,
                 VAR_9, VAR_10, VAR_4->blend_factor_max >> 1);
    }

    return 0;
}
