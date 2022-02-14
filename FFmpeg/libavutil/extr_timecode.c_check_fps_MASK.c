
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(int VAR_0)
{
    int VAR_1;
    static const int VAR_2[] = {
        24, 25, 30, 48, 50, 60, 100, 120, 150,
    };

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_2); VAR_1++)
        if (VAR_0 == VAR_2[VAR_1])
            return 0;
    return -1;
}
