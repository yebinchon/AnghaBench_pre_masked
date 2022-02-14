
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* esp_himem_rangehandle_t ;
typedef int esp_err_t ;
struct TYPE_6__ {int is_alloced; int is_mapped; } ;
struct TYPE_5__ {int block_ct; int block_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

esp_err_t FUNC_6(esp_himem_rangehandle_t VAR_4)
{

    for (int VAR_5 = 0; VAR_5 < VAR_4->block_ct; VAR_5++) {
        FUNC_1(FUNC_5(VAR_4->block_start + VAR_5));
        FUNC_1(VAR_2[VAR_5 + VAR_4->block_start].is_alloced == 1);
        FUNC_0(VAR_2[VAR_5 + VAR_4->block_start].is_mapped, "memory still mapped to range", VAR_0);
    }

    FUNC_3(&VAR_3);
    for (int VAR_6 = 0; VAR_6 < VAR_4->block_ct; VAR_6++) {
        VAR_2[VAR_6 + VAR_4->block_start].is_alloced = 0;
    }
    FUNC_4(&VAR_3);
    FUNC_2(VAR_4);
    return VAR_1;
}
