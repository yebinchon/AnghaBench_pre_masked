
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static inline int64_t FUNC_1(const uint8_t *VAR_0) {
    return (int64_t)(*VAR_0 & 0x0e) << 29 |
            (FUNC_0(VAR_0+1) >> 1) << 15 |
             FUNC_0(VAR_0+3) >> 1;
}
