
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_6__ {TYPE_1__* sps; } ;
struct TYPE_7__ {scalar_t__* sao_pixel_buffer_v; scalar_t__* sao_pixel_buffer_h; TYPE_2__ ps; } ;
struct TYPE_5__ {int pixel_shift; int width; int* hshift; int height; int* vshift; } ;
typedef TYPE_3__ HEVCContext ;


 int FUNC_0 (scalar_t__,int const*,int,int,int,int) ;
 int FUNC_1 (scalar_t__,int const*,int) ;

__attribute__((used)) static void FUNC_2(HEVCContext *VAR_0, const uint8_t *VAR_1,
                           ptrdiff_t VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6,
                           int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10 = VAR_0->ps.sps->pixel_shift;
    int VAR_11 = VAR_0->ps.sps->width >> VAR_0->ps.sps->hshift[VAR_7];
    int VAR_12 = VAR_0->ps.sps->height >> VAR_0->ps.sps->vshift[VAR_7];


    FUNC_1(VAR_0->sao_pixel_buffer_h[VAR_7] + (((2 * VAR_9) * VAR_11 + VAR_3) << VAR_10),
        VAR_1, VAR_5 << VAR_10);
    FUNC_1(VAR_0->sao_pixel_buffer_h[VAR_7] + (((2 * VAR_9 + 1) * VAR_11 + VAR_3) << VAR_10),
        VAR_1 + VAR_2 * (VAR_6 - 1), VAR_5 << VAR_10);


    FUNC_0(VAR_0->sao_pixel_buffer_v[VAR_7] + (((2 * VAR_8) * VAR_12 + VAR_4) << VAR_10), VAR_1, VAR_10, VAR_6, 1 << VAR_10, VAR_2);

    FUNC_0(VAR_0->sao_pixel_buffer_v[VAR_7] + (((2 * VAR_8 + 1) * VAR_12 + VAR_4) << VAR_10), VAR_1 + ((VAR_5 - 1) << VAR_10), VAR_10, VAR_6, 1 << VAR_10, VAR_2);
}
