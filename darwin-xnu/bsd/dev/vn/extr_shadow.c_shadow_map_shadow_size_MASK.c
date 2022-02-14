
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int shadow_size_bands; int blocks_per_band; } ;
typedef TYPE_1__ shadow_map_t ;



uint32_t
FUNC_0(shadow_map_t * VAR_0)
{
    return (VAR_0->shadow_size_bands * VAR_0->blocks_per_band);
}
