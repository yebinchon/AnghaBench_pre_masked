
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_partition_t ;
typedef int BYTE ;


 int VAR_0 ;
 int const** VAR_1 ;

BYTE FUNC_0(const esp_partition_t* VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        if (VAR_2 == VAR_1[VAR_3]) {
            return VAR_3;
        }
    }
    return 0xff;
}
