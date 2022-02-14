
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void *VAR_0, int VAR_1, unsigned long long VAR_2)
{
    if (!VAR_0) return;
    switch (VAR_1) {
    case 130:
        *(char *)VAR_0 = VAR_2;
        break;
    case 131:
        *(short *)VAR_0 = VAR_2;
        break;
    case 132:
        *(int *)VAR_0 = VAR_2;
        break;
    case 129:
        *(long *)VAR_0 = VAR_2;
        break;
    case 128:
        *(long long *)VAR_0 = VAR_2;
        break;
    }
}
