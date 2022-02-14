
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
    if (VAR_0 < 0x10)
        return VAR_0 << 6;
    else if (VAR_0 < 0x20)
        return (VAR_0 - 8) << 7;
    else
        return (VAR_0 - 20) << 8;
}
