
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int transparent_index; } ;
typedef TYPE_1__ GIFContext ;
typedef TYPE_2__ AVCodecContext ;



__attribute__((used)) static int FUNC_0(AVCodecContext *VAR_0,
                                const uint8_t *VAR_1, const int VAR_2)
{
    GIFContext *VAR_3 = VAR_0->priv_data;
    int VAR_4 = VAR_3->transparent_index;

    if (VAR_4 < 0)
        return 0;

    for (int VAR_5 = 0; VAR_5 < VAR_0->height; VAR_5++) {
        for (int VAR_6 = 0; VAR_6 < VAR_0->width; VAR_6++) {
            if (VAR_1[VAR_6] == VAR_4) {
                return 1;
            }
        }
        VAR_1 += VAR_2;
    }

    return 0;
}
