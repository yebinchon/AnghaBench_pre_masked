
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash_index_t ;


 size_t FUNC_0 (char const*) ;

hash_index_t FUNC_1(const void *VAR_0)
{
    hash_index_t VAR_1 = 5381;
    const char *VAR_2 = (const char *)VAR_0;
    size_t VAR_3 = FUNC_0(VAR_2);
    for (size_t VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
        VAR_1 = ((VAR_1 << 5) + VAR_1 ) + VAR_2[VAR_4];
    }
    return VAR_1;
}
