
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int width; int* linesize; int ** data; } ;
struct TYPE_6__ {int b; int g; int r; } ;
struct TYPE_7__ {TYPE_1__ rgb; } ;
typedef TYPE_2__ ColorFloat ;
typedef TYPE_3__ AVFrame ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(AVFrame *VAR_0, const ColorFloat *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4 = VAR_0->width;
    uint8_t *VAR_5 = VAR_0->data[0] + VAR_2 * VAR_0->linesize[0];

    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
        *VAR_5++ = FUNC_0(VAR_1[VAR_3].rgb.r);
        *VAR_5++ = FUNC_0(VAR_1[VAR_3].rgb.g);
        *VAR_5++ = FUNC_0(VAR_1[VAR_3].rgb.b);
    }
}
