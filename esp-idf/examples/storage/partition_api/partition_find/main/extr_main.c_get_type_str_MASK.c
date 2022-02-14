
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_partition_type_t ;





__attribute__((used)) static const char* FUNC_0(esp_partition_type_t VAR_0)
{
    switch(VAR_0) {
        case 129:
            return "ESP_PARTITION_TYPE_APP";
        case 128:
            return "ESP_PARTITION_TYPE_DATA";
        default:
            return "UNKNOWN_PARTITION_TYPE";
    }
}
