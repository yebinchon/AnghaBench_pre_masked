
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AACEncContext {int quantize_band_cost_cache_generation; int quantize_band_cost_cache; } ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct AACEncContext *VAR_0)
{
    ++VAR_0->quantize_band_cost_cache_generation;
    if (VAR_0->quantize_band_cost_cache_generation == 0) {
        FUNC_0(VAR_0->quantize_band_cost_cache, 0, sizeof(VAR_0->quantize_band_cost_cache));
        VAR_0->quantize_band_cost_cache_generation = 1;
    }
}
