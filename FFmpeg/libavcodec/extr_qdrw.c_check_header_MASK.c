
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int VAR_1)
{
    unsigned VAR_2, VAR_3, VAR_4, VAR_5;

    if (VAR_1 < 40)
        return 0;

    VAR_2 = FUNC_0(VAR_0+6);
    VAR_3 = FUNC_0(VAR_0+8);
    VAR_4 = FUNC_0(VAR_0+10);
    VAR_5 = FUNC_0(VAR_0+12);

    if (!VAR_2 || !VAR_3)
        return 0;

    if (VAR_4 == 0x1101)
        return 1;
    if (VAR_4 == 0x0011 && VAR_5 == 0x02FF)
        return 2;
    return 0;
}
