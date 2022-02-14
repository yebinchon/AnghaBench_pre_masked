
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int alphaset ;


 int FUNC_0 () ;

void FUNC_1(uint8_t *VAR_0, int VAR_1)
{
    const char VAR_2[] = "abcdefghijklmnopqrstuvw012345678";

    while (VAR_1 > 0)
    {
        if (VAR_1 >= sizeof (uint32_t))
        {
            int VAR_3;
            uint32_t VAR_4 = FUNC_0();

            for (VAR_3 = 0; VAR_3 < sizeof (uint32_t); VAR_3++)
            {
                uint8_t VAR_5 = VAR_4 & 0xff;

                VAR_4 = VAR_4 >> 8;
                VAR_5 = VAR_5 >> 3;

                *VAR_0++ = VAR_2[VAR_5];
            }
            VAR_1 -= sizeof (uint32_t);
        }
        else
        {
            *VAR_0++ = FUNC_0() % (sizeof (VAR_2));
            VAR_1--;
        }
    }
}
