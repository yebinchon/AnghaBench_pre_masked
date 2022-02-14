
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int h; int w; } ;
struct TYPE_7__ {int bgopacity; TYPE_1__* out; } ;
struct TYPE_6__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_2__ ShowVolumeContext ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int*,int const) ;

__attribute__((used)) static void FUNC_1(ShowVolumeContext *VAR_0, AVFilterLink *VAR_1)
{
    int VAR_2, VAR_3;
    const uint32_t VAR_4 = (uint32_t)(VAR_0->bgopacity * 255) << 24;

    for (VAR_2 = 0; VAR_2 < VAR_1->h; VAR_2++) {
        uint32_t *VAR_5 = (uint32_t *)(VAR_0->out->data[0] + VAR_2 * VAR_0->out->linesize[0]);
        for (VAR_3 = 0; VAR_3 < VAR_1->w; VAR_3++)
            FUNC_0(VAR_5 + VAR_3, VAR_4);
    }
}
