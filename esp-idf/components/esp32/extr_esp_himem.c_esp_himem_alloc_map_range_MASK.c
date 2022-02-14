
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* esp_himem_rangehandle_t ;
struct TYPE_7__ {int block_ct; int block_start; } ;
typedef TYPE_1__ esp_himem_rangedata_t ;
typedef int esp_err_t ;
struct TYPE_8__ {int is_alloced; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

esp_err_t FUNC_5(size_t VAR_9, esp_himem_rangehandle_t *VAR_10)
{
    FUNC_0(VAR_5 == ((void*)0), "Himem not available!", VAR_2);
    FUNC_0(VAR_9 % VAR_0 != 0, "requested size not aligned to blocksize", VAR_1);
    int VAR_11 = VAR_9 / VAR_0;
    esp_himem_rangedata_t *VAR_12 = FUNC_1(sizeof(esp_himem_rangedata_t), 1);
    if (!VAR_12) {
        return VAR_3;
    }
    VAR_12->block_ct = VAR_11;
    VAR_12->block_start = -1;
    int VAR_13 = 0;
    FUNC_3(&VAR_8);
    for (int VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
        if (VAR_6[VAR_14].is_alloced) {
            VAR_13 = VAR_14 + 1;
        } else if (VAR_14 - VAR_13 == VAR_11 - 1) {

            VAR_12->block_start = VAR_13;
            break;
        }
    }

    if (VAR_12->block_start == -1) {

        FUNC_2(VAR_12);
        FUNC_4(&VAR_8);
        return VAR_3;
    }

    for (int VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
        VAR_6[VAR_12->block_start + VAR_15].is_alloced = 1;
    }
    FUNC_4(&VAR_8);

    *VAR_10 = VAR_12;
    return VAR_4;
}
