
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; int offset; } ;
typedef TYPE_1__ esp_partition_pos_t ;
typedef int esp_image_metadata_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,int *) ;

__attribute__((used)) static bool FUNC_3(const esp_partition_pos_t *VAR_2, esp_image_metadata_t *VAR_3)
{
    if (VAR_2->size == 0) {
        FUNC_0(VAR_1, "Can't boot from zero-length partition");
        return 0;
    }
    return 0;
}
