
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1)
{
    int VAR_2 = 2 * (VAR_0 & 0x001F) + (VAR_1 & 0x001F);
    int VAR_3 = (2 * (VAR_0 & 0x03E0) + (VAR_1 & 0x03E0)) >> 5;
    int VAR_4 = 2 * (VAR_0 >> 10) + (VAR_1 >> 10);
    return VAR_4 / 3 * 1024 + VAR_3 / 3 * 32 + VAR_2 / 3;
}
