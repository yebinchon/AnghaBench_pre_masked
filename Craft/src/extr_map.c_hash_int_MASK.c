
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0) {
    VAR_0 = ~VAR_0 + (VAR_0 << 15);
    VAR_0 = VAR_0 ^ (VAR_0 >> 12);
    VAR_0 = VAR_0 + (VAR_0 << 2);
    VAR_0 = VAR_0 ^ (VAR_0 >> 4);
    VAR_0 = VAR_0 * 2057;
    VAR_0 = VAR_0 ^ (VAR_0 >> 16);
    return VAR_0;
}
