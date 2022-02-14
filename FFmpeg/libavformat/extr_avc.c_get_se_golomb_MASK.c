
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(GetBitContext *VAR_0) {
    int VAR_1 = FUNC_0(VAR_0) + 1;
    int VAR_2 = -(VAR_1 & 1);
    return ((VAR_1 >> 1) ^ VAR_2) - VAR_2;
}
