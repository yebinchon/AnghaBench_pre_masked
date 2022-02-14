
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(const float VAR_0){
    union {
        int i;
        float y;
    } VAR_1;

    float VAR_2;
    const float VAR_3 = 1.5f;

    VAR_2 = VAR_0 * 0.5f;
    VAR_1.y = VAR_0;

    VAR_1.i = 0x5f375a86 - (VAR_1.i >> 1);
    VAR_1.y = VAR_1.y * (VAR_3 - (VAR_2 * VAR_1.y * VAR_1.y));



    return (VAR_0 * VAR_1.y);
}
