
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline int FUNC_0(const uint8_t *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0[0] & 0x3f;

    switch ((VAR_0[3] >> 3) & 0x07) {
    case 0:
        return VAR_2 + (VAR_1 ? 1896 : 1580);
    case 1:
        return VAR_2 + (VAR_1 ? 1742 : 1452);
    case 2:
    default:
        return VAR_2 + (VAR_1 ? 1264 : 1053);
    }
}
