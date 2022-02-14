
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int block_ct; struct TYPE_6__* block; } ;
typedef TYPE_1__ esp_himem_ramdata_t ;
typedef TYPE_1__* esp_himem_handle_t ;
typedef int esp_err_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,TYPE_1__*) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

esp_err_t FUNC_5(size_t VAR_5, esp_himem_handle_t *VAR_6)
{
    if (VAR_5 % VAR_0 != 0) {
        return VAR_1;
    }
    int VAR_7 = VAR_5 / VAR_0;
    esp_himem_ramdata_t *VAR_8 = FUNC_1(sizeof(esp_himem_ramdata_t), 1);
    if (!VAR_8) {
        goto nomem;
    }
    VAR_8->block = FUNC_1(sizeof(uint16_t), VAR_7);
    if (!VAR_8->block) {
        goto nomem;
    }
    FUNC_3(&VAR_4);
    int VAR_9 = FUNC_0(VAR_7, VAR_8->block);
    FUNC_4(&VAR_4);
    if (!VAR_9) {
        goto nomem;
    }
    VAR_8->block_ct = VAR_7;
    *VAR_6 = VAR_8;
    return VAR_3;
nomem:
    if (VAR_8) {
        FUNC_2(VAR_8->block);
    }
    FUNC_2(VAR_8);
    return VAR_2;
}
