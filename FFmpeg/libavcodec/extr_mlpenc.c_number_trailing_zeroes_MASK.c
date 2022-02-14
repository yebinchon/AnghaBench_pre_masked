
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;



__attribute__((used)) static int FUNC_0(int32_t VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < 24 && !(VAR_0 & (1<<VAR_1)); VAR_1++);



    if (VAR_1 == 24)
        return 0;

    return VAR_1;
}
