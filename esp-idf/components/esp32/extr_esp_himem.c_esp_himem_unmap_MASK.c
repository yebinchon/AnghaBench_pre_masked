
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* esp_himem_rangehandle_t ;
typedef int esp_err_t ;
struct TYPE_7__ {scalar_t__ is_mapped; } ;
struct TYPE_6__ {int ram_block; scalar_t__ is_mapped; } ;
struct TYPE_5__ {int block_start; int block_ct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;

esp_err_t FUNC_6(esp_himem_rangehandle_t VAR_7, void *VAR_8, size_t VAR_9)
{



    int VAR_10 = (uint32_t)VAR_8 - VAR_3;
    int VAR_11 = (VAR_10 / VAR_0) - VAR_7->block_start;
    int VAR_12 = VAR_9 / VAR_0;
    FUNC_0(VAR_10 % VAR_0 != 0, "range offset not block-aligned", VAR_1);
    FUNC_0(VAR_9 % VAR_0 != 0, "map length not block-aligned", VAR_1);
    FUNC_0(VAR_11 + VAR_12 > VAR_7->block_ct, "range out of bounds for handle", VAR_1);

    FUNC_3(&VAR_6);
    for (int VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
        int VAR_14 = VAR_5[VAR_7->block_start + VAR_13 + VAR_11].ram_block;
        FUNC_1(FUNC_5(VAR_14));
        VAR_4[VAR_14].is_mapped = 0;
        VAR_5[VAR_7->block_start + VAR_13 + VAR_11].is_mapped = 0;
    }
    FUNC_2();
    FUNC_4(&VAR_6);
    return VAR_2;
}
