
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(int VAR_0, const char *VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_1)
        return VAR_2 ? VAR_1 : "";
    if (VAR_2 && VAR_2%VAR_3) {
        return ", ";
    } else
        return VAR_3 < VAR_0 ? "\n" : "";
}
