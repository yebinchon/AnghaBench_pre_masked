
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_partition_type_t ;
typedef int esp_partition_subtype_t ;
typedef int * esp_partition_iterator_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,char const*) ;

esp_partition_iterator_t FUNC_3(esp_partition_type_t VAR_1,
        esp_partition_subtype_t VAR_2, const char* VAR_3)
{
    if (FUNC_0() != VAR_0) {
        return ((void*)0);
    }


    esp_partition_iterator_t VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);

    VAR_4 = FUNC_1(VAR_4);

    return VAR_4;
}
