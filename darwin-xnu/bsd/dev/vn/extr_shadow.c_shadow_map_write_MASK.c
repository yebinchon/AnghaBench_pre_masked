
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ file_size_blocks; scalar_t__* bands; scalar_t__ blocks_per_band; scalar_t__ next_band; scalar_t__ shadow_size_bands; int block_bitmap; } ;
typedef TYPE_1__ shadow_map_t ;
typedef int boolean_t ;
typedef scalar_t__ band_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 size_t FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;

boolean_t
FUNC_4(shadow_map_t * VAR_2, uint32_t VAR_3,
   uint32_t VAR_4, uint32_t * VAR_5,
   uint32_t * VAR_6)
{
    uint32_t VAR_7;
    band_number_t VAR_8;
    boolean_t VAR_9 = VAR_0;

    if (VAR_3 >= VAR_2->file_size_blocks
 || (VAR_3 + VAR_4) > VAR_2->file_size_blocks) {
 FUNC_1("shadow_map_write: request (%d, %d) exceeds file size %d\n",
        VAR_3, VAR_4, VAR_2->file_size_blocks);
 *VAR_6 = 0;
    }

    VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_1);
    VAR_8 = VAR_2->bands[FUNC_2(VAR_2, VAR_3)];
    *VAR_5 = VAR_8 * VAR_2->blocks_per_band
 + (VAR_3 % VAR_2->blocks_per_band);
    *VAR_6 = VAR_7 - VAR_3;


    FUNC_0(VAR_2->block_bitmap, VAR_3, *VAR_6);

    if (VAR_2->next_band > VAR_2->shadow_size_bands) {
 VAR_2->shadow_size_bands = VAR_2->next_band;
 VAR_9 = VAR_1;
    }
    return (VAR_9);
}
