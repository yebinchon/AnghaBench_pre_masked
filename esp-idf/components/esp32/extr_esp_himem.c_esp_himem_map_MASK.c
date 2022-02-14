
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* esp_himem_rangehandle_t ;
typedef TYPE_2__* esp_himem_handle_t ;
typedef int esp_err_t ;
struct TYPE_10__ {int is_mapped; } ;
struct TYPE_9__ {int is_mapped; size_t ram_block; } ;
struct TYPE_8__ {int block_ct; size_t* block; } ;
struct TYPE_7__ {int block_ct; int block_start; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (size_t) ;
 TYPE_4__* VAR_8 ;
 TYPE_3__* VAR_9 ;
 int FUNC_5 (scalar_t__,size_t,int) ;
 int VAR_10 ;

esp_err_t FUNC_6(esp_himem_handle_t VAR_11, esp_himem_rangehandle_t VAR_12, size_t VAR_13, size_t VAR_14, size_t VAR_15, int VAR_16, void **VAR_17)
{
    int VAR_18 = VAR_13 / VAR_0;
    int VAR_19 = VAR_14 / VAR_0;
    int VAR_20 = VAR_15 / VAR_0;
    FUNC_0(VAR_8 == ((void*)0), "Himem not available!", VAR_3);

    FUNC_0(VAR_13 % VAR_0 != 0, "ram offset not aligned to blocksize", VAR_1);
    FUNC_0(VAR_14 % VAR_0 != 0, "range not aligned to blocksize", VAR_1);
    FUNC_0(VAR_15 % VAR_0 != 0, "length not aligned to blocksize", VAR_1);

    FUNC_0(VAR_18 + VAR_20 > VAR_11->block_ct, "args not in range of phys ram handle", VAR_2);
    FUNC_0(VAR_19 + VAR_20 > VAR_12->block_ct, "args not in range of range handle", VAR_2);


    for (int VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
        FUNC_0(VAR_8[VAR_11->block[VAR_21 + VAR_18]].is_mapped, "ram already mapped", VAR_3);
        FUNC_0(VAR_9[VAR_12->block_start + VAR_21 + VAR_19].is_mapped, "range already mapped", VAR_3);
    }


    FUNC_2(&VAR_10);
    for (int VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
        FUNC_1(FUNC_4(VAR_11->block[VAR_22 + VAR_18]));
        VAR_8[VAR_11->block[VAR_22 + VAR_18]].is_mapped = 1;
        VAR_9[VAR_12->block_start + VAR_22 + VAR_19].is_mapped = 1;
        VAR_9[VAR_12->block_start + VAR_22 + VAR_19].ram_block = VAR_11->block[VAR_22 + VAR_18];
    }
    FUNC_3(&VAR_10);
    for (int VAR_23 = 0; VAR_23 < VAR_20; VAR_23++) {
        FUNC_5(VAR_6 + VAR_12->block_start + VAR_23 + VAR_19, VAR_11->block[VAR_23 + VAR_18] + VAR_5, 1);
    }


    *VAR_17 = (void *)(VAR_7 + (VAR_12->block_start + VAR_14) * VAR_0);
    return VAR_4;
}
