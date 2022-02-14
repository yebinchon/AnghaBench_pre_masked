
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ file_size_blocks; scalar_t__* bands; scalar_t__ blocks_per_band; int block_bitmap; } ;
typedef TYPE_1__ shadow_map_t ;
typedef scalar_t__ boolean_t ;
typedef scalar_t__ band_number_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 size_t FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__) ;

boolean_t
FUNC_4(shadow_map_t * VAR_1, uint32_t VAR_2, uint32_t VAR_3,
  uint32_t * VAR_4, uint32_t * VAR_5)
{
    boolean_t VAR_6 = VAR_0;
    uint32_t VAR_7;

    if (VAR_2 >= VAR_1->file_size_blocks
 || (VAR_2 + VAR_3) > VAR_1->file_size_blocks) {
 FUNC_1("shadow_map_read: request (%d, %d) exceeds file size %d\n",
        VAR_2, VAR_3, VAR_1->file_size_blocks);
 *VAR_5 = 0;
    }
    VAR_7 = FUNC_0(VAR_1->block_bitmap, VAR_2, VAR_3,
     &VAR_6);
    if (VAR_6 == VAR_0) {
 *VAR_5 = VAR_7;
 *VAR_4 = VAR_2;
    }
    else {
 band_number_t VAR_8;
 uint32_t VAR_9;

 VAR_8 = VAR_1->bands[FUNC_2(VAR_1, VAR_2)];
 *VAR_4 = VAR_8 * VAR_1->blocks_per_band
     + (VAR_2 % VAR_1->blocks_per_band);
 VAR_9
     = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_0);
 *VAR_5 = VAR_9 - VAR_2;
 if (*VAR_5 > VAR_7) {
     *VAR_5 = VAR_7;
 }
    }
    return (VAR_6);
}
