
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const unsigned *VAR_0)
{
    if (VAR_0[0] >= '0' && VAR_0[0] <= '9' &&
        VAR_0[1] >= '0' && VAR_0[1] <= '9') {
        return (VAR_0[0] - '0') * 10 + (VAR_0[1] - '0');
    } else {
        return 100;
    }
}
