
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_10__ {TYPE_3__* sps; TYPE_1__* pps; } ;
struct TYPE_11__ {TYPE_4__ ps; scalar_t__* is_pcm; } ;
struct TYPE_8__ {scalar_t__ loop_filter_disable_flag; } ;
struct TYPE_9__ {int log2_min_pu_size; int* hshift; int* vshift; int pixel_shift; int min_pu_width; scalar_t__ pcm_enabled_flag; TYPE_2__ pcm; } ;
struct TYPE_7__ {scalar_t__ transquant_bypass_enable_flag; } ;
typedef TYPE_5__ HEVCContext ;


 int FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_1(HEVCContext *VAR_0,
                               uint8_t *VAR_1, const uint8_t *VAR_2,
                               ptrdiff_t VAR_3, ptrdiff_t VAR_4,
                               int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    if ( VAR_0->ps.pps->transquant_bypass_enable_flag ||
            (VAR_0->ps.sps->pcm.loop_filter_disable_flag && VAR_0->ps.sps->pcm_enabled_flag)) {
        int VAR_10, VAR_11;
        int VAR_12 = 1 << VAR_0->ps.sps->log2_min_pu_size;
        int VAR_13 = VAR_0->ps.sps->hshift[VAR_9];
        int VAR_14 = VAR_0->ps.sps->vshift[VAR_9];
        int VAR_15 = ((VAR_5 ) >> VAR_0->ps.sps->log2_min_pu_size);
        int VAR_16 = ((VAR_6 ) >> VAR_0->ps.sps->log2_min_pu_size);
        int VAR_17 = ((VAR_5 + VAR_7 ) >> VAR_0->ps.sps->log2_min_pu_size);
        int VAR_18 = ((VAR_6 + VAR_8) >> VAR_0->ps.sps->log2_min_pu_size);
        int VAR_19 = (VAR_12 >> VAR_13) << VAR_0->ps.sps->pixel_shift;
        for (VAR_11 = VAR_16; VAR_11 < VAR_18; VAR_11++) {
            for (VAR_10 = VAR_15; VAR_10 < VAR_17; VAR_10++) {
                if (VAR_0->is_pcm[VAR_11 * VAR_0->ps.sps->min_pu_width + VAR_10]) {
                    int VAR_20;
                    uint8_t *VAR_21 = VAR_1 + (((VAR_11 << VAR_0->ps.sps->log2_min_pu_size) - VAR_6) >> VAR_14) * VAR_3 + ((((VAR_10 << VAR_0->ps.sps->log2_min_pu_size) - VAR_5) >> VAR_13) << VAR_0->ps.sps->pixel_shift);
                    const uint8_t *VAR_22 = VAR_2 + (((VAR_11 << VAR_0->ps.sps->log2_min_pu_size) - VAR_6) >> VAR_14) * VAR_4 + ((((VAR_10 << VAR_0->ps.sps->log2_min_pu_size) - VAR_5) >> VAR_13) << VAR_0->ps.sps->pixel_shift);
                    for (VAR_20 = 0; VAR_20 < (VAR_12 >> VAR_14); VAR_20++) {
                        FUNC_0(VAR_21, VAR_22, VAR_19);
                        VAR_21 += VAR_3;
                        VAR_22 += VAR_4;
                    }
                }
            }
        }
    }
}
