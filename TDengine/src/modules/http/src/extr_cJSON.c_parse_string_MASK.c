
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* deallocate ) (unsigned char*) ;scalar_t__ (* allocate ) (int) ;} ;
struct TYPE_8__ {unsigned char const* content; size_t length; size_t offset; TYPE_1__ hooks; } ;
typedef TYPE_2__ parse_buffer ;
typedef int cJSON_bool ;
struct TYPE_9__ {char* valuestring; int type; } ;
typedef TYPE_3__ cJSON ;


 unsigned char const* FUNC_0 (TYPE_2__* const) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char FUNC_3 (unsigned char const*,unsigned char const*,unsigned char**) ;

__attribute__((used)) static cJSON_bool FUNC_4(cJSON * const VAR_1, parse_buffer * const VAR_2)
{
    const unsigned char *VAR_3 = FUNC_0(VAR_2) + 1;
    const unsigned char *VAR_4 = FUNC_0(VAR_2) + 1;
    unsigned char *VAR_5 = ((void*)0);
    unsigned char *VAR_6 = ((void*)0);


    if (FUNC_0(VAR_2)[0] != '\"')
    {
        goto fail;
    }

    {

        size_t VAR_7 = 0;
        size_t VAR_8 = 0;
        while (((size_t)(VAR_4 - VAR_2->content) < VAR_2->length) && (*VAR_4 != '\"'))
        {

            if (VAR_4[0] == '\\')
            {
                if ((size_t)(VAR_4 + 1 - VAR_2->content) >= VAR_2->length)
                {

                    goto fail;
                }
                VAR_8++;
                VAR_4++;
            }
            VAR_4++;
        }
        if (((size_t)(VAR_4 - VAR_2->content) >= VAR_2->length) || (*VAR_4 != '\"'))
        {
            goto fail;
        }


        VAR_7 = (size_t) (VAR_4 - FUNC_0(VAR_2)) - VAR_8;
        VAR_6 = (unsigned char*)VAR_2->hooks.allocate(VAR_7 + sizeof(""));
        if (VAR_6 == ((void*)0))
        {
            goto fail;
        }
    }

    VAR_5 = VAR_6;

    while (VAR_3 < VAR_4)
    {
        if (*VAR_3 != '\\')
        {
            *VAR_5++ = *VAR_3++;
        }

        else
        {
            unsigned char VAR_9 = 2;
            if ((VAR_4 - VAR_3) < 1)
            {
                goto fail;
            }

            switch (VAR_3[1])
            {
                case 'b':
                    *VAR_5++ = '\b';
                    break;
                case 'f':
                    *VAR_5++ = '\f';
                    break;
                case 'n':
                    *VAR_5++ = '\n';
                    break;
                case 'r':
                    *VAR_5++ = '\r';
                    break;
                case 't':
                    *VAR_5++ = '\t';
                    break;
                case '\"':
                case '\\':
                case '/':
                    *VAR_5++ = VAR_3[1];
                    break;


                case 'u':
                    VAR_9 = FUNC_3(VAR_3, VAR_4, &VAR_5);
                    if (VAR_9 == 0)
                    {

                        goto fail;
                    }
                    break;

                default:
                    goto fail;
            }
            VAR_3 += VAR_9;
        }
    }


    *VAR_5 = '\0';

    VAR_1->type = VAR_0;
    VAR_1->valuestring = (char*)VAR_6;

    VAR_2->offset = (size_t) (VAR_4 - VAR_2->content);
    VAR_2->offset++;

    return 1;

fail:
    if (VAR_6 != ((void*)0))
    {
        VAR_2->hooks.deallocate(VAR_6);
    }

    if (VAR_3 != ((void*)0))
    {
        VAR_2->offset = (size_t)(VAR_3 - VAR_2->content);
    }

    return 0;
}
