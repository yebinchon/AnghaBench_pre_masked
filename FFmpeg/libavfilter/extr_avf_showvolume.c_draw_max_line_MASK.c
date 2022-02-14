
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int b; int h; int persistant_max_rgba; TYPE_1__* out; scalar_t__ orientation; } ;
struct TYPE_4__ {int* linesize; int ** data; } ;
typedef TYPE_2__ ShowVolumeContext ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static inline void FUNC_1(ShowVolumeContext *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;
    if (VAR_0->orientation) {
        uint8_t *VAR_4 = VAR_0->out->data[0] + VAR_1 * VAR_0->out->linesize[0] + VAR_2 * (VAR_0->b + VAR_0->h) * 4;
        for (VAR_3 = 0; VAR_3 < VAR_0->h; VAR_3++) {
            FUNC_0(VAR_4 + VAR_3 * 4, VAR_0->persistant_max_rgba, sizeof(VAR_0->persistant_max_rgba));
        }
    } else {
        for (VAR_3 = 0; VAR_3 < VAR_0->h; VAR_3++) {
            uint8_t *VAR_5 = VAR_0->out->data[0] + (VAR_2 * VAR_0->h + VAR_2 * VAR_0->b + VAR_3) * VAR_0->out->linesize[0];
            FUNC_0(VAR_5 + VAR_1 * 4, VAR_0->persistant_max_rgba, sizeof(VAR_0->persistant_max_rgba));
        }
    }
}
