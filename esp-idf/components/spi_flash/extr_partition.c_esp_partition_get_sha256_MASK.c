
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int type; int size; int address; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,int ,int ,int *) ;

esp_err_t FUNC_1(const esp_partition_t *VAR_0, uint8_t *VAR_1)
{
    return FUNC_0(VAR_0->address, VAR_0->size, VAR_0->type, VAR_1);
}
