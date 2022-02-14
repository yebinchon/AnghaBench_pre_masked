
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 unsigned int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static unsigned char FUNC_1(const unsigned char * const VAR_0, const unsigned char * const VAR_1, unsigned char **VAR_2)
{
    uint64_t VAR_3 = 0;
    unsigned int VAR_4 = 0;
    const unsigned char *VAR_5 = VAR_0;
    unsigned char VAR_6 = 0;
    unsigned char VAR_7 = 0;
    unsigned char VAR_8 = 0;
    unsigned char VAR_9 = 0;

    if ((VAR_1 - VAR_5) < 6)
    {

        goto fail;
    }


    VAR_4 = FUNC_0(VAR_5 + 2);


    if (((VAR_4 >= 0xDC00) && (VAR_4 <= 0xDFFF)))
    {
        goto fail;
    }


    if ((VAR_4 >= 0xD800) && (VAR_4 <= 0xDBFF))
    {
        const unsigned char *VAR_10 = VAR_5 + 6;
        unsigned int VAR_11 = 0;
        VAR_8 = 12;

        if ((VAR_1 - VAR_10) < 6)
        {

            goto fail;
        }

        if ((VAR_10[0] != '\\') || (VAR_10[1] != 'u'))
        {

            goto fail;
        }


        VAR_11 = FUNC_0(VAR_10 + 2);

        if ((VAR_11 < 0xDC00) || (VAR_11 > 0xDFFF))
        {

            goto fail;
        }



        VAR_3 = 0x10000 + (((VAR_4 & 0x3FF) << 10) | (VAR_11 & 0x3FF));
    }
    else
    {
        VAR_8 = 6;
        VAR_3 = VAR_4;
    }




    if (VAR_3 < 0x80)
    {

        VAR_6 = 1;
    }
    else if (VAR_3 < 0x800)
    {

        VAR_6 = 2;
        VAR_9 = 0xC0;
    }
    else if (VAR_3 < 0x10000)
    {

        VAR_6 = 3;
        VAR_9 = 0xE0;
    }
    else if (VAR_3 <= 0x10FFFF)
    {

        VAR_6 = 4;
        VAR_9 = 0xF0;
    }
    else
    {

        goto fail;
    }


    for (VAR_7 = (unsigned char)(VAR_6 - 1); VAR_7 > 0; VAR_7--)
    {

        (*VAR_2)[VAR_7] = (unsigned char)((VAR_3 | 0x80) & 0xBF);
        VAR_3 >>= 6;
    }

    if (VAR_6 > 1)
    {
        (*VAR_2)[0] = (unsigned char)((VAR_3 | VAR_9) & 0xFF);
    }
    else
    {
        (*VAR_2)[0] = (unsigned char)(VAR_3 & 0x7F);
    }

    *VAR_2 += VAR_6;

    return VAR_8;

fail:
    return 0;
}
