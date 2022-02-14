
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline bool FUNC_0(char VAR_0)
{
    if ((VAR_0 >= '0') && (VAR_0 <= '9')) {
        return 1;
    }
    if ((VAR_0 >= 'a') && (VAR_0 <= 'f')) {
        return 1;
    }
    return ((VAR_0 >= 'A') && (VAR_0 <= 'F'));
}
