
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0){
    while(*VAR_0){
        if(*VAR_0 < 0x08 || (*VAR_0 > 0x0D && *VAR_0 < 0x20))
            *VAR_0='?';
        VAR_0++;
    }
}
