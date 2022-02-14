
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



void FUNC_0(int VAR_0, uint32_t VAR_1) {
    asm volatile (
        "WER %0,%1"
        ::"r"(VAR_1),"r"(VAR_0)
    );
}
