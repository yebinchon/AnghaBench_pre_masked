
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct AACEncContext {scalar_t__ quantize_band_cost_cache_generation; TYPE_1__** quantize_band_cost_cache; } ;
struct TYPE_2__ {scalar_t__ generation; int cb; int rtz; float rd; int bits; float energy; } ;
typedef TYPE_1__ AACQuantizeBandCostCacheEntry ;


 int FUNC_0 (int) ;
 float FUNC_1 (struct AACEncContext*,float const*,float const*,int,int,int,float const,float const,int*,float*,int) ;

__attribute__((used)) static inline float FUNC_2(struct AACEncContext *VAR_0, int VAR_1, int VAR_2, const float *VAR_3,
                                const float *VAR_4, int VAR_5, int VAR_6,
                                int VAR_7, const float VAR_8, const float VAR_9,
                                int *VAR_10, float *VAR_11, int VAR_12)
{
    AACQuantizeBandCostCacheEntry *VAR_13;
    FUNC_0(VAR_6 >= 0 && VAR_6 < 256);
    VAR_13 = &VAR_0->quantize_band_cost_cache[VAR_6][VAR_1*16+VAR_2];
    if (VAR_13->generation != VAR_0->quantize_band_cost_cache_generation || VAR_13->cb != VAR_7 || VAR_13->rtz != VAR_12) {
        VAR_13->rd = FUNC_1(VAR_0, VAR_3, VAR_4, VAR_5, VAR_6,
                                       VAR_7, VAR_8, VAR_9, &VAR_13->bits, &VAR_13->energy, VAR_12);
        VAR_13->cb = VAR_7;
        VAR_13->rtz = VAR_12;
        VAR_13->generation = VAR_0->quantize_band_cost_cache_generation;
    }
    if (VAR_10)
        *VAR_10 = VAR_13->bits;
    if (VAR_11)
        *VAR_11 = VAR_13->energy;
    return VAR_13->rd;
}
