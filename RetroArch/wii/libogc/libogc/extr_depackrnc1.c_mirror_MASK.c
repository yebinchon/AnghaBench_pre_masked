
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long FUNC_0 (unsigned long VAR_0, int VAR_1) {
    unsigned long VAR_2 = 1 << (VAR_1-1), VAR_3 = 1;
    while (VAR_2 > VAR_3) {
 unsigned long VAR_4 = VAR_2 | VAR_3;
 unsigned long VAR_5 = VAR_0 & VAR_4;
 if (VAR_5 != 0 && VAR_5 != VAR_4)
     VAR_0 ^= VAR_4;
 VAR_2 >>= 1;
 VAR_3 <<= 1;
    }
    return VAR_0;
}
