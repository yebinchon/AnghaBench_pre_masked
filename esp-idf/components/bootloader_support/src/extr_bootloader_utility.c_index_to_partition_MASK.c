
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ esp_partition_pos_t ;
struct TYPE_6__ {int app_count; TYPE_1__* ota; TYPE_1__ test; TYPE_1__ factory; } ;
typedef TYPE_2__ bootloader_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static esp_partition_pos_t FUNC_0(const bootloader_state_t *VAR_3, int VAR_4)
{
    if (VAR_4 == VAR_0) {
        return VAR_3->factory;
    }

    if (VAR_4 == VAR_2) {
        return VAR_3->test;
    }

    if (VAR_4 >= 0 && VAR_4 < VAR_1 && VAR_4 < VAR_3->app_count) {
        return VAR_3->ota[VAR_4];
    }

    esp_partition_pos_t VAR_5 = { 0 };
    return VAR_5;
}
