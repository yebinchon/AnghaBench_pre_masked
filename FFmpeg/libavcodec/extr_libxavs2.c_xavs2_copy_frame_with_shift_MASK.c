
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* i_stride; int* i_lines; int* i_width; int ** img_planes; } ;
struct TYPE_7__ {TYPE_1__ img; } ;
typedef TYPE_2__ xavs2_picture_t ;
typedef int const uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {int** data; int* linesize; } ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(xavs2_picture_t *VAR_0, const AVFrame *VAR_1, const int VAR_2)
{
    int VAR_3, VAR_4;
    for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
        int VAR_5 = VAR_0->img.i_stride[VAR_4];
        for (VAR_3 = 0; VAR_3 < VAR_0->img.i_lines[VAR_4]; VAR_3++) {
            uint16_t *VAR_6 = (uint16_t *)&VAR_0->img.img_planes[VAR_4][VAR_3 * VAR_5];
            int VAR_7;
            uint8_t *VAR_8 = VAR_1->data[VAR_4] + VAR_1->linesize[VAR_4] * VAR_3;
            FUNC_0(VAR_6, 0, VAR_5);
            for (VAR_7 = 0; VAR_7 < VAR_0->img.i_width[VAR_4]; VAR_7++) {
                VAR_6[VAR_7] = VAR_8[VAR_7] << VAR_2;
            }
        }
    }
}
