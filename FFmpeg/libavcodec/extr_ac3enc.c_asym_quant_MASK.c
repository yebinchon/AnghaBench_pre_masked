
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;

    VAR_0 = (((VAR_0 * (1<<VAR_1)) >> (24 - VAR_2)) + 1) >> 1;
    VAR_3 = (1 << (VAR_2-1));
    if (VAR_0 >= VAR_3)
        VAR_0 = VAR_3 - 1;
    FUNC_0(VAR_0 >= -VAR_3);
    return VAR_0;
}
