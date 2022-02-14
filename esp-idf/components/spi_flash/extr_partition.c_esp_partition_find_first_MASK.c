
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_partition_type_t ;
typedef int esp_partition_t ;
typedef int esp_partition_subtype_t ;
typedef int * esp_partition_iterator_t ;


 int * FUNC_0 (int ,int ,char const*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

const esp_partition_t* FUNC_3(esp_partition_type_t VAR_0,
        esp_partition_subtype_t VAR_1, const char* VAR_2)
{
    esp_partition_iterator_t VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }
    const esp_partition_t* VAR_4 = FUNC_1(VAR_3);
    FUNC_2(VAR_3);
    return VAR_4;
}
