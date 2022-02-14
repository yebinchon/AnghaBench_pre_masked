
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(unsigned int VAR_0, unsigned int VAR_1)
{
    unsigned int VAR_2 = 0, VAR_3, VAR_4;

    do {
        ++VAR_2;
        for (VAR_3 = 0, VAR_4 = VAR_2; VAR_3 < VAR_1 - 1; VAR_3++)
            VAR_4 *= VAR_2;
    } while (VAR_4 <= VAR_0);

    return VAR_2 - 1;
}
