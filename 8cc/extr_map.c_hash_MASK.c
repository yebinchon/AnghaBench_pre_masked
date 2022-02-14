
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(char *VAR_0) {

    uint32_t VAR_1 = 2166136261;
    for (; *VAR_0; VAR_0++) {
        VAR_1 ^= *VAR_0;
        VAR_1 *= 16777619;
    }
    return VAR_1;
}
