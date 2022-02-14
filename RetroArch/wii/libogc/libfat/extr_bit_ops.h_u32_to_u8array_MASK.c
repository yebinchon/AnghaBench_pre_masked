
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static inline void FUNC_0 (uint8_t* VAR_0, int VAR_1, uint32_t VAR_2) {
 VAR_0[VAR_1] = (uint8_t) VAR_2;
 VAR_0[VAR_1 + 1] = (uint8_t)(VAR_2 >> 8);
 VAR_0[VAR_1 + 2] = (uint8_t)(VAR_2 >> 16);
 VAR_0[VAR_1 + 3] = (uint8_t)(VAR_2 >> 24);
}
