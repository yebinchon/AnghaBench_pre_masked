
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int width; int height; int * current; int * processed; } ;
typedef TYPE_1__ Hnm4VideoContext ;
typedef TYPE_2__ AVCodecContext ;



__attribute__((used)) static void FUNC_0(AVCodecContext *VAR_0)
{
    Hnm4VideoContext *VAR_1 = VAR_0->priv_data;
    uint32_t VAR_2, VAR_3, VAR_4;
    int VAR_5 = VAR_1->width;

    for (VAR_3 = 0; VAR_3 < VAR_1->height; VAR_3++) {
        uint8_t *VAR_6 = VAR_1->processed + VAR_3 * VAR_5;
        const uint8_t *VAR_7 = VAR_1->current;
        VAR_4 = VAR_3 - (VAR_3 % 2);
        VAR_7 += VAR_4 * VAR_5 + (VAR_3 % 2);
        for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++) {
            VAR_6[VAR_2] = *VAR_7;
            VAR_7 += 2;
        }
    }
}
