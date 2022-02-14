
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline int FUNC_0(uint32_t VAR_0, uint32_t VAR_1, bool VAR_2)
{
    int VAR_3;
    if (VAR_0 & (~(VAR_1 >> 1) & VAR_1)) {

        if (VAR_2) {
            VAR_3 = -(((~VAR_0) + 1) & (VAR_1 >> 1));
        } else {
            VAR_3 = -(VAR_0 & (VAR_1 >> 1));
        }
    } else {

        VAR_3 = VAR_0 & (VAR_1 >> 1);
    }
    return VAR_3;
}
