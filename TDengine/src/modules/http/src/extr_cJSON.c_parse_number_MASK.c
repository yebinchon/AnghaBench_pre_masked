
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t offset; int * content; } ;
typedef TYPE_1__ parse_buffer ;
typedef int number_c_string ;
typedef double int64_t ;
typedef int cJSON_bool ;
struct TYPE_8__ {double valuedouble; double valueint; int type; } ;
typedef TYPE_2__ cJSON ;


 double VAR_0 ;
 double VAR_1 ;
 int* FUNC_0 (TYPE_1__* const) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__* const,size_t) ;
 unsigned char FUNC_2 () ;
 double FUNC_3 (char const*,char**) ;

__attribute__((used)) static cJSON_bool FUNC_4(cJSON * const VAR_3, parse_buffer * const VAR_4)
{
    double VAR_5 = 0;
    unsigned char *VAR_6 = ((void*)0);
    unsigned char VAR_7[64];
    unsigned char VAR_8 = FUNC_2();
    size_t VAR_9 = 0;

    if ((VAR_4 == ((void*)0)) || (VAR_4->content == ((void*)0)))
    {
        return 0;
    }




    for (VAR_9 = 0; (VAR_9 < (sizeof(VAR_7) - 1)) && FUNC_1(VAR_4, VAR_9); VAR_9++)
    {
        switch (FUNC_0(VAR_4)[VAR_9])
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '+':
            case '-':
            case 'e':
            case 'E':
                VAR_7[VAR_9] = FUNC_0(VAR_4)[VAR_9];
                break;

            case '.':
                VAR_7[VAR_9] = VAR_8;
                break;

            default:
                goto loop_end;
        }
    }
loop_end:
    VAR_7[VAR_9] = '\0';

    VAR_5 = FUNC_3((const char*)VAR_7, (char**)&VAR_6);
    if (VAR_7 == VAR_6)
    {
        return 0;
    }

    VAR_3->valuedouble = VAR_5;


    if (VAR_5 >= VAR_0)
    {
        VAR_3->valueint = VAR_0;
    }
    else if (VAR_5 <= VAR_1)
    {
        VAR_3->valueint = VAR_1;
    }
    else
    {
        VAR_3->valueint = (int64_t)VAR_5;
    }

    VAR_3->type = VAR_2;

    VAR_4->offset += (size_t)(VAR_6 - VAR_7);
    return 1;
}
