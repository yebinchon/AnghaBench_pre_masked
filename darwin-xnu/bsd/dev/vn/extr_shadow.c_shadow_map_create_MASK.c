
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int blocks_per_band; int file_size_blocks; int zeroth_band; int block_size; void* shadow_size_bands; scalar_t__ next_band; void* bands; void* block_bitmap; } ;
typedef TYPE_1__ shadow_map_t ;
typedef int off_t ;
typedef void band_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (void*,int) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;

shadow_map_t *
FUNC_6(off_t VAR_2, off_t VAR_3,
    uint32_t VAR_4, uint32_t VAR_5)
{
    void * VAR_6 = ((void*)0);
    uint32_t VAR_7;
    band_number_t * VAR_8 = ((void*)0);
    shadow_map_t * VAR_9;
    uint32_t VAR_10 = 0;

    if (VAR_4 == 0) {
 VAR_4 = VAR_1;
    }

    VAR_10 = FUNC_2(VAR_2, VAR_4);
    if (VAR_10 > (VAR_0 + 1)) {
 FUNC_5("file is too big: %d > %d\n",
        VAR_10, VAR_0);
 goto failure;
    }


    VAR_7 = FUNC_0(VAR_2, VAR_5);
    VAR_6 = FUNC_4(VAR_7);
    if (VAR_6 == ((void*)0)) {
 FUNC_5("failed to allocate bitmap\n");
 goto failure;
    }
    FUNC_1(VAR_6, VAR_7);


    VAR_8 = (band_number_t *)FUNC_4(VAR_10 * sizeof(band_number_t));
    if (VAR_8 == ((void*)0)) {
 FUNC_5("failed to allocate bands\n");
 goto failure;
    }
    FUNC_1(VAR_8, VAR_10 * sizeof(band_number_t));

    VAR_9 = FUNC_4(sizeof(*VAR_9));
    if (VAR_9 == ((void*)0)) {
 FUNC_5("failed to allocate map\n");
 goto failure;
    }
    VAR_9->blocks_per_band = VAR_4 / VAR_5;
    VAR_9->block_bitmap = VAR_6;
    VAR_9->bands = VAR_8;
    VAR_9->file_size_blocks = VAR_10 * VAR_9->blocks_per_band;
    VAR_9->next_band = 0;
    VAR_9->zeroth_band = -1;
    VAR_9->shadow_size_bands = FUNC_2(VAR_3, VAR_4);
    VAR_9->block_size = VAR_5;
    return (VAR_9);

 failure:
    if (VAR_6)
 FUNC_3(VAR_6);
    if (VAR_8)
 FUNC_3(VAR_8);
    return (((void*)0));
}
