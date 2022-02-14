
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int format; int width; int* linesize; int ** data; } ;
struct TYPE_6__ {scalar_t__ v; scalar_t__ u; scalar_t__ y; } ;
struct TYPE_7__ {TYPE_1__ yuv; } ;
typedef TYPE_2__ ColorFloat ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(AVFrame *VAR_1, const ColorFloat *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5 = VAR_1->format, VAR_6 = VAR_1->width;
    uint8_t *VAR_7 = VAR_1->data[0] + VAR_3 * VAR_1->linesize[0];
    uint8_t *VAR_8 = VAR_1->data[1] + VAR_3 * VAR_1->linesize[1];
    uint8_t *VAR_9 = VAR_1->data[2] + VAR_3 * VAR_1->linesize[2];

    for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4 += 2) {
        *VAR_7++ = FUNC_0(VAR_2[VAR_4].yuv.y + 16.0f);
        *VAR_8++ = FUNC_0(VAR_2[VAR_4].yuv.u + 128.0f);
        *VAR_9++ = FUNC_0(VAR_2[VAR_4].yuv.v + 128.0f);
        *VAR_7++ = FUNC_0(VAR_2[VAR_4+1].yuv.y + 16.0f);
        if (VAR_5 == VAR_0) {
            *VAR_8++ = FUNC_0(VAR_2[VAR_4+1].yuv.u + 128.0f);
            *VAR_9++ = FUNC_0(VAR_2[VAR_4+1].yuv.v + 128.0f);
        }
    }
}
