
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(const unsigned char * const VAR_0)
{
    unsigned int VAR_1 = 0;
    size_t VAR_2 = 0;

    for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
    {

        if ((VAR_0[VAR_2] >= '0') && (VAR_0[VAR_2] <= '9'))
        {
            VAR_1 += (unsigned int) VAR_0[VAR_2] - '0';
        }
        else if ((VAR_0[VAR_2] >= 'A') && (VAR_0[VAR_2] <= 'F'))
        {
            VAR_1 += (unsigned int) 10 + VAR_0[VAR_2] - 'A';
        }
        else if ((VAR_0[VAR_2] >= 'a') && (VAR_0[VAR_2] <= 'f'))
        {
            VAR_1 += (unsigned int) 10 + VAR_0[VAR_2] - 'a';
        }
        else
        {
            return 0;
        }

        if (VAR_2 < 3)
        {

            VAR_1 = VAR_1 << 4;
        }
    }

    return VAR_1;
}
