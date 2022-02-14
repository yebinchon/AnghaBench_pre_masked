
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_7__ {int width; int height; int vmafdsp; int * filter; void* temp_data; void** blur_data; scalar_t__ stride; } ;
typedef TYPE_2__ VMAFMotionData ;
struct TYPE_8__ {TYPE_1__* comp; } ;
struct TYPE_6__ {int depth; } ;
typedef TYPE_3__ AVPixFmtDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 int* VAR_2 ;
 void* FUNC_2 (size_t) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(VMAFMotionData *VAR_3,
                       int VAR_4, int VAR_5, enum AVPixelFormat VAR_6)
{
    size_t VAR_7;
    int VAR_8;
    const AVPixFmtDescriptor *VAR_9 = FUNC_3(VAR_6);

    VAR_3->width = VAR_4;
    VAR_3->height = VAR_5;
    VAR_3->stride = FUNC_1(VAR_4 * sizeof(uint16_t), 32);

    VAR_7 = (size_t) VAR_3->stride * VAR_5;
    if (!(VAR_3->blur_data[0] = FUNC_2(VAR_7)) ||
        !(VAR_3->blur_data[1] = FUNC_2(VAR_7)) ||
        !(VAR_3->temp_data = FUNC_2(VAR_7))) {
        return FUNC_0(VAR_1);
    }

    for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {
        VAR_3->filter[VAR_8] = FUNC_4(VAR_2[VAR_8] * (1 << VAR_0));
    }

    FUNC_5(&VAR_3->vmafdsp, VAR_9->comp[0].depth);

    return 0;
}
