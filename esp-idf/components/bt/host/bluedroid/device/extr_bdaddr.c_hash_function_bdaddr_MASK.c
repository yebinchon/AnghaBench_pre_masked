
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash_index_t ;
typedef int bt_bdaddr_t ;



hash_index_t FUNC_0(const void *VAR_0)
{
    hash_index_t VAR_1 = 5381;
    const char *VAR_2 = (const char *)VAR_0;
    for (size_t VAR_3 = 0; VAR_3 < sizeof(bt_bdaddr_t); ++VAR_3) {
        VAR_1 = ((VAR_1 << 5) + VAR_1) + VAR_2[VAR_3];
    }
    return VAR_1;
}
