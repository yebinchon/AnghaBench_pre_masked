
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* UID ;



__attribute__((used)) static int FUNC_0(const UID VAR_0, const UID VAR_1, int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (VAR_3 != 7 && VAR_0[VAR_3] != VAR_1[VAR_3])
            return 0;
    }
    return 1;
}
