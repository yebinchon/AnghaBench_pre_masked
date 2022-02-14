
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int blocks_per_band; } ;
typedef TYPE_1__ shadow_map_t ;
typedef int band_number_t ;



__attribute__((used)) static __inline__ band_number_t
FUNC_0(shadow_map_t * VAR_0, uint32_t VAR_1)
{
    return (VAR_1 / VAR_0->blocks_per_band);
}
