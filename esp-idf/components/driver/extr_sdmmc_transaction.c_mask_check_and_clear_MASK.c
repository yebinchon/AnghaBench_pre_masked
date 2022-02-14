
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline bool FUNC_0(uint32_t* VAR_0, uint32_t VAR_1) {
    bool VAR_2 = ((*VAR_0) & VAR_1) != 0;
    *VAR_0 &= ~VAR_1;
    return VAR_2;
}
