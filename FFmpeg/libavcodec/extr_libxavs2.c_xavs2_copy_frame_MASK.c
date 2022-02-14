
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* i_lines; int* i_stride; int* i_width; int in_sample_size; scalar_t__* img_planes; } ;
struct TYPE_7__ {TYPE_1__ img; } ;
typedef TYPE_2__ xavs2_picture_t ;
struct TYPE_8__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(xavs2_picture_t *VAR_0, const AVFrame *VAR_1)
{
    int VAR_2, VAR_3;
    for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
        for (VAR_2 = 0; VAR_2 < VAR_0->img.i_lines[VAR_3]; VAR_2++) {
            FUNC_0( VAR_0->img.img_planes[VAR_3] + VAR_0->img.i_stride[VAR_3] * VAR_2,
                    VAR_1->data[VAR_3]+VAR_1->linesize[VAR_3] * VAR_2,
                    VAR_0->img.i_width[VAR_3] * VAR_0->img.in_sample_size);
        }
    }
}
