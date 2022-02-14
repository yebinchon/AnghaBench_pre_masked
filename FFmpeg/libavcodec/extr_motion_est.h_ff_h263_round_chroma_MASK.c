
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline int FUNC_0(int VAR_0)
{

    static const uint8_t VAR_1[16] = {

        0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1,
    };
    return VAR_1[VAR_0 & 0xf] + (VAR_0 >> 3);
}
