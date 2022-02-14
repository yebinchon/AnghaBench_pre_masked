
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int printbuffer ;
typedef int cJSON_bool ;


 unsigned char* FUNC_0 (int * const,int) ;
 int FUNC_1 (unsigned char*,unsigned char const* const,size_t) ;
 int FUNC_2 (char*,char*,unsigned char const) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static cJSON_bool FUNC_4(const unsigned char * const VAR_0, printbuffer * const VAR_1)
{
    const unsigned char *VAR_2 = ((void*)0);
    unsigned char *VAR_3 = ((void*)0);
    unsigned char *VAR_4 = ((void*)0);
    size_t VAR_5 = 0;

    size_t VAR_6 = 0;

    if (VAR_1 == ((void*)0))
    {
        return 0;
    }


    if (VAR_0 == ((void*)0))
    {
        VAR_3 = FUNC_0(VAR_1, sizeof("\"\""));
        if (VAR_3 == ((void*)0))
        {
            return 0;
        }
        FUNC_3((char*)VAR_3, "\"\"");

        return 1;
    }


    for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
    {
        switch (*VAR_2)
        {
            case '\"':
            case '\\':
            case '\b':
            case '\f':
            case '\n':
            case '\r':
            case '\t':

                VAR_6++;
                break;
            default:
                if (*VAR_2 < 32)
                {

                    VAR_6 += 5;
                }
                break;
        }
    }
    VAR_5 = (size_t)(VAR_2 - VAR_0) + VAR_6;

    VAR_3 = FUNC_0(VAR_1, VAR_5 + sizeof("\"\""));
    if (VAR_3 == ((void*)0))
    {
        return 0;
    }


    if (VAR_6 == 0)
    {
        VAR_3[0] = '\"';
        FUNC_1(VAR_3 + 1, VAR_0, VAR_5);
        VAR_3[VAR_5 + 1] = '\"';
        VAR_3[VAR_5 + 2] = '\0';

        return 1;
    }

    VAR_3[0] = '\"';
    VAR_4 = VAR_3 + 1;

    for (VAR_2 = VAR_0; *VAR_2 != '\0'; (void)VAR_2++, VAR_4++)
    {
        if ((*VAR_2 > 31) && (*VAR_2 != '\"') && (*VAR_2 != '\\'))
        {

            *VAR_4 = *VAR_2;
        }
        else
        {

            *VAR_4++ = '\\';
            switch (*VAR_2)
            {
                case '\\':
                    *VAR_4 = '\\';
                    break;
                case '\"':
                    *VAR_4 = '\"';
                    break;
                case '\b':
                    *VAR_4 = 'b';
                    break;
                case '\f':
                    *VAR_4 = 'f';
                    break;
                case '\n':
                    *VAR_4 = 'n';
                    break;
                case '\r':
                    *VAR_4 = 'r';
                    break;
                case '\t':
                    *VAR_4 = 't';
                    break;
                default:

                    FUNC_2((char*)VAR_4, "u%04x", *VAR_2);
                    VAR_4 += 4;
                    break;
            }
        }
    }
    VAR_3[VAR_5 + 1] = '\"';
    VAR_3[VAR_5 + 2] = '\0';

    return 1;
}
